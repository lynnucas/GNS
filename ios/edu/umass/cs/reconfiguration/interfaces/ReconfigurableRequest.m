//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/reconfiguration/interfaces/ReconfigurableRequest.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "edu/umass/cs/gigapaxos/interfaces/RequestIdentifier.h"
#include "edu/umass/cs/nio/interfaces/IntegerPacketType.h"
#include "edu/umass/cs/reconfiguration/interfaces/ReconfigurableRequest.h"
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/ReconfigurationPacket.h"

@interface EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 : NSObject {
 @public
  id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> this$0_;
}

- (instancetype)initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest:(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest>)outer$;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationInterfacesReconfigurableRequest_1)

__attribute__((unused)) static void EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *self, id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$);

__attribute__((unused)) static EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *new_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$) NS_RETURNS_RETAINED;

__attribute__((unused)) static EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *create_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$);

J2OBJC_INITIALIZED_DEFN(EduUmassCsReconfigurationInterfacesReconfigurableRequest)

id<EduUmassCsNioInterfacesIntegerPacketType> EduUmassCsReconfigurationInterfacesReconfigurableRequest_STOP;

@implementation EduUmassCsReconfigurationInterfacesReconfigurableRequest

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "I", 0x401, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x401, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSObject;", 0x1, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(getEpochNumber);
  methods[1].selector = @selector(isStop);
  methods[2].selector = @selector(getSummary);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "STOP", "LEduUmassCsNioInterfacesIntegerPacketType;", .constantValue.asLong = 0, 0x19, -1, 0, -1, -1 },
  };
  static const void *ptrTable[] = { &EduUmassCsReconfigurationInterfacesReconfigurableRequest_STOP };
  static const J2ObjcClassInfo _EduUmassCsReconfigurationInterfacesReconfigurableRequest = { "ReconfigurableRequest", "edu.umass.cs.reconfiguration.interfaces", ptrTable, methods, fields, 7, 0x609, 3, 1, -1, -1, -1, -1, -1 };
  return &_EduUmassCsReconfigurationInterfacesReconfigurableRequest;
}

+ (void)initialize {
  if (self == [EduUmassCsReconfigurationInterfacesReconfigurableRequest class]) {
    JreStrongAssign(&EduUmassCsReconfigurationInterfacesReconfigurableRequest_STOP, JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType, NO_TYPE));
    J2OBJC_SET_INITIALIZED(EduUmassCsReconfigurationInterfacesReconfigurableRequest)
  }
}

@end

id EduUmassCsReconfigurationInterfacesReconfigurableRequest_getSummary(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> self) {
  return create_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(self);
}

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(EduUmassCsReconfigurationInterfacesReconfigurableRequest)

@implementation EduUmassCsReconfigurationInterfacesReconfigurableRequest_1

- (instancetype)initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest:(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest>)outer$ {
  EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(self, outer$);
  return self;
}

- (NSString *)description {
  return JreStrcat("@C$I$$", [this$0_ getRequestType], ':', [this$0_ getServiceName], [this$0_ getEpochNumber], ([EduUmassCsGigapaxosInterfacesRequestIdentifier_class_() isInstance:this$0_] ? JreStrcat("CJ", ':', [((id<EduUmassCsGigapaxosInterfacesRequestIdentifier>) cast_check(this$0_, EduUmassCsGigapaxosInterfacesRequestIdentifier_class_())) getRequestID]) : @""), ([this$0_ isStop] ? @":[STOP]" : @""));
}

- (void)dealloc {
  RELEASE_(this$0_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x0, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 0, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest:);
  methods[1].selector = @selector(description);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "this$0_", "LEduUmassCsReconfigurationInterfacesReconfigurableRequest;", .constantValue.asLong = 0, 0x1012, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "toString", "LEduUmassCsReconfigurationInterfacesReconfigurableRequest;", "getSummary" };
  static const J2ObjcClassInfo _EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 = { "", "edu.umass.cs.reconfiguration.interfaces", ptrTable, methods, fields, 7, 0x8008, 2, 1, 1, -1, 2, -1, -1 };
  return &_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1;
}

@end

void EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *self, id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$) {
  JreStrongAssign(&self->this$0_, outer$);
  NSObject_init(self);
}

EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *new_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$) {
  J2OBJC_NEW_IMPL(EduUmassCsReconfigurationInterfacesReconfigurableRequest_1, initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_, outer$)
}

EduUmassCsReconfigurationInterfacesReconfigurableRequest_1 *create_EduUmassCsReconfigurationInterfacesReconfigurableRequest_1_initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> outer$) {
  J2OBJC_CREATE_IMPL(EduUmassCsReconfigurationInterfacesReconfigurableRequest_1, initWithEduUmassCsReconfigurationInterfacesReconfigurableRequest_, outer$)
}
