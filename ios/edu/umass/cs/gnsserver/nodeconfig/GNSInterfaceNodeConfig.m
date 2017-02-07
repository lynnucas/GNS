//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../src/edu/umass/cs/gnsserver/nodeconfig/GNSInterfaceNodeConfig.java
//

#include "J2ObjC_source.h"
#include "edu/umass/cs/gnsserver/nodeconfig/GNSInterfaceNodeConfig.h"

@interface EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig : NSObject

@end

@implementation EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LJavaUtilSet;", 0x401, -1, -1, -1, 0, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x401, -1, -1, -1, 0, -1, -1 },
    { NULL, "I", 0x401, 1, 2, -1, 3, -1, -1 },
    { NULL, "I", 0x401, 4, 2, -1, 3, -1, -1 },
    { NULL, "I", 0x401, 5, 2, -1, 3, -1, -1 },
    { NULL, "J", 0x401, 6, 2, -1, 7, -1, -1 },
    { NULL, "V", 0x401, 8, 9, -1, 10, -1, -1 },
    { NULL, "J", 0x401, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(getReconfigurators);
  methods[1].selector = @selector(getActiveReplicas);
  methods[2].selector = @selector(getAdminPortWithId:);
  methods[3].selector = @selector(getCcpPortWithId:);
  methods[4].selector = @selector(getCcpAdminPortWithId:);
  methods[5].selector = @selector(getPingLatencyWithId:);
  methods[6].selector = @selector(updatePingLatencyWithId:withLong:);
  methods[7].selector = @selector(getVersion);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "()Ljava/util/Set<TNodeIDType;>;", "getAdminPort", "LNSObject;", "(TNodeIDType;)I", "getCcpPort", "getCcpAdminPort", "getPingLatency", "(TNodeIDType;)J", "updatePingLatency", "LNSObject;J", "(TNodeIDType;J)V", "<NodeIDType:Ljava/lang/Object;>Ljava/lang/Object;Ledu/umass/cs/reconfiguration/interfaces/ReconfigurableNodeConfig<TNodeIDType;>;" };
  static const J2ObjcClassInfo _EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig = { "GNSInterfaceNodeConfig", "edu.umass.cs.gnsserver.nodeconfig", ptrTable, methods, NULL, 7, 0x609, 8, 0, -1, -1, -1, 11, -1 };
  return &_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig)
