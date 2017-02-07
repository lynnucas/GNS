//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../src/edu/umass/cs/gnsserver/gnsapp/packet/admin/AdminResponsePacket.java
//

#include "J2ObjC_source.h"
#include "edu/umass/cs/gnscommon/utils/Format.h"
#include "edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithClientAddress.h"
#include "edu/umass/cs/gnsserver/gnsapp/packet/Packet.h"
#include "edu/umass/cs/gnsserver/gnsapp/packet/admin/AdminResponsePacket.h"
#include "java/lang/Exception.h"
#include "java/util/Date.h"
#include "org/json/JSONObject.h"

@interface EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket () {
 @public
  jint id__;
  JavaUtilDate *time_;
  OrgJsonJSONObject *jsonObject_;
}

@end

J2OBJC_FIELD_SETTER(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, time_, JavaUtilDate *)
J2OBJC_FIELD_SETTER(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, jsonObject_, OrgJsonJSONObject *)

NSString *EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_ID = @"id";
NSString *EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_JSON = @"json";
NSString *EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_TIME = @"time";

@implementation EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket

- (instancetype)initWithInt:(jint)id_
      withOrgJsonJSONObject:(OrgJsonJSONObject *)jsonObject {
  EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_withOrgJsonJSONObject_(self, id_, jsonObject);
  return self;
}

- (instancetype)initWithInt:(jint)id_ {
  EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_(self, id_);
  return self;
}

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json {
  EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithOrgJsonJSONObject_(self, json);
  return self;
}

- (jint)getId {
  return id__;
}

- (JavaUtilDate *)getTime {
  return time_;
}

- (OrgJsonJSONObject *)getJsonObject {
  return jsonObject_;
}

- (OrgJsonJSONObject *)toJSONObject {
  OrgJsonJSONObject *json = create_OrgJsonJSONObject_init();
  EduUmassCsGnsserverGnsappPacketPacket_putPacketTypeWithOrgJsonJSONObject_withEduUmassCsGnsserverGnsappPacketPacket_PacketType_(json, [self getType]);
  [json putWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_ID withInt:id__];
  [json putWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_TIME withId:EduUmassCsGnscommonUtilsFormat_formatDateTimeOnlyMilleUTCWithJavaUtilDate_(time_)];
  [json putWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_JSON withId:jsonObject_];
  return json;
}

- (void)dealloc {
  RELEASE_(time_);
  RELEASE_(jsonObject_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 1, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 2, 3, -1, -1, -1 },
    { NULL, "I", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaUtilDate;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x1, -1, -1, 4, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithInt:withOrgJsonJSONObject:);
  methods[1].selector = @selector(initWithInt:);
  methods[2].selector = @selector(initWithOrgJsonJSONObject:);
  methods[3].selector = @selector(getId);
  methods[4].selector = @selector(getTime);
  methods[5].selector = @selector(getJsonObject);
  methods[6].selector = @selector(toJSONObject);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "ID", "LNSString;", .constantValue.asLong = 0, 0x19, -1, 5, -1, -1 },
    { "JSON", "LNSString;", .constantValue.asLong = 0, 0x19, -1, 6, -1, -1 },
    { "TIME", "LNSString;", .constantValue.asLong = 0, 0x19, -1, 7, -1, -1 },
    { "id__", "I", .constantValue.asLong = 0, 0x2, 8, -1, -1, -1 },
    { "time_", "LJavaUtilDate;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "jsonObject_", "LOrgJsonJSONObject;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "ILOrgJsonJSONObject;", "I", "LOrgJsonJSONObject;", "LOrgJsonJSONException;LJavaTextParseException;", "LOrgJsonJSONException;", &EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_ID, &EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_JSON, &EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_TIME, "id" };
  static const J2ObjcClassInfo _EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket = { "AdminResponsePacket", "edu.umass.cs.gnsserver.gnsapp.packet.admin", ptrTable, methods, fields, 7, 0x1, 7, 6, -1, -1, -1, -1, -1 };
  return &_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket;
}

@end

void EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_withOrgJsonJSONObject_(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *self, jint id_, OrgJsonJSONObject *jsonObject) {
  EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress_init(self);
  JreStrongAssign(&self->type_, JreLoadEnum(EduUmassCsGnsserverGnsappPacketPacket_PacketType, ADMIN_RESPONSE));
  self->id__ = id_;
  JreStrongAssignAndConsume(&self->time_, new_JavaUtilDate_init());
  JreStrongAssign(&self->jsonObject_, jsonObject);
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *new_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_withOrgJsonJSONObject_(jint id_, OrgJsonJSONObject *jsonObject) {
  J2OBJC_NEW_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithInt_withOrgJsonJSONObject_, id_, jsonObject)
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *create_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_withOrgJsonJSONObject_(jint id_, OrgJsonJSONObject *jsonObject) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithInt_withOrgJsonJSONObject_, id_, jsonObject)
}

void EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *self, jint id_) {
  EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_withOrgJsonJSONObject_(self, id_, create_OrgJsonJSONObject_init());
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *new_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_(jint id_) {
  J2OBJC_NEW_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithInt_, id_)
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *create_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithInt_(jint id_) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithInt_, id_)
}

void EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithOrgJsonJSONObject_(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *self, OrgJsonJSONObject *json) {
  EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress_init(self);
  if (EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeWithOrgJsonJSONObject_(json) != JreLoadEnum(EduUmassCsGnsserverGnsappPacketPacket_PacketType, ADMIN_RESPONSE)) {
    JavaLangException *e = create_JavaLangException_initWithNSString_(JreStrcat("$@", @"AdminResponsePacket: wrong packet type ", EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeWithOrgJsonJSONObject_(json)));
    [e printStackTrace];
    return;
  }
  JreStrongAssign(&self->type_, EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeWithOrgJsonJSONObject_(json));
  self->id__ = [((OrgJsonJSONObject *) nil_chk(json)) getIntWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_ID];
  JreStrongAssign(&self->time_, EduUmassCsGnscommonUtilsFormat_parseDateTimeOnlyMilleUTCWithNSString_([json getStringWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_TIME]));
  JreStrongAssign(&self->jsonObject_, [json getJSONObjectWithNSString:EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_JSON]);
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *new_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) {
  J2OBJC_NEW_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithOrgJsonJSONObject_, json)
}

EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket *create_EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket, initWithOrgJsonJSONObject_, json)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsGnsserverGnsappPacketAdminAdminResponsePacket)
