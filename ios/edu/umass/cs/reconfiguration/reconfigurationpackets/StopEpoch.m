//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/reconfiguration/reconfigurationpackets/StopEpoch.java
//

#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "edu/umass/cs/nio/interfaces/Stringifiable.h"
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/BasicReconfigurationPacket.h"
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/ReconfigurationPacket.h"
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/StopEpoch.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/lang/Math.h"
#include "org/json/JSONObject.h"

#pragma clang diagnostic ignored "-Wincomplete-implementation"

@interface EduUmassCsReconfigurationReconfigurationpacketsStopEpoch () {
 @public
  jboolean getFinalState_;
  jlong requestID_;
  jboolean executeStop_;
}

@end

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_Enum) {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_Enum_GET_FINALSTATE = 0,
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_Enum_QID = 1,
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_Enum_EXECUTE_STOP = 2,
};

@interface EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys : JavaLangEnum < NSCopying >

+ (IOSObjectArray *)values;

+ (EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_[];

inline EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_get_GET_FINALSTATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, GET_FINALSTATE)

inline EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_get_QID();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, QID)

inline EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_get_EXECUTE_STOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, EXECUTE_STOP)

__attribute__((unused)) static void EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initWithNSString_withInt_(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static IOSObjectArray *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values();

__attribute__((unused)) static EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys)

@implementation EduUmassCsReconfigurationReconfigurationpacketsStopEpoch

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)name
                   withInt:(jint)epochNumber
               withBoolean:(jboolean)getFinalState
               withBoolean:(jboolean)executeStop {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_withBoolean_withBoolean_(self, initiator, name, epochNumber, getFinalState, executeStop);
  return self;
}

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)name
                   withInt:(jint)epochNumber {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_(self, initiator, name, epochNumber);
  return self;
}

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(self, json, unstringer);
  return self;
}

- (OrgJsonJSONObject *)toJSONObjectImpl {
  OrgJsonJSONObject *json = [super toJSONObjectImpl];
  [((OrgJsonJSONObject *) nil_chk(json)) putWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, GET_FINALSTATE))) description] withBoolean:self->getFinalState_];
  [json putWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, QID))) description] withLong:self->requestID_];
  [json putWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, EXECUTE_STOP))) description] withBoolean:self->executeStop_];
  return json;
}

- (jboolean)isStop {
  return true;
}

- (jboolean)shouldExecuteStop {
  return self->executeStop_;
}

- (jboolean)needsCoordination {
  return true;
}

- (void)setNeedsCoordinationWithBoolean:(jboolean)b {
}

- (jboolean)shouldGetFinalState {
  return self->getFinalState_;
}

- (jlong)getRequestID {
  return self->requestID_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, 1, -1, -1 },
    { NULL, NULL, 0x1, -1, 2, -1, 3, -1, -1 },
    { NULL, NULL, 0x1, -1, 4, 5, 6, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x1, -1, -1, 5, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 7, 8, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "J", 0x1, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithId:withNSString:withInt:withBoolean:withBoolean:);
  methods[1].selector = @selector(initWithId:withNSString:withInt:);
  methods[2].selector = @selector(initWithOrgJsonJSONObject:withEduUmassCsNioInterfacesStringifiable:);
  methods[3].selector = @selector(toJSONObjectImpl);
  methods[4].selector = @selector(isStop);
  methods[5].selector = @selector(shouldExecuteStop);
  methods[6].selector = @selector(needsCoordination);
  methods[7].selector = @selector(setNeedsCoordinationWithBoolean:);
  methods[8].selector = @selector(shouldGetFinalState);
  methods[9].selector = @selector(getRequestID);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "getFinalState_", "Z", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
    { "requestID_", "J", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
    { "executeStop_", "Z", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LNSObject;LNSString;IZZ", "(TNodeIDType;Ljava/lang/String;IZZ)V", "LNSObject;LNSString;I", "(TNodeIDType;Ljava/lang/String;I)V", "LOrgJsonJSONObject;LEduUmassCsNioInterfacesStringifiable;", "LOrgJsonJSONException;", "(Lorg/json/JSONObject;Ledu/umass/cs/nio/interfaces/Stringifiable<TNodeIDType;>;)V", "setNeedsCoordination", "Z", "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", "<NodeIDType:Ljava/lang/Object;>Ledu/umass/cs/reconfiguration/reconfigurationpackets/BasicReconfigurationPacket<TNodeIDType;>;Ledu/umass/cs/reconfiguration/interfaces/ReconfigurableRequest;Ledu/umass/cs/reconfiguration/interfaces/ReplicableRequest;" };
  static const J2ObjcClassInfo _EduUmassCsReconfigurationReconfigurationpacketsStopEpoch = { "StopEpoch", "edu.umass.cs.reconfiguration.reconfigurationpackets", ptrTable, methods, fields, 7, 0x1, 10, 3, -1, 9, -1, 10, -1 };
  return &_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch;
}

@end

void EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_withBoolean_withBoolean_(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *self, id initiator, NSString *name, jint epochNumber, jboolean getFinalState, jboolean executeStop) {
  EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType_withNSString_withInt_(self, initiator, JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType, STOP_EPOCH), name, epochNumber);
  self->getFinalState_ = getFinalState;
  self->requestID_ = JreFpToLong((JavaLangMath_random() * JavaLangLong_MAX_VALUE));
  self->executeStop_ = executeStop;
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_withBoolean_withBoolean_(id initiator, NSString *name, jint epochNumber, jboolean getFinalState, jboolean executeStop) {
  J2OBJC_NEW_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithId_withNSString_withInt_withBoolean_withBoolean_, initiator, name, epochNumber, getFinalState, executeStop)
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_withBoolean_withBoolean_(id initiator, NSString *name, jint epochNumber, jboolean getFinalState, jboolean executeStop) {
  J2OBJC_CREATE_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithId_withNSString_withInt_withBoolean_withBoolean_, initiator, name, epochNumber, getFinalState, executeStop)
}

void EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *self, id initiator, NSString *name, jint epochNumber) {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_withBoolean_withBoolean_(self, initiator, name, epochNumber, false, true);
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_(id initiator, NSString *name, jint epochNumber) {
  J2OBJC_NEW_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithId_withNSString_withInt_, initiator, name, epochNumber)
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithId_withNSString_withInt_(id initiator, NSString *name, jint epochNumber) {
  J2OBJC_CREATE_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithId_withNSString_withInt_, initiator, name, epochNumber)
}

void EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) {
  EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(self, json, unstringer);
  self->getFinalState_ = [((OrgJsonJSONObject *) nil_chk(json)) optBooleanWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, GET_FINALSTATE))) description]];
  self->requestID_ = [json getLongWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, QID))) description]];
  self->executeStop_ = [json getBooleanWithNSString:[((EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *) nil_chk(JreLoadEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, EXECUTE_STOP))) description]];
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) {
  J2OBJC_NEW_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_, json, unstringer)
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) {
  J2OBJC_CREATE_IMPL(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch, initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_, json, unstringer)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch)

J2OBJC_INITIALIZED_DEFN(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys)

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_[3];

@implementation EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys

+ (IOSObjectArray *)values {
  return EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values();
}

+ (EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *)valueOfWithNSString:(NSString *)name {
  return EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_valueOfWithNSString_(name);
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "[LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", 0x9, -1, -1, -1, -1, -1, -1 },
    { NULL, "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", 0x9, 0, 1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(values);
  methods[1].selector = @selector(valueOfWithNSString:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "GET_FINALSTATE", "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", .constantValue.asLong = 0, 0x4019, -1, 2, -1, -1 },
    { "QID", "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", .constantValue.asLong = 0, 0x4019, -1, 3, -1, -1 },
    { "EXECUTE_STOP", "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;", .constantValue.asLong = 0, 0x4019, -1, 4, -1, -1 },
  };
  static const void *ptrTable[] = { "valueOf", "LNSString;", &JreEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, GET_FINALSTATE), &JreEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, QID), &JreEnum(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys, EXECUTE_STOP), "LEduUmassCsReconfigurationReconfigurationpacketsStopEpoch;", "Ljava/lang/Enum<Ledu/umass/cs/reconfiguration/reconfigurationpackets/StopEpoch$Keys;>;" };
  static const J2ObjcClassInfo _EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys = { "Keys", "edu.umass.cs.reconfiguration.reconfigurationpackets", ptrTable, methods, fields, 7, 0x401a, 2, 3, 5, -1, -1, 6, -1 };
  return &_EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys;
}

+ (void)initialize {
  if (self == [EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys class]) {
    size_t objSize = class_getInstanceSize(self);
    size_t allocSize = 3 * objSize;
    uintptr_t ptr = (uintptr_t)calloc(allocSize, 1);
    id e;
    id names[] = {
      @"GET_FINALSTATE", @"QID", @"EXECUTE_STOP",
    };
    for (jint i = 0; i < 3; i++) {
      (EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_[i] = e = objc_constructInstance(self, (void *)ptr), ptr += objSize);
      EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initWithNSString_withInt_(e, names[i], i);
    }
    J2OBJC_SET_INITIALIZED(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys)
  }
}

@end

void EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initWithNSString_withInt_(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

IOSObjectArray *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values() {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initialize();
  return [IOSObjectArray arrayWithObjects:EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_ count:3 type:EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_class_()];
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_valueOfWithNSString_(NSString *name) {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initialize();
  for (int i = 0; i < 3; i++) {
    EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *e = EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw create_JavaLangIllegalArgumentException_initWithNSString_(name);
  return nil;
}

EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_fromOrdinal(NSUInteger ordinal) {
  EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_initialize();
  if (ordinal >= 3) {
    return nil;
  }
  return EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys_values_[ordinal];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsReconfigurationReconfigurationpacketsStopEpoch_Keys)
