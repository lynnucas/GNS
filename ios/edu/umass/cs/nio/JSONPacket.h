//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/nio/JSONPacket.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioJSONPacket")
#ifdef RESTRICT_EduUmassCsNioJSONPacket
#define INCLUDE_ALL_EduUmassCsNioJSONPacket 0
#else
#define INCLUDE_ALL_EduUmassCsNioJSONPacket 1
#endif
#undef RESTRICT_EduUmassCsNioJSONPacket

#if !defined (EduUmassCsNioJSONPacket_) && (INCLUDE_ALL_EduUmassCsNioJSONPacket || defined(INCLUDE_EduUmassCsNioJSONPacket))
#define EduUmassCsNioJSONPacket_

@class IOSByteArray;
@class JavaLangInteger;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesIntegerPacketType;

@interface EduUmassCsNioJSONPacket : NSObject {
 @public
  jint type_;
}

#pragma mark Public

- (instancetype)initWithEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)t;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (jboolean)couldBeJSONWithByteArray:(IOSByteArray *)bytes;

+ (jboolean)couldBeJSONWithByteArray:(IOSByteArray *)bytes
                             withInt:(jint)offset;

+ (jboolean)couldBeJSONWithNSString:(NSString *)str;

+ (jboolean)couldBeJSONArrayWithNSString:(NSString *)str;

+ (jboolean)couldBeJSONObjectWithNSString:(NSString *)str;

+ (JavaLangInteger *)getPacketTypeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (void)putPacketTypeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
                                   withInt:(jint)type;

+ (void)putPacketTypeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
withEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type;

- (OrgJsonJSONObject *)toJSONObject;

- (NSString *)description;

#pragma mark Protected

- (OrgJsonJSONObject *)toJSONObjectImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioJSONPacket)

inline NSString *EduUmassCsNioJSONPacket_get_PACKET_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsNioJSONPacket_PACKET_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsNioJSONPacket, PACKET_TYPE, NSString *)

FOUNDATION_EXPORT void EduUmassCsNioJSONPacket_initWithEduUmassCsNioInterfacesIntegerPacketType_(EduUmassCsNioJSONPacket *self, id<EduUmassCsNioInterfacesIntegerPacketType> t);

FOUNDATION_EXPORT void EduUmassCsNioJSONPacket_initWithOrgJsonJSONObject_(EduUmassCsNioJSONPacket *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT JavaLangInteger *EduUmassCsNioJSONPacket_getPacketTypeWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT void EduUmassCsNioJSONPacket_putPacketTypeWithOrgJsonJSONObject_withInt_(OrgJsonJSONObject *json, jint type);

FOUNDATION_EXPORT void EduUmassCsNioJSONPacket_putPacketTypeWithOrgJsonJSONObject_withEduUmassCsNioInterfacesIntegerPacketType_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesIntegerPacketType> type);

FOUNDATION_EXPORT jboolean EduUmassCsNioJSONPacket_couldBeJSONWithNSString_(NSString *str);

FOUNDATION_EXPORT jboolean EduUmassCsNioJSONPacket_couldBeJSONObjectWithNSString_(NSString *str);

FOUNDATION_EXPORT jboolean EduUmassCsNioJSONPacket_couldBeJSONArrayWithNSString_(NSString *str);

FOUNDATION_EXPORT jboolean EduUmassCsNioJSONPacket_couldBeJSONWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jboolean EduUmassCsNioJSONPacket_couldBeJSONWithByteArray_withInt_(IOSByteArray *bytes, jint offset);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioJSONPacket)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioJSONPacket")
