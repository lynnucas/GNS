/*
 * Copyright (C) 2013
 * University of Massachusetts
 * All Rights Reserved 
 */
package edu.umass.cs.gns.localnameserver;

import edu.umass.cs.gns.clientsupport.Admintercessor;
import edu.umass.cs.gns.clientsupport.Intercessor;
import edu.umass.cs.gns.localnameserver.gnamed.DnsTranslator;
import edu.umass.cs.gns.localnameserver.gnamed.UdpDnsServer;
import edu.umass.cs.gns.localnameserver.httpserver.GnsHttpServer;
import edu.umass.cs.gns.main.GNS;
import edu.umass.cs.gns.main.RequestHandlerParameters;
import edu.umass.cs.gns.main.StartLocalNameServer;
import edu.umass.cs.gns.nsdesign.Shutdownable;
import edu.umass.cs.gns.nsdesign.nodeconfig.GNSNodeConfig;
import edu.umass.cs.gns.nsdesign.replicationframework.ReplicationFrameworkType;
import edu.umass.cs.gns.ping.PingManager;
import edu.umass.cs.gns.test.StartExperiment;
import java.io.IOException;
import java.net.BindException;
import java.net.Inet4Address;
import java.net.InetSocketAddress;

/**
 * This class represents the functions of a Local Name Server.
 *
 * @author Westy
 * @param <NodeIDType>
 */
public class LocalNameServer<NodeIDType> implements Shutdownable {

  /**
   * Handles the client support processing for the local name server.
   */
  private Intercessor<NodeIDType> intercessor;
  
  /**
   * Handles administrative client support for the local name server.
   */
  private Admintercessor<NodeIDType> admintercessor;

  /**
   * Ping manager object for pinging other nodes and updating ping latencies.
   */
  private PingManager<NodeIDType> pingManager;

  /**
   * We keep a pointer to the gnsNodeConfig so we can shut it down.
   */
  private GNSNodeConfig<NodeIDType> gnsNodeConfig;

  /**
   * We keep a pointer to the udpDnsServer so we can shut it down.
   */
  private UdpDnsServer udpDnsServer;

  /**
   * We keep a pointer to the dnsTranslator so we can shut it down.
   */
  private DnsTranslator dnsTranslator;
  
  /**
   * We also keep a pointer to the lnsListenerAdmin so we can shut it down.
   */
  private LNSListenerAdmin<NodeIDType> lnsListenerAdmin;
 
  /**
   * Constructs a local name server and assigns it a node id.
   *
   * @throws IOException
   */
  public LocalNameServer(InetSocketAddress nodeAddress, GNSNodeConfig<NodeIDType> gnsNodeConfig) throws IOException, InterruptedException {
    System.out.println("Log level: " + GNS.getLogger().getLevel().getName());
    // Keep a copy of this so we can shut it down later
    this.gnsNodeConfig = gnsNodeConfig;
    GNS.getLogger().info("GNS Version: " + GNS.readBuildVersion());
    RequestHandlerParameters parameters = new RequestHandlerParameters(StartLocalNameServer.debuggingEnabled,
            StartLocalNameServer.experimentMode,
            StartLocalNameServer.emulatePingLatencies,
            StartLocalNameServer.variation,
            StartLocalNameServer.adaptiveTimeout,
            StartLocalNameServer.outputSampleRate,
            StartLocalNameServer.queryTimeout,
            StartLocalNameServer.maxQueryWaitTime,
            StartLocalNameServer.cacheSize,
            StartLocalNameServer.loadDependentRedirection,
            StartLocalNameServer.replicationFramework
    );

    GNS.getLogger().info("Parameter values: " + parameters.toString());
    ClientRequestHandlerInterface<NodeIDType> requestHandler = new BasicClientRequestHandler<NodeIDType>(this, nodeAddress, gnsNodeConfig, parameters);

    this.intercessor = new Intercessor<NodeIDType>(requestHandler);
    
    this.admintercessor = new Admintercessor<NodeIDType>();
   
    if (!parameters.isExperimentMode()) { // creates exceptions with multiple local name servers on a machine
      GnsHttpServer.runHttp(requestHandler);
    }

    if (!parameters.isEmulatePingLatencies()) {
      // we emulate latencies based on ping latency given in config file,
      // and do not want ping latency values to be updated by the ping module.
      GNS.getLogger().info("LNS running at " + nodeAddress + " started Ping server on port " + GNS.DEFAULT_LNS_PING_PORT);
      this.pingManager = new PingManager<NodeIDType>(null, gnsNodeConfig);
      pingManager.startPinging();
    }

    // After starting PingManager because it accesses PingManager.
    (this.lnsListenerAdmin = new LNSListenerAdmin<NodeIDType>(requestHandler, pingManager)).start();
    
    // The Admintercessor needs to use the LNSListenerAdmin;
    this.admintercessor.setListenerAdmin(lnsListenerAdmin);

    if (parameters.getReplicationFramework() == ReplicationFrameworkType.LOCATION) {
      new NameServerVoteThread<NodeIDType>(StartLocalNameServer.voteIntervalMillis, requestHandler).start();
    }

    if (parameters.isExperimentMode()) {
      GNS.getLogger().info("Starting experiment ..... ");
      new StartExperiment<NodeIDType>().startMyTest(null, StartLocalNameServer.workloadFile, StartLocalNameServer.updateTraceFile,
              requestHandler);
    }

    try {
      if (StartLocalNameServer.dnsGnsOnly) {
        dnsTranslator = new DnsTranslator(Inet4Address.getByName("0.0.0.0"), 53, requestHandler);
        dnsTranslator.start();
      } else if (StartLocalNameServer.dnsOnly) {
        if (StartLocalNameServer.gnsServerIP == null) {
          GNS.getLogger().severe("FAILED TO START DNS SERVER: GNS Server IP is missing or invalid");
          return;
        }
        GNS.getLogger().warning("gns server IP" + StartLocalNameServer.gnsServerIP);
        udpDnsServer = new UdpDnsServer(Inet4Address.getByName("0.0.0.0"), 53, "8.8.8.8", StartLocalNameServer.gnsServerIP, requestHandler);
        udpDnsServer.start();
      } else {
        udpDnsServer = new UdpDnsServer(Inet4Address.getByName("0.0.0.0"), 53, "8.8.8.8", null, requestHandler);
        udpDnsServer.start();
      }
    } catch (BindException e) {
      GNS.getLogger().warning("Not running DNS Service because it needs root permission! If you want DNS run the LNS using sudo.");
    }

  }
  
  @Override
  public void shutdown() {
    if (udpDnsServer != null) {
      udpDnsServer.shutdown();
    }
    if (dnsTranslator != null) {
      dnsTranslator.shutdown();
    }
    if (gnsNodeConfig != null) {
      gnsNodeConfig.shutdown();
    }
    if (pingManager != null) {
      pingManager.shutdown();
    }
    if (lnsListenerAdmin != null) {
      lnsListenerAdmin.shutdown();
    }
  }
  
   /**
   * Retrieves the Intercessor.
   * 
   * @return 
   */
  public Intercessor<NodeIDType> getIntercessor() {
    return intercessor;
  }
  
   /**
   * Retrieves the Admintercessor.
   * 
   * @return 
   */
  public Admintercessor<NodeIDType> getAdmintercessor() {
    return admintercessor;
  }

}
