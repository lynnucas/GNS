package edu.umass.cs.nio.nioutils;

import org.json.JSONException;
import org.json.JSONObject;

import edu.umass.cs.nio.JSONMessenger;
import edu.umass.cs.utils.Util;

/**
 * @author V. Arun
 * 
 *         Helps instrument read/write stats in NIOTransport. Used for testing
 *         and instrumentation purposes only. 
 */

public class NIOInstrumenter {
	private static int totalSent = 0; // Sent by NIOTransport or GNSNIOTransport
	private static int totalRcvd = 0; // Received by NIOTransport or
										// GNSNIOTransport
	private static int totalConnAccepted = 0; // NIOTransport
	private static int totalConnInitiated = 0; // NIOTransport
	private static int totalJSONRcvd = 0; // JSONMessageWorker
	private static int totalPktsRcvd = 0; // PacketDemultiplexer
	private static double averageDelay = 0;
	private static boolean enabled = true;

	public static synchronized void incrSent() {
		totalSent++;
	}

	public static synchronized void incrRcvd() {
		totalRcvd++;
	}

	public static synchronized void incrAccepted() {
		totalConnAccepted++;
	}

	public static synchronized void incrInitiated() {
		totalConnInitiated++;
	}

	public static synchronized void incrJSONRcvd() {
		totalJSONRcvd++;
	}

	public static synchronized void incrPktsRcvd() {
		totalPktsRcvd++;
	}

	public static synchronized void rcvdJSONPacket(JSONObject msg)
			throws JSONException {
		if (msg.has(JSONMessenger.SENT_TIME)) {
			averageDelay = Util.movingAverage(
					System.currentTimeMillis()
							- msg.getLong(JSONMessenger.SENT_TIME),
					averageDelay);
		}
	}

	public static synchronized int getMissing() {
		return totalSent - totalJSONRcvd;
	}

	public void disable() {
		enabled = (enabled ? false : false);
	}

	public void enable() {
		enabled = true;
	}

	public synchronized static String getJSONStats() {
		return "[NIO stats: [ #sent=" + totalSent + " | #rcvd=" + totalJSONRcvd
				+ " | avgNIODelay=" + Util.mu(averageDelay) + "]]";
	}

	public String toString() {
		String s = "";
		return s
				+ "NIO stats: [totalSent = "
				+ totalSent
				+ ", totalRcvd = "
				+ totalRcvd
				+ (totalSent != totalRcvd ? ", missing-or-batched = "
						+ (totalSent - totalRcvd) : "") + "]"
				+ "\n\t [totalConnInitiated = " + totalConnInitiated
				+ ", totalConnAccepted = " + totalConnAccepted + "]"
				+ "\nJSONMessageWorker: [totalJSONRcvd = " + totalJSONRcvd
				+ "]" + "\nDefaultPacketDemultiplexer:  [totalPktsRcvd = "
				+ totalPktsRcvd + "]";
	}
}
