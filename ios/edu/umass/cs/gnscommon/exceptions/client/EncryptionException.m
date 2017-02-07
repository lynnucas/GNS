//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../src/edu/umass/cs/gnscommon/exceptions/client/EncryptionException.java
//

#include "J2ObjC_source.h"
#include "edu/umass/cs/gnscommon/ResponseCode.h"
#include "edu/umass/cs/gnscommon/exceptions/client/ClientException.h"
#include "edu/umass/cs/gnscommon/exceptions/client/EncryptionException.h"

inline jlong EduUmassCsGnscommonExceptionsClientEncryptionException_get_serialVersionUID();
#define EduUmassCsGnscommonExceptionsClientEncryptionException_serialVersionUID 1721392537222462554LL
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGnscommonExceptionsClientEncryptionException, serialVersionUID, jlong)

@implementation EduUmassCsGnscommonExceptionsClientEncryptionException

- (instancetype)initWithEduUmassCsGnscommonResponseCode:(EduUmassCsGnscommonResponseCode *)code
                                           withNSString:(NSString *)message {
  EduUmassCsGnscommonExceptionsClientEncryptionException_initWithEduUmassCsGnscommonResponseCode_withNSString_(self, code, message);
  return self;
}

- (instancetype)initWithNSString:(NSString *)message {
  EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_(self, message);
  return self;
}

- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause {
  EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(self, message, cause);
  return self;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 1, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 2, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithEduUmassCsGnscommonResponseCode:withNSString:);
  methods[1].selector = @selector(initWithNSString:);
  methods[2].selector = @selector(initWithNSString:withNSException:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "serialVersionUID", "J", .constantValue.asLong = EduUmassCsGnscommonExceptionsClientEncryptionException_serialVersionUID, 0x1a, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LEduUmassCsGnscommonResponseCode;LNSString;", "LNSString;", "LNSString;LNSException;" };
  static const J2ObjcClassInfo _EduUmassCsGnscommonExceptionsClientEncryptionException = { "EncryptionException", "edu.umass.cs.gnscommon.exceptions.client", ptrTable, methods, fields, 7, 0x1, 3, 1, -1, -1, -1, -1, -1 };
  return &_EduUmassCsGnscommonExceptionsClientEncryptionException;
}

@end

void EduUmassCsGnscommonExceptionsClientEncryptionException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonExceptionsClientEncryptionException *self, EduUmassCsGnscommonResponseCode *code, NSString *message) {
  EduUmassCsGnscommonExceptionsClientClientException_initWithEduUmassCsGnscommonResponseCode_withNSString_(self, code, message);
}

EduUmassCsGnscommonExceptionsClientEncryptionException *new_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonResponseCode *code, NSString *message) {
  J2OBJC_NEW_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithEduUmassCsGnscommonResponseCode_withNSString_, code, message)
}

EduUmassCsGnscommonExceptionsClientEncryptionException *create_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonResponseCode *code, NSString *message) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithEduUmassCsGnscommonResponseCode_withNSString_, code, message)
}

void EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_(EduUmassCsGnscommonExceptionsClientEncryptionException *self, NSString *message) {
  EduUmassCsGnscommonExceptionsClientClientException_initWithEduUmassCsGnscommonResponseCode_withNSString_(self, JreLoadEnum(EduUmassCsGnscommonResponseCode, SIGNATURE_ERROR), message);
}

EduUmassCsGnscommonExceptionsClientEncryptionException *new_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_(NSString *message) {
  J2OBJC_NEW_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithNSString_, message)
}

EduUmassCsGnscommonExceptionsClientEncryptionException *create_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_(NSString *message) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithNSString_, message)
}

void EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(EduUmassCsGnscommonExceptionsClientEncryptionException *self, NSString *message, NSException *cause) {
  EduUmassCsGnscommonExceptionsClientClientException_initWithEduUmassCsGnscommonResponseCode_withNSString_withNSException_(self, JreLoadEnum(EduUmassCsGnscommonResponseCode, SIGNATURE_ERROR), message, cause);
}

EduUmassCsGnscommonExceptionsClientEncryptionException *new_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(NSString *message, NSException *cause) {
  J2OBJC_NEW_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithNSString_withNSException_, message, cause)
}

EduUmassCsGnscommonExceptionsClientEncryptionException *create_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(NSString *message, NSException *cause) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnscommonExceptionsClientEncryptionException, initWithNSString_withNSException_, message, cause)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsGnscommonExceptionsClientEncryptionException)
