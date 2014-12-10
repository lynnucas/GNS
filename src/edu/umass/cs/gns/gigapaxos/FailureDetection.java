package edu.umass.cs.gns.gigapaxos;

import java.io.IOException;
import java.util.HashMap;
import java.util.Set;
import java.util.TreeSet;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;
import java.util.logging.Logger;

import edu.umass.cs.gns.nio.InterfaceJSONNIOTransport;

import org.json.JSONException;
import org.json.JSONObject;

import edu.umass.cs.gns.paxos.PaxosConfig;
import edu.umass.cs.gns.gigapaxos.multipaxospacket.FailureDetectionPacket;

/**
@author V. Arun
 */

/* FailureDetection provides failure detection for all nodes specified
 * by its monitor(.) interface. It really doesn't have much to do 
 * with paxos coz it is just a node monitoring utility. It allows
 * the failure detection overhead across all paxos instances on a
 * node to be amortized so that the overhead is no greater than
 * all nodes monitoring all other nodes.
 * 
 * There is one failure detection instance per machine. This class could 
 * be static, but it is not so that we can test emulations involving
 * multiple "machines" within a JVM.
 * 
 * Testability: This class is not yet unit-testable. Both PaxosManager 
 * and TESTPaxosMain test this class. 
 */
public class FailureDetection<NodeIDType> {
	// final static 
	private static final double MAX_FAILURE_DETECTION_TRAFFIC = 1/100.0; // 1 ping per 100ms total at each node
	private static final double PING_PERTURBATION_FACTOR = 0.25; // pings randomly spaced within inter_ping_period_millis times this factor
	
	// static
	private static long node_detection_timeout_millis = 6000; // ms
	private static long inter_ping_period_millis = node_detection_timeout_millis/2;
	private static long coordinator_failure_detection_timeout = 3*node_detection_timeout_millis; // run for coordinator even if not next-in-line 
	private static final long initTime = System.currentTimeMillis() - node_detection_timeout_millis;

	// final 
	private final ScheduledExecutorService execpool = Executors.newScheduledThreadPool(5);
	private final NodeIDType myID;
	private final InterfaceJSONNIOTransport<NodeIDType> nioTransport;

	// non-final 
	private Set<NodeIDType> monitoredNodes;  // other nodes to which keepalives will be sent
	private HashMap<NodeIDType,Long> lastHeardFrom;
	private HashMap<NodeIDType,ScheduledFuture<PingTask>> futures;

	private static Logger log = Logger.getLogger(FailureDetection.class.getName());

	FailureDetection(NodeIDType id, InterfaceJSONNIOTransport<NodeIDType> niot, PaxosConfig pc) {
		nioTransport = niot;
		myID = id;
		lastHeardFrom = new HashMap<NodeIDType,Long>();
		monitoredNodes = new TreeSet<NodeIDType>();
		futures = new HashMap<NodeIDType,ScheduledFuture<PingTask>>();
		initialize(pc);  // this line needs to be commented for paxos tests to make sense
	}
	FailureDetection(NodeIDType id, InterfaceJSONNIOTransport<NodeIDType> niot) {
		this(id,niot,null);
	}
	
	public void close() {
		this.execpool.shutdownNow();
	}
	// FIXME: Should really not be taking this from outside
	private void initialize(PaxosConfig pc) {
		if(pc==null) return;
		log.severe("Configuring paxos with external failure detection parameters is a bad idea, doing it anyway.");
		node_detection_timeout_millis = pc.getFailureDetectionTimeoutMillis();
		inter_ping_period_millis = pc.getFailureDetectionPingMillis();
		coordinator_failure_detection_timeout = 2*node_detection_timeout_millis;
	}
	// makes sure that FD params are reasonable
	private synchronized boolean adjustFDParams() {
		boolean adjusted = false;
		int numMonitored = this.monitoredNodes.size();
		double load = ((double)numMonitored)/inter_ping_period_millis;
		if(load > MAX_FAILURE_DETECTION_TRAFFIC) {
			inter_ping_period_millis = (long)(numMonitored/MAX_FAILURE_DETECTION_TRAFFIC+1); // +1 to be strictly below
			node_detection_timeout_millis = inter_ping_period_millis*2;
			coordinator_failure_detection_timeout = node_detection_timeout_millis*3;
			assert(inter_ping_period_millis>0); // just to make sure we didn't accidentally (int) cast it 0 above :)
			adjusted = true;
		}
		/* If there was any adjustment above, we need to kill and restart periodic ping tasks
		 * because there is no way to just change their period midway.
		 */
		if(adjusted) {
			for(NodeIDType id : this.monitoredNodes) {
				unMonitor(id);
				monitor(id); // single-depth recursive call to adjustFDParams
			}
		}
		return adjusted;
	}

	/* Synchronized because we don't want monitoredNodes 
	 * getting concurrently read by pingAll().
	 */
	public void monitor(NodeIDType[] nodes) {
		for(int i=0; i<nodes.length; i++) {
			monitor(nodes[i]);
		}
	}
	public void monitor(Set<NodeIDType> nodes) {
		for(NodeIDType id : nodes) {
			monitor(id);
		}
	}

	private synchronized void unMonitor(NodeIDType id) {
		boolean wasPresent = this.monitoredNodes.remove(id); 
		if(wasPresent && this.futures.containsKey(id)) {
			ScheduledFuture<PingTask> pingTask = futures.get(id);
			pingTask.cancel(true);
			futures.remove(id);
		}
	}
	/* Synchronized as it touches monitoredNodes.
	 */
	@SuppressWarnings("unchecked")
	public synchronized void monitor(NodeIDType id)  {
		if(!this.monitoredNodes.contains(id)) this.monitoredNodes.add(id);
		try {
			if(!this.futures.containsKey(id)) {
				PingTask pingTask = new PingTask(id, getPingPacket(id), this.nioTransport);
				/* Not sure how to remove the warnings below. The compiler doesn't seem to like 
				 * ScheduledFuture<PingTask> and spews a cryptic message.
				 */
				ScheduledFuture<?> future = execpool.scheduleAtFixedRate(pingTask, 
						(long)(PING_PERTURBATION_FACTOR*node_detection_timeout_millis*Math.random()), 
						FailureDetection.inter_ping_period_millis, TimeUnit.MILLISECONDS);
				futures.put(id, (ScheduledFuture<FailureDetection<NodeIDType>.PingTask>)future);
			}
		} catch(JSONException e) {
			log.severe("Can not create ping packet at node " + this.myID + " to monitor node " + id);
			e.printStackTrace();
		}
		adjustFDParams(); // check to adjust every time monitor is invoked
	}
	
	protected void receive(FailureDetectionPacket<NodeIDType> fdp) {
		log.finest("Node " + this.myID + " received ping from node " + fdp.senderNodeID);
		this.heardFrom(fdp.senderNodeID);
	}
	/* protected in order to allow paxos instances to provide useful liveliness 
	 * information through the paxos manager.
	 */
	protected synchronized void heardFrom(NodeIDType id) {
		this.lastHeardFrom.put(id, System.currentTimeMillis());
	}

	protected synchronized boolean isNodeUp(NodeIDType id) {
		if(id==this.myID) return true;
		return ((System.currentTimeMillis() - lastHeardTime(id)) < node_detection_timeout_millis);
	}
	protected synchronized boolean lastCoordinatorLongDead(NodeIDType id) {
		return ((System.currentTimeMillis() - lastHeardTime(id)) > FailureDetection.coordinator_failure_detection_timeout);
	}
	private long lastHeardTime(NodeIDType id) {
		Long lastHeard = this.lastHeardFrom.get(id);
		if(lastHeard==null) lastHeard = initTime;
		return lastHeard;
	}
	private JSONObject getPingPacket(NodeIDType id) throws JSONException {
		FailureDetectionPacket<NodeIDType> fdp = new FailureDetectionPacket<NodeIDType>(myID, id, true);
		JSONObject fdpJson = fdp.toJSONObject();
		return fdpJson;
	}

	private class PingTask implements Runnable {
		private final NodeIDType destID;
		private final JSONObject pingJson;
		private final InterfaceJSONNIOTransport<NodeIDType> nioTransport;

		PingTask(NodeIDType id, JSONObject fdpJson, InterfaceJSONNIOTransport<NodeIDType> niot) {
			destID = id;
			pingJson = fdpJson;
			nioTransport = niot;
		}
		public void run() {
			try {
				if(!TESTPaxosConfig.isCrashed(myID)) // only to simulate crashes while testing
					nioTransport.sendToID(destID, pingJson);
			} catch(IOException e) {
				try {
					log.info("Encountered IOException while sending keepalive from node " + 
							pingJson.getInt("sender") + " to node " + destID);
					cleanupFailedPingTask(destID);
				} catch(JSONException je) {
					e.printStackTrace();
				}
			}
		}
	}
	
	/* Currently unused. Will be useful for cleaning up
	 * ping tasks that fail because of exceptions.
	 */
	private synchronized void cleanupFailedPingTask(NodeIDType id) {
		ScheduledFuture<PingTask> pingTask = this.futures.get(id);
		if(pingTask!=null) {
			pingTask.cancel(true);
			this.futures.remove(id);
			monitor(id); 
		}
	}

	// Used only for testing
	protected InterfaceJSONNIOTransport<NodeIDType> getNIOTransport() {
		return this.nioTransport;
	}
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("FAILURE: I am not testable. Try running PaxosManager's test for now.");
	}
}