package edu.umass.cs.gns.nameserver.replicacontroller;

import edu.umass.cs.gns.main.GNS;
import edu.umass.cs.gns.main.StartNameServer;
import edu.umass.cs.gns.nameserver.NSListenerUDP;
import edu.umass.cs.gns.nameserver.NameServer;
import edu.umass.cs.gns.nameserver.ValuesMap;
import edu.umass.cs.gns.packet.*;
import edu.umass.cs.gns.packet.Packet.PacketType;
import edu.umass.cs.gns.packet.paxospacket.FailureDetectionPacket;
import edu.umass.cs.gns.packet.paxospacket.PaxosPacketType;
import edu.umass.cs.gns.packet.paxospacket.RequestPacket;
import edu.umass.cs.gns.paxos.PaxosManager;
import org.json.JSONException;
import org.json.JSONObject;

import java.util.HashSet;
import java.util.Random;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

public class ReplicaController {

  /**
   * TODO add doc here
   */
  public static int TIMEOUT_INTERVAL = 5000;

  /**
   * TODO add doc here
   */
  private static ConcurrentHashMap<String, RemoveRecordPacket> removeRecordRequests = new ConcurrentHashMap<String, RemoveRecordPacket>();


  /**
   * returns true if the given paxosID belongs to that between primary name servers for a name
   * @param paxosID
   * @return
   */
  public static boolean isPrimaryPaxosID(String paxosID) {
    if (paxosID == null) {
      GNS.getLogger().severe("Error Exception: PaxosID is null. String = " + paxosID);
      return false;
    }

    if (paxosID.endsWith("-P")) return true;
    return  false;
  }

  /**
   * Return ID of the paxos instance among primary name servers for the record.
   *
   * @param nameRecord
   */
  public static String getPrimaryPaxosID(ReplicaControllerRecord nameRecord)
  {
    return getPrimaryPaxosID(nameRecord.getName());
  }

  /**
   * Returns ID of the paxos instance between primaries for this name.
   * @param name
   * @return
   */
  public static String getPrimaryPaxosID(String name) {
    return  name + "-P";
  }

  /**
   * Reverse lookup for name given the ID of the paxos instance between primaries.
   * @param primaryPaxosID
   * @return
   */
  public static String getNameFromPrimaryPaxosID(String primaryPaxosID) {
    String[] tokens = primaryPaxosID.split("-");
    if (tokens.length == 2 && tokens[1].equals("P")) {
      return tokens[0];
    }
    GNS.getLogger().severe("Error Exception: String is not a valid primaryPaxosID. String = " + primaryPaxosID);

    return  null;
  }

  /**
   * Return ID of the paxos instance among active name servers of this record.
   *
   * @param nameRecord
   */
  public static String getActivePaxosID(ReplicaControllerRecord nameRecord)
  {
    Random r = new Random();
    return nameRecord.getName() // + "-" + nameRecord.getRecordKey().getName()
            + "-" + r.nextInt(100000000);
  }

  /**
   * Reverse lookup for name given the paxosID between actives.
   * @param activePaxosID
   * @return
   */
  public static String getNameFromActivePaxosID(String activePaxosID) {
    String[] tokens = activePaxosID.split("-");
    if (tokens.length == 2) {
      return tokens[0];
    }
    GNS.getLogger().severe("Error Exception: String is not a valid activePaxosID. String = " + activePaxosID);
    return  null;
  }



  public static void handleNameRecordAddAtPrimary(ReplicaControllerRecord recordEntry, ValuesMap valuesMap) {
    HashSet<Integer> primaries = recordEntry.getPrimaryNameservers();
//        if (StartNameServer.debugMode) GNS.getLogger().fine(recordEntry.getName() +
//                "\tBefore Paxos instance created for name: " + recordEntry.getName()
//                        + " Primaries: " + primaries);
    PaxosManager.createPaxosInstance(getPrimaryPaxosID(recordEntry), primaries, recordEntry.toString());
//		if (StartNameServer.debugMode) GNS.getLogger().fine(recordEntry.getName()  +
//				"\tPaxos instance created for name: " + recordEntry.getName()
//						+ " Primaries: " + primaries);
    startupNewActives(recordEntry, valuesMap);
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(recordEntry.getName()
              + "\tStartup new actives.: " + recordEntry.getName()
              + " Primaries: " + primaries);
    }
  }

  public static void handleNameRecordRemoveRequestAtPrimary(JSONObject json) throws JSONException {
    // 1. stop current actives
    // 2. stop current primaries
    // 3. send confirmation to client.
    RemoveRecordPacket removeRecord = new RemoveRecordPacket(json);
    //ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimaryLazy(removeRecord.getName());
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(removeRecord.getName());
    //NameServer.getNameRecord(removeRecord.getName()//, removeRecord.getRecordKey()

    if (nameRecordPrimary != null && nameRecordPrimary.isPrimaryReplica()) {
      if (nameRecordPrimary.isRemoved()) { // if removed, send confirm to client
        ConfirmUpdateLNSPacket confirmPacket = new ConfirmUpdateLNSPacket(NameServer.nodeID,
                true, removeRecord);

        NSListenerUDP.udpTransport.sendPacket(confirmPacket.toJSONObject(),
                confirmPacket.getLocalNameServerId(), GNS.PortType.LNS_UPDATE_PORT);
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine("Record already remove. Sent confirmation to client. Name = " + removeRecord.getName());
        }
         return;
      }
      if (nameRecordPrimary.isMarkedForRemoval() == true) {
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine("Already marked for removal. Name record will "
                  + "be deleted soon. So request is dropped.");
        }
        return;
      }
      // propose this to primary paxos
      String primaryPaxosID = getPrimaryPaxosID(nameRecordPrimary);
      PaxosManager.propose(primaryPaxosID,
              new RequestPacket(removeRecord.getType().getInt(), removeRecord.toString(), PaxosPacketType.REQUEST, false));
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("PAXOS PROPOSAL: Proposed mark for removal in primary paxos. Packet = " + removeRecord);
      }
      removeRecordRequests.put(getPrimaryPaxosID(nameRecordPrimary), removeRecord);

    } else {
      // return failure, because record was not even found in deleted state
      ConfirmUpdateLNSPacket confirmPacket = new ConfirmUpdateLNSPacket(NameServer.nodeID,
              false, removeRecord);
      NSListenerUDP.udpTransport.sendPacket(confirmPacket.toJSONObject(),
              confirmPacket.getLocalNameServerId(), GNS.PortType.LNS_UPDATE_PORT);
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("Record not found. Sent failure confirmation to client. Name = " + removeRecord.getName());
      }
      GNS.getLogger().severe(" REMOVE RECORD ERROR!! Name: " + removeRecord.getName()
              // + " Record key: " + removeRecord.getRecordKey()
              + " NAME RECORD: " + nameRecordPrimary);
      if (nameRecordPrimary != null) {
        GNS.getLogger().severe(" REMOVE RECORD PRIMARY: " + nameRecordPrimary.getPrimaryNameservers());
      }
    }
  }




  public static void applyRemovedRecordPacket(String value) throws JSONException {
    // create a remove record object
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine("PAXOS DECISION remove record packet accepted by paxos: " + value);
    }
    RemoveRecordPacket removeRecord = new RemoveRecordPacket(new JSONObject(value));
    // 
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(removeRecord.getName());

    if (nameRecordPrimary != null && nameRecordPrimary.isPrimaryReplica()) {
      if (nameRecordPrimary.isMarkedForRemoval() == true) {
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine("PAXOS DECISION  not applied. Already marked for removal. Name record will "
                  + "be deleted soon. So request is dropped.");
        }
        return;
      }
      nameRecordPrimary.setMarkedForRemoval();
      NameServer.updateNameRecordPrimary(nameRecordPrimary);
      stopRunningActiveToRemoveNameRecord(nameRecordPrimary);

    } else {
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("ERROR: remove record message reached non-primary name server or record not found.");
      }
    }
  }

  static void stopRunningActiveToRemoveNameRecord(ReplicaControllerRecord nameRecord) {

    if (StartNameServer.debugMode) {
      GNS.getLogger().fine("PAXOS DECISON applied. Name Record marked for removal.");
    }
    ReplicaControllerRecord.ACTIVE_STATE stage = nameRecord.getNewActiveTransitionStage();
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine("ACTIVE Transition currently in stage = " + stage);
    }
    switch (stage) {
      case ACTIVE_RUNNING:
        createTaskToStopCurrentActives(nameRecord);

        break;
      default:
        break;
    }

//		else if (stage == 2) { // old active stopped, new active yet to run
//			// when new active runs, send message to stop it.
//			
//		}
//		else if (stage == 1) { // old active not yet stopped
//			// wait for old active to stop. that process must be in progress.
//		}

  }

  public static void startupNewActives(ReplicaControllerRecord nameRecord, ValuesMap initialValue) {
    // this method will schedule a timer task to startup active replicas.
    StartupActiveSetTask startupTask = new StartupActiveSetTask(
            nameRecord.getName(),
            nameRecord.getOldActiveNameservers(),
            nameRecord.copyActiveNameServers(),
            nameRecord.getActivePaxosID(), nameRecord.getOldActivePaxosID(), initialValue);
    // scheduled
    NameServer.timer.schedule(startupTask, 0, TIMEOUT_INTERVAL);
  }

  /**
   * Create a task to stop old actives from this name record.
   *
   * @param nameRecord
   */
  public static void stopOldActives(ReplicaControllerRecord nameRecord) {
    // this method will schedule a timer task to startup active replicas.
    StopActiveSetTask task = new StopActiveSetTask(nameRecord.getName(),
            // nameRecord.getRecordKey(), 
            nameRecord.getOldActiveNameservers(), nameRecord.copyActiveNameServers(),
            nameRecord.getOldActivePaxosID());
    NameServer.timer.schedule(task, 0, TIMEOUT_INTERVAL);
  }


  public static void handleIncomingPacket(JSONObject json) {

    try {
      switch (Packet.getPacketType(json)) {
        case NEW_ACTIVE_START_CONFIRM_TO_PRIMARY:
          NewActiveSetStartupPacket packet = new NewActiveSetStartupPacket(
                  json);
          newActiveStartupReceivedConfirmationFromActive(packet);
          break;
        case OLD_ACTIVE_STOP_CONFIRM_TO_PRIMARY:
          OldActiveSetStopPacket oldPacket = new OldActiveSetStopPacket(
                  json);
          oldActiveStoppedReceivedConfirmationFromActive(oldPacket);
          break;
        default:
          break;
      }
    } catch (JSONException e) {
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("JSON Exception here.");
      }
      e.printStackTrace();
    } catch (Exception e) {
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("Exception in Replication controller .... ." + e.getMessage());
      }
      e.printStackTrace();
    }
  }

  public static void newActiveStartupReceivedConfirmationFromActive(
          NewActiveSetStartupPacket packet) {
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "NEW_ACTIVE_START: Received confirmation at primary. "
                      + packet.getName());
    }
    //ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimaryLazy(packet.getName());
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(packet.getName());
//                NameServer.getNameRecord(packet.getName()//,packet.getRecordKey()
//                        );
    if (nameRecordPrimary != null) {
    }
    String paxosID = getPrimaryPaxosID(nameRecordPrimary);

    ChangeActiveStatusPacket proposePacket = new ChangeActiveStatusPacket(
            packet.getNewActivePaxosID(), nameRecordPrimary.getName(),
            //nameRecord.getRecordKey(),
            PacketType.NEW_ACTIVE_START_CONFIRM_TO_PRIMARY);

    PaxosManager.propose(paxosID, new RequestPacket(
            PacketType.NEW_ACTIVE_START_CONFIRM_TO_PRIMARY.getInt(),
            proposePacket.toString(), PaxosPacketType.REQUEST, false));
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "PAXOS PROPOSAL: New Active Started for Name: "
                      + nameRecordPrimary.getName() + " Paxos ID = "
                      + nameRecordPrimary.getActivePaxosID() + " New Actives: "
                      + packet.getNewActiveNameServers());
    }

    //
    // write to name record object using Primary-paxos that newActive is
    // running
    // no more events.

  }

  public static void oldActiveStoppedReceivedConfirmationFromActive(
          OldActiveSetStopPacket packet) {
    // write to name record object using Primary-paxos that oldActive is
    // stopped
    // schedule new active startup event: StartupReplicaSetTask

    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "OLD ACTIVE STOP: Received confirmation at primary. Name = "
                      + packet.getName());
    }
    //ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimaryLazy(packet.getName());
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(packet.getName());
//                NameServer.getNameRecord(packet.getName()//,packet.getRecordKey()
//                        );

    String paxosID = getPrimaryPaxosID(nameRecordPrimary);

    if (nameRecordPrimary.isMarkedForRemoval() == true) {
      PaxosManager.propose(paxosID,
              new RequestPacket(PacketType.PRIMARY_PAXOS_STOP.getInt(),
                      packet.toString(), PaxosPacketType.REQUEST, true));
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("PAXOS PROPOSAL PROPOSED STOP COMMAND because "
                + "name record is marked for removal: " + packet.toString());
      }
      return;
    }

    ChangeActiveStatusPacket proposePacket = new ChangeActiveStatusPacket(
            packet.getPaxosIDToBeStopped(), nameRecordPrimary.getName(),
            //nameRecord.getRecordKey(),
            PacketType.OLD_ACTIVE_STOP_CONFIRM_TO_PRIMARY);

    PaxosManager.propose(paxosID, new RequestPacket(
            PacketType.OLD_ACTIVE_STOP_CONFIRM_TO_PRIMARY.getInt(),
            proposePacket.toString(), PaxosPacketType.REQUEST, false));
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "PAXOS PROPOSAL: Old Active Stopped for  Name: "
                      + nameRecordPrimary.getName() + " Old Paxos ID = "
                      + nameRecordPrimary.getOldActivePaxosID());
    }
  }

  public static void newActiveStartedWriteToNameRecord(String decision)
          throws JSONException {
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "PAXOS DECISION: new active started. write to nameRecord: "
                      + decision);
    }
    ChangeActiveStatusPacket packet = new ChangeActiveStatusPacket(
            new JSONObject(decision));
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(packet.getName());

    if (nameRecordPrimary != null) {
      if (nameRecordPrimary.setNewActiveRunning(packet.getPaxosID())) {
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine("New Active paxos running for name : "
                  + nameRecordPrimary.getName() + " Paxos ID: " + packet.getPaxosID());
        }
      } else {
        if (StartNameServer.debugMode) {
          GNS.getLogger()
                  .fine("IGNORE MSG: NEW Active PAXOS ID NOT FOUND while setting "
                          + "it to inactive. Already received msg before. Paxos ID = "
                          + packet.getPaxosID());
        }
      }

      if (nameRecordPrimary.isMarkedForRemoval() == true) {
        createTaskToStopCurrentActives(nameRecordPrimary);
      }
      NameServer.updateNameRecordPrimary(nameRecordPrimary);

    } else {
      if (StartNameServer.debugMode) {
        GNS.getLogger().severe(
                "ERROR: NAME RECORD NOT FOUND AT PRIMARY NAME SERVER !!!!");
      }
    }
  }

  public static void oldActiveStoppedWriteToNameRecord(String decision)
          throws JSONException {
    ChangeActiveStatusPacket packet = new ChangeActiveStatusPacket(
            new JSONObject(decision));
    ReplicaControllerRecord nameRecordPrimary = NameServer.getNameRecordPrimary(packet.getName());

    if (StartNameServer.debugMode) {
      GNS.getLogger().fine(
              "PAXOS DECISION: old active stoppped. write to nameRecord: "
                      + decision);
    }
    if (nameRecordPrimary != null) {
      if (nameRecordPrimary.setOldActiveStopped(packet.getPaxosID())) {
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine(
                  "OLD Active paxos stopped. Name: "
                          + nameRecordPrimary.getName() + " Old Paxos ID: "
                          + packet.getPaxosID());
        }
        NameServer.updateNameRecordPrimary(nameRecordPrimary);
        startupNewActives(nameRecordPrimary, null);
      } else {
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine(
                  "INGORE MSG: OLD PAXOS ID NOT FOUND IN NAME RECORD "
                          + "while setting it to inactive: "
                          + packet.getPaxosID());
        }
      }
    } else {
      if (StartNameServer.debugMode) {
        GNS.getLogger().severe(
                "ERROR: NAME RECORD NOT FOUND AT PRIMARY NAME SERVER !!!!");
      }
    }
  }

  private static void createTaskToStopCurrentActives(ReplicaControllerRecord nameRecord) {
    // UPDATE NAME RECORD AFTER YOU CALL THIS //
    nameRecord.updateActiveNameServers(nameRecord.copyActiveNameServers(), getActivePaxosID(nameRecord));
    NameServer.updateNameRecordPrimary(nameRecord);
//        NameServer.updateNameRecord(nameRecord);

    // create task to stop currently running active.
    StopActiveSetTask stopTask = new StopActiveSetTask(nameRecord.getName(),
            //nameRecord.getRecordKey(), 
            nameRecord.getOldActiveNameservers(),
            nameRecord.getOldActiveNameservers(), nameRecord.getOldActivePaxosID());
    NameServer.timer.schedule(stopTask, 0, TIMEOUT_INTERVAL);
  }

  public static void applyStopPrimaryPaxos(String value) throws JSONException {
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine("PAXOS DECISION stop primary paxos decision received.");
    }
    OldActiveSetStopPacket packet = new OldActiveSetStopPacket(new JSONObject(value));
    String paxosID = getPrimaryPaxosID(packet.getName()//, packet.getRecordKey()
    );
//		String name = packet.getName();
    RemoveRecordPacket removeRecordPacket = removeRecordRequests.remove(paxosID);

    ReplicaControllerRecord record = NameServer.getNameRecordPrimary(packet.getName());
    if (record != null) record.setRemoved();
    GNS.getLogger().fine("RECORD MARKED AS REMOVED IN REPLICA CONTROLLER DB");
//    NameServer.removeNameRecordPrimary(packet.getName());

//        NameServer.removeNameRecord(packet.getName());

//		PaxosManager.deletePaxosInstance(paxosID);

//    if (StartNameServer.debugMode) {

//    }

    if (removeRecordPacket != null) {
      ConfirmUpdateLNSPacket confirmPacket = new ConfirmUpdateLNSPacket(NameServer.nodeID,
              true, removeRecordPacket);
      NSListenerUDP.udpTransport.sendPacket(confirmPacket.toJSONObject(),
              confirmPacket.getLocalNameServerId(), GNS.PortType.LNS_UPDATE_PORT);
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("REMOVE RECORD SENT RESPONSE TO LNS");
      }
    }
  }

  private static void handlePrimaryFailureForNameRecord(ReplicaControllerRecord nameRecord, int failedNode) {
    // if this node is primary

    if (nameRecord.containsPrimaryNameserver(NameServer.nodeID) && nameRecord.containsPrimaryNameserver(failedNode)) {
      if (StartNameServer.debugMode) {
        GNS.getLogger().fine("NODE FAILURE: This node is not a primary name server.: ");
      }
    }


    ReplicaControllerRecord.ACTIVE_STATE stage = nameRecord.getNewActiveTransitionStage();
    if (StartNameServer.debugMode) {
      GNS.getLogger().fine("Handling node failure for name record: " + nameRecord.getName()
              + " Failed Node: " + failedNode + " STAGE = " + stage);
    }
    switch (stage) {
      case ACTIVE_RUNNING:
        if (nameRecord.isMarkedForRemoval()) {
          stopRunningActiveToRemoveNameRecord(nameRecord);
        }
        break;
      case OLD_ACTIVE_RUNNING:
        // stop old actives, since we do not know whether old active is stopped or not.
        // if isMarkedForRemoval() == true: then
        // 			(1) we will make sure that old active has stopped
        //			(2) then remove name record
        stopOldActives(nameRecord);
        if (StartNameServer.debugMode) {
          GNS.getLogger().fine(" Started the old actives task. upon failure of node");
        }
        break;
      case NO_ACTIVE_RUNNING:
        // start to run new active replicas, since we do not know whether new active is running or not.
        // if isMarkedForRemoval() == true: then 
        //			(1) make sure new active has started 
        //			(2) next we will stop new active 
        //			(3) then remove name record 
        startupNewActives(nameRecord, null);
        break;
      default:
        break;
    }
  }

  public static void handleNodeFailure(FailureDetectionPacket fdPacket) {
    if (fdPacket.status == true) {
      return;
    }
    int failedNode = fdPacket.responderNodeID;
    GNS.getLogger().fine(" Failed Node Detected: replication controller working. " + failedNode);

//		if (node fails then what happens)
    Set<ReplicaControllerRecord> nameRecords = NameServer.getAllPrimaryNameRecords();
    for (ReplicaControllerRecord record : nameRecords) {
      // if both this node & failed node are primaries.
      if (record.containsPrimaryNameserver(NameServer.nodeID)
              && record.containsPrimaryNameserver(failedNode)) {
        GNS.getLogger().fine(" Handing Failure for Name: " + record.getName()
                //+ " Key: " + record.getRecordKey() 
                + " NAME RECORD: " + record);
        handlePrimaryFailureForNameRecord(record, failedNode);
      }
    }
  }

  public static boolean isSmallestPrimaryRunning(
          Set<Integer> primaryNameServer) {
    int smallestNSUp = -1;
    for (Integer primaryNS : primaryNameServer) {
      if (PaxosManager.isNodeUp(primaryNS)) {
        if (smallestNSUp == -1 || primaryNS < smallestNSUp) {
          smallestNSUp = primaryNS;
        }
      }
    }
    if (smallestNSUp == NameServer.nodeID) {
      return true;
    } else {
      return false;
    }
  }
}
