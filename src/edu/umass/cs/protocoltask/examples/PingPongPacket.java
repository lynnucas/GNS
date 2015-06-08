package edu.umass.cs.protocoltask.examples;

import org.json.JSONException;
import org.json.JSONObject;

import edu.umass.cs.nio.IntegerPacketType;
import edu.umass.cs.nio.JSONPacket;
import edu.umass.cs.nio.Stringifiable;
import edu.umass.cs.nio.StringifiableDefault;
import edu.umass.cs.protocoltask.json.ProtocolPacket;
import edu.umass.cs.utils.IntegerPacketTypeMap;

/**
 * @author V. Arun
 */
public class PingPongPacket extends ProtocolPacket<Integer, PingPongPacket.PacketType> { // BasicPacket implements ProtocolEvent<Packet.PacketType,Long> {

	public enum PacketType implements IntegerPacketType {
		TEST_PING(222), TEST_PONG(223);

		private final int number;

		PacketType(int t) {
			this.number = t;
		}

		public int getInt() {
			return number;
		}

		public static final IntegerPacketTypeMap<PacketType> intToType = new IntegerPacketTypeMap<PacketType>(
				PacketType.values());
	}

	public static final String FIELD1 = "FIELD1";
	public static final String COUNTER = "COUNTER";
	
	public static final Stringifiable<Integer> unstringer = new StringifiableDefault<Integer>(0);
	
	public final String field1 = "PingPong"; // unnecessary field
	private int counter = 0;

	public PingPongPacket(int initiator, PacketType t) {
		super(initiator);
		this.setType(t);
	}

	public PingPongPacket(JSONObject json) throws JSONException {
		super(json, unstringer);
		this.setType(getPacketType(json));
		this.counter = (json.has(COUNTER) ? json.getInt(COUNTER) : 0);
	}

	public void incrCounter() {
		this.counter++;
	}

	public int getCounter() {
		return this.counter;
	}

	public Integer flip(int rcvr) { // flip sender/reciever and ping/pong type
		if (this.getType() == PacketType.TEST_PING) 
			this.setType(PacketType.TEST_PONG);
		else if (this.getType() == PacketType.TEST_PONG)
			this.setType(PacketType.TEST_PING);
		return super.flip(rcvr);
	}

	@Override
	public JSONObject toJSONObjectImpl() throws JSONException {
		JSONObject json = new JSONObject();
		json.put(FIELD1, this.field1);
		json.put(COUNTER, this.counter);
		return json;
	}

	@Override
	public Object getMessage() {
		return this;
	}

	@Override
	public PacketType getPacketType(JSONObject json) throws JSONException {
		return PacketType.intToType.get(JSONPacket.getPacketType(json));
	}

	@Override
	public void putPacketType(JSONObject json, PacketType type) throws JSONException {
		JSONPacket.putPacketType(json, type);
	}
}
