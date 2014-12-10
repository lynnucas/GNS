package edu.umass.cs.gns.gigapaxos.multipaxospacket;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import edu.umass.cs.gns.gigapaxos.paxosutil.Ballot;

import java.util.HashMap;
import java.util.Map;

public class PrepareReplyPacket extends PaxosPacket {

	public final Ballot ballot;
	public final int acceptor;
	public final Map<Integer, PValuePacket> accepted;

	public PrepareReplyPacket(int receiverID, Ballot ballot, Map<Integer, PValuePacket> accepted) {
		super(accepted==null || accepted.isEmpty() ? (PaxosPacket)null : accepted.values().iterator().next());
		this.acceptor = receiverID;
		this.ballot = ballot;
		this.accepted = accepted==null ? new HashMap<Integer,PValuePacket>() : accepted;
		this.packetType = PaxosPacketType.PREPARE_REPLY;
	}


	public PrepareReplyPacket(JSONObject json) throws JSONException{
		super(json);
		assert(PaxosPacket.getPaxosPacketType(json)==PaxosPacketType.PREPARE_REPLY);
		this.packetType = PaxosPacket.getPaxosPacketType(json);
		this.acceptor = json.getInt(PaxosPacket.NodeIDKeys.ACCEPTOR.toString());
		this.ballot = new Ballot(json.getString(PaxosPacket.NodeIDKeys.BALLOT.toString()));
		this.accepted = parseJsonForAccepted(json);
	}

	private HashMap<Integer, PValuePacket> parseJsonForAccepted(JSONObject json) throws JSONException {
		HashMap<Integer, PValuePacket> accepted = new HashMap<Integer, PValuePacket>();
		if (json.has(PaxosPacket.Keys.ACCEPTED_MAP.toString())) {
			JSONArray jsonArray = json.getJSONArray(PaxosPacket.Keys.ACCEPTED_MAP.toString());
			for (int i = 0; i < jsonArray.length(); i++) {
				JSONObject element = jsonArray.getJSONObject(i);
				PValuePacket pval = new PValuePacket(element);
				accepted.put(pval.slot, pval);
			}
		}
		return accepted;
	}


	@Override
	public JSONObject toJSONObjectImpl() throws JSONException
	{
		JSONObject json = new JSONObject();
		json.put(PaxosPacket.NodeIDKeys.ACCEPTOR.toString(), acceptor);
		json.put(PaxosPacket.NodeIDKeys.BALLOT.toString(), ballot.toString());
		assert(this.packetType == PaxosPacketType.PREPARE_REPLY);
		addAcceptedToJSON(json);
		return json;
	}

	public int getMinSlot() {
		return getMinSlot(this.accepted);
	}
	private int getMinSlot(Map<Integer,PValuePacket> acceptedMap) {
		int minSlot = Integer.MAX_VALUE;
		if(acceptedMap!=null && !acceptedMap.isEmpty()) {
			for(Integer curSlot : acceptedMap.keySet()) {
				if(curSlot < minSlot) minSlot = curSlot;
			}
		} else minSlot = -1;
		return minSlot;
	}

	private void addAcceptedToJSON(JSONObject json) throws JSONException{
		if (accepted != null ) {
			JSONArray jsonArray  = new JSONArray();
			for (PValuePacket pValue : accepted.values()) {
				jsonArray.put(pValue.toJSONObject());
			}
			json.put(PaxosPacket.Keys.ACCEPTED_MAP.toString(), jsonArray);
		}
	}
}