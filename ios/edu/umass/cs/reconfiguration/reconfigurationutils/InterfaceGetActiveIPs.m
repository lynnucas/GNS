//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/reconfiguration/reconfigurationutils/InterfaceGetActiveIPs.java
//

#include "J2ObjC_source.h"
#include "edu/umass/cs/reconfiguration/reconfigurationutils/InterfaceGetActiveIPs.h"

@interface EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs : NSObject

@end

@implementation EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LJavaUtilArrayList;", 0x401, -1, -1, -1, 0, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(getActiveIPs);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "()Ljava/util/ArrayList<Ljava/net/InetAddress;>;" };
  static const J2ObjcClassInfo _EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs = { "InterfaceGetActiveIPs", "edu.umass.cs.reconfiguration.reconfigurationutils", ptrTable, methods, NULL, 7, 0x609, 1, 0, -1, -1, -1, -1, -1 };
  return &_EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs)
