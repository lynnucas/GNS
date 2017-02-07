//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/nio/AbstractJSONPacketDemultiplexer.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "edu/umass/cs/nio/AbstractJSONPacketDemultiplexer.h"
#include "edu/umass/cs/nio/AbstractPacketDemultiplexer.h"
#include "edu/umass/cs/nio/JSONPacket.h"
#include "edu/umass/cs/nio/MessageExtractor.h"
#include "edu/umass/cs/nio/NIOTransport.h"
#include "edu/umass/cs/nio/nioutils/NIOHeader.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Integer.h"
#include "java/net/InetSocketAddress.h"
#include "java/util/logging/Logger.h"
#include "org/json/JSONException.h"
#include "org/json/JSONObject.h"

@implementation EduUmassCsNioAbstractJSONPacketDemultiplexer

- (instancetype)initWithInt:(jint)threadPoolSize {
  EduUmassCsNioAbstractJSONPacketDemultiplexer_initWithInt_(self, threadPoolSize);
  return self;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  EduUmassCsNioAbstractJSONPacketDemultiplexer_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaLangInteger *)getPacketTypeWithId:(OrgJsonJSONObject *)json {
  @try {
    if (json != nil) return EduUmassCsNioJSONPacket_getPacketTypeWithOrgJsonJSONObject_(json);
  }
  @catch (OrgJsonJSONException *e) {
    [((JavaUtilLoggingLogger *) nil_chk(EduUmassCsNioNIOTransport_getLogger())) severeWithNSString:JreStrcat("$@", @"Unable to decode JSON packet type for: ", json)];
    [((OrgJsonJSONException *) nil_chk(e)) printStackTrace];
  }
  return nil;
}

- (OrgJsonJSONObject *)processHeaderWithByteArray:(IOSByteArray *)message
               withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header {
  return [self processHeaderWithByteArray:message withEduUmassCsNioNioutilsNIOHeader:header withBoolean:false];
}

- (OrgJsonJSONObject *)processHeaderWithByteArray:(IOSByteArray *)message
               withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header
                                      withBoolean:(jboolean)cacheStringified {
  return [self processHeaderWithByteArray:message withInt:0 withEduUmassCsNioNioutilsNIOHeader:header withBoolean:cacheStringified];
}

- (OrgJsonJSONObject *)processHeaderWithByteArray:(IOSByteArray *)message
                                          withInt:(jint)offset
               withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header
                                      withBoolean:(jboolean)cacheStringified {
  return EduUmassCsNioAbstractJSONPacketDemultiplexer_processHeaderStaticWithByteArray_withInt_withEduUmassCsNioNioutilsNIOHeader_withBoolean_(message, offset, header, cacheStringified);
}

+ (OrgJsonJSONObject *)processHeaderStaticWithByteArray:(IOSByteArray *)message
                                                withInt:(jint)offset
                     withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header
                                            withBoolean:(jboolean)cacheStringified {
  return EduUmassCsNioAbstractJSONPacketDemultiplexer_processHeaderStaticWithByteArray_withInt_withEduUmassCsNioNioutilsNIOHeader_withBoolean_(message, offset, header, cacheStringified);
}

- (jboolean)matchesTypeWithId:(id)message {
  return [message isKindOfClass:[OrgJsonJSONObject class]];
}

- (jboolean)isCongestedWithEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header {
  return false;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x4, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x4, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaLangInteger;", 0x4, 1, 2, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x4, 3, 4, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x4, 3, 5, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x4, 3, 6, -1, -1, -1, -1 },
    { NULL, "LOrgJsonJSONObject;", 0x19, 7, 6, -1, -1, -1, -1 },
    { NULL, "Z", 0x4, 8, 9, -1, -1, -1, -1 },
    { NULL, "Z", 0x4, 10, 11, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithInt:);
  methods[1].selector = @selector(init);
  methods[2].selector = @selector(getPacketTypeWithId:);
  methods[3].selector = @selector(processHeaderWithByteArray:withEduUmassCsNioNioutilsNIOHeader:);
  methods[4].selector = @selector(processHeaderWithByteArray:withEduUmassCsNioNioutilsNIOHeader:withBoolean:);
  methods[5].selector = @selector(processHeaderWithByteArray:withInt:withEduUmassCsNioNioutilsNIOHeader:withBoolean:);
  methods[6].selector = @selector(processHeaderStaticWithByteArray:withInt:withEduUmassCsNioNioutilsNIOHeader:withBoolean:);
  methods[7].selector = @selector(matchesTypeWithId:);
  methods[8].selector = @selector(isCongestedWithEduUmassCsNioNioutilsNIOHeader:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "I", "getPacketType", "LOrgJsonJSONObject;", "processHeader", "[BLEduUmassCsNioNioutilsNIOHeader;", "[BLEduUmassCsNioNioutilsNIOHeader;Z", "[BILEduUmassCsNioNioutilsNIOHeader;Z", "processHeaderStatic", "matchesType", "LNSObject;", "isCongested", "LEduUmassCsNioNioutilsNIOHeader;", "Ledu/umass/cs/nio/AbstractPacketDemultiplexer<Lorg/json/JSONObject;>;Ledu/umass/cs/nio/interfaces/PacketDemultiplexer<Lorg/json/JSONObject;>;" };
  static const J2ObjcClassInfo _EduUmassCsNioAbstractJSONPacketDemultiplexer = { "AbstractJSONPacketDemultiplexer", "edu.umass.cs.nio", ptrTable, methods, NULL, 7, 0x401, 9, 0, -1, -1, -1, 12, -1 };
  return &_EduUmassCsNioAbstractJSONPacketDemultiplexer;
}

@end

void EduUmassCsNioAbstractJSONPacketDemultiplexer_initWithInt_(EduUmassCsNioAbstractJSONPacketDemultiplexer *self, jint threadPoolSize) {
  EduUmassCsNioAbstractPacketDemultiplexer_initWithInt_(self, threadPoolSize);
}

void EduUmassCsNioAbstractJSONPacketDemultiplexer_init(EduUmassCsNioAbstractJSONPacketDemultiplexer *self) {
  EduUmassCsNioAbstractPacketDemultiplexer_init(self);
}

OrgJsonJSONObject *EduUmassCsNioAbstractJSONPacketDemultiplexer_processHeaderStaticWithByteArray_withInt_withEduUmassCsNioNioutilsNIOHeader_withBoolean_(IOSByteArray *message, jint offset, EduUmassCsNioNioutilsNIOHeader *header, jboolean cacheStringified) {
  EduUmassCsNioAbstractJSONPacketDemultiplexer_initialize();
  @try {
    if (EduUmassCsNioJSONPacket_couldBeJSONWithByteArray_withInt_(message, offset)) return EduUmassCsNioMessageExtractor_stampAddressIntoJSONObjectWithJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withOrgJsonJSONObject_(((EduUmassCsNioNioutilsNIOHeader *) nil_chk(header))->sndr_, header->rcvr_, EduUmassCsNioMessageExtractor_parseJSONWithNSString_withBoolean_(EduUmassCsNioMessageExtractor_decodeWithByteArray_withInt_withInt_(message, offset, ((IOSByteArray *) nil_chk(message))->size_ - offset), cacheStringified));
  }
  @catch (JavaIoUnsupportedEncodingException *e) {
    [((JavaIoUnsupportedEncodingException *) nil_chk(e)) printStackTrace];
  }
  return nil;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsNioAbstractJSONPacketDemultiplexer)
