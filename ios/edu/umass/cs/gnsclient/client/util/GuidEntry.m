//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../src/edu/umass/cs/gnsclient/client/util/GuidEntry.java
//

#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "edu/umass/cs/gnsclient/client/util/BasicGuidEntry.h"
#include "edu/umass/cs/gnsclient/client/util/GuidEntry.h"
#include "edu/umass/cs/gnscommon/GNSProtocol.h"
#include "edu/umass/cs/gnscommon/exceptions/client/EncryptionException.h"
#include "edu/umass/cs/gnscommon/utils/Base64.h"
#include "java/io/ObjectInputStream.h"
#include "java/io/ObjectOutputStream.h"
#include "java/security/GeneralSecurityException.h"
#include "java/security/KeyFactory.h"
#include "java/security/NoSuchAlgorithmException.h"
#include "java/security/PrivateKey.h"
#include "java/security/PublicKey.h"
#include "java/security/spec/InvalidKeySpecException.h"
#include "java/security/spec/PKCS8EncodedKeySpec.h"

@interface EduUmassCsGnsclientClientUtilGuidEntry () {
 @public
  id<JavaSecurityPrivateKey> privateKey_;
}

+ (id<JavaSecurityPrivateKey>)generatePrivateKeyWithNSString:(NSString *)encodedPrivate;

@end

J2OBJC_FIELD_SETTER(EduUmassCsGnsclientClientUtilGuidEntry, privateKey_, id<JavaSecurityPrivateKey>)

inline jlong EduUmassCsGnsclientClientUtilGuidEntry_get_serialVersionUID();
#define EduUmassCsGnsclientClientUtilGuidEntry_serialVersionUID 2326392043474125897LL
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGnsclientClientUtilGuidEntry, serialVersionUID, jlong)

__attribute__((unused)) static id<JavaSecurityPrivateKey> EduUmassCsGnsclientClientUtilGuidEntry_generatePrivateKeyWithNSString_(NSString *encodedPrivate);

@implementation EduUmassCsGnsclientClientUtilGuidEntry

- (instancetype)initWithNSString:(NSString *)entityName
                    withNSString:(NSString *)guid
       withJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)publicKey
      withJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey {
  EduUmassCsGnsclientClientUtilGuidEntry_initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_(self, entityName, guid, publicKey, privateKey);
  return self;
}

- (instancetype)initWithJavaIoObjectInputStream:(JavaIoObjectInputStream *)s {
  EduUmassCsGnsclientClientUtilGuidEntry_initWithJavaIoObjectInputStream_(self, s);
  return self;
}

- (id<JavaSecurityPrivateKey>)getPrivateKey {
  return privateKey_;
}

- (jboolean)isEqual:(id)o {
  if (o == nil || !([o isKindOfClass:[EduUmassCsGnsclientClientUtilGuidEntry class]])) {
    return false;
  }
  EduUmassCsGnsclientClientUtilGuidEntry *other = (EduUmassCsGnsclientClientUtilGuidEntry *) cast_chk(o, [EduUmassCsGnsclientClientUtilGuidEntry class]);
  if (entityName_ == nil && [other getEntityName] != nil) {
    return false;
  }
  if (entityName_ != nil && ![entityName_ isEqual:[other getEntityName]]) {
    return false;
  }
  if (![((id<JavaSecurityPublicKey>) nil_chk(publicKey_)) isEqual:[other getPublicKey]]) {
    return false;
  }
  if (privateKey_ == nil && [other getPrivateKey] != nil) {
    return false;
  }
  if (privateKey_ == nil) {
    return true;
  }
  else {
    return [privateKey_ isEqual:other->privateKey_];
  }
}

- (NSUInteger)hash {
  jint hash_ = 7;
  hash_ = 17 * hash_ + (self->entityName_ != nil ? ((jint) [self->entityName_ hash]) : 0);
  hash_ = 17 * hash_ + (self->guid_ != nil ? ((jint) [self->guid_ hash]) : 0);
  hash_ = 17 * hash_ + (self->publicKey_ != nil ? ((jint) [self->publicKey_ hash]) : 0);
  hash_ = 17 * hash_ + (self->privateKey_ != nil ? ((jint) [self->privateKey_ hash]) : 0);
  return hash_;
}

- (void)writeObjectWithJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)s {
  [((JavaIoObjectOutputStream *) nil_chk(s)) writeUTFWithNSString:entityName_];
  [s writeUTFWithNSString:guid_];
  [s writeUTFWithNSString:EduUmassCsGnscommonUtilsBase64_encodeToStringWithByteArray_withBoolean_([((id<JavaSecurityPublicKey>) nil_chk(publicKey_)) getEncoded], true)];
  [s writeUTFWithNSString:EduUmassCsGnscommonUtilsBase64_encodeToStringWithByteArray_withBoolean_([((id<JavaSecurityPrivateKey>) nil_chk(privateKey_)) getEncoded], true)];
}

+ (id<JavaSecurityPrivateKey>)generatePrivateKeyWithNSString:(NSString *)encodedPrivate {
  return EduUmassCsGnsclientClientUtilGuidEntry_generatePrivateKeyWithNSString_(encodedPrivate);
}

+ (void)mainWithNSStringArray:(IOSObjectArray *)args {
  EduUmassCsGnsclientClientUtilGuidEntry_mainWithNSStringArray_(args);
}

- (void)dealloc {
  RELEASE_(privateKey_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, 1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 2, 3, -1, -1, -1 },
    { NULL, "LJavaSecurityPrivateKey;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 4, 5, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 6, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 7, 8, 9, -1, -1, -1 },
    { NULL, "LJavaSecurityPrivateKey;", 0xa, 10, 11, 1, -1, -1, -1 },
    { NULL, "V", 0x9, 12, 13, 14, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithNSString:withNSString:withJavaSecurityPublicKey:withJavaSecurityPrivateKey:);
  methods[1].selector = @selector(initWithJavaIoObjectInputStream:);
  methods[2].selector = @selector(getPrivateKey);
  methods[3].selector = @selector(isEqual:);
  methods[4].selector = @selector(hash);
  methods[5].selector = @selector(writeObjectWithJavaIoObjectOutputStream:);
  methods[6].selector = @selector(generatePrivateKeyWithNSString:);
  methods[7].selector = @selector(mainWithNSStringArray:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "serialVersionUID", "J", .constantValue.asLong = EduUmassCsGnsclientClientUtilGuidEntry_serialVersionUID, 0x1a, -1, -1, -1, -1 },
    { "privateKey_", "LJavaSecurityPrivateKey;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LNSString;LNSString;LJavaSecurityPublicKey;LJavaSecurityPrivateKey;", "LEduUmassCsGnscommonExceptionsClientEncryptionException;", "LJavaIoObjectInputStream;", "LJavaIoIOException;LEduUmassCsGnscommonExceptionsClientEncryptionException;", "equals", "LNSObject;", "hashCode", "writeObject", "LJavaIoObjectOutputStream;", "LJavaIoIOException;", "generatePrivateKey", "LNSString;", "main", "[LNSString;", "LJavaIoIOException;LJavaLangException;" };
  static const J2ObjcClassInfo _EduUmassCsGnsclientClientUtilGuidEntry = { "GuidEntry", "edu.umass.cs.gnsclient.client.util", ptrTable, methods, fields, 7, 0x1, 8, 2, -1, -1, -1, -1, -1 };
  return &_EduUmassCsGnsclientClientUtilGuidEntry;
}

@end

void EduUmassCsGnsclientClientUtilGuidEntry_initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_(EduUmassCsGnsclientClientUtilGuidEntry *self, NSString *entityName, NSString *guid, id<JavaSecurityPublicKey> publicKey, id<JavaSecurityPrivateKey> privateKey) {
  EduUmassCsGnsclientClientUtilBasicGuidEntry_initWithNSString_withNSString_withJavaSecurityPublicKey_(self, entityName, guid, publicKey);
  JreStrongAssign(&self->privateKey_, privateKey);
}

EduUmassCsGnsclientClientUtilGuidEntry *new_EduUmassCsGnsclientClientUtilGuidEntry_initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_(NSString *entityName, NSString *guid, id<JavaSecurityPublicKey> publicKey, id<JavaSecurityPrivateKey> privateKey) {
  J2OBJC_NEW_IMPL(EduUmassCsGnsclientClientUtilGuidEntry, initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_, entityName, guid, publicKey, privateKey)
}

EduUmassCsGnsclientClientUtilGuidEntry *create_EduUmassCsGnsclientClientUtilGuidEntry_initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_(NSString *entityName, NSString *guid, id<JavaSecurityPublicKey> publicKey, id<JavaSecurityPrivateKey> privateKey) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnsclientClientUtilGuidEntry, initWithNSString_withNSString_withJavaSecurityPublicKey_withJavaSecurityPrivateKey_, entityName, guid, publicKey, privateKey)
}

void EduUmassCsGnsclientClientUtilGuidEntry_initWithJavaIoObjectInputStream_(EduUmassCsGnsclientClientUtilGuidEntry *self, JavaIoObjectInputStream *s) {
  EduUmassCsGnsclientClientUtilBasicGuidEntry_initWithNSString_withNSString_withNSString_(self, [((JavaIoObjectInputStream *) nil_chk(s)) readUTF], [s readUTF], [s readUTF]);
  JreStrongAssign(&self->privateKey_, EduUmassCsGnsclientClientUtilGuidEntry_generatePrivateKeyWithNSString_([s readUTF]));
}

EduUmassCsGnsclientClientUtilGuidEntry *new_EduUmassCsGnsclientClientUtilGuidEntry_initWithJavaIoObjectInputStream_(JavaIoObjectInputStream *s) {
  J2OBJC_NEW_IMPL(EduUmassCsGnsclientClientUtilGuidEntry, initWithJavaIoObjectInputStream_, s)
}

EduUmassCsGnsclientClientUtilGuidEntry *create_EduUmassCsGnsclientClientUtilGuidEntry_initWithJavaIoObjectInputStream_(JavaIoObjectInputStream *s) {
  J2OBJC_CREATE_IMPL(EduUmassCsGnsclientClientUtilGuidEntry, initWithJavaIoObjectInputStream_, s)
}

id<JavaSecurityPrivateKey> EduUmassCsGnsclientClientUtilGuidEntry_generatePrivateKeyWithNSString_(NSString *encodedPrivate) {
  EduUmassCsGnsclientClientUtilGuidEntry_initialize();
  IOSByteArray *encodedPrivateKey = EduUmassCsGnscommonUtilsBase64_decodeWithNSString_(encodedPrivate);
  @try {
    return [((JavaSecurityKeyFactory *) nil_chk(JavaSecurityKeyFactory_getInstanceWithNSString_([((EduUmassCsGnscommonGNSProtocol *) nil_chk(JreLoadEnum(EduUmassCsGnscommonGNSProtocol, RSA_ALGORITHM))) description]))) generatePrivateWithJavaSecuritySpecKeySpec:create_JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(encodedPrivateKey)];
  }
  @catch (JavaSecurityNoSuchAlgorithmException *e) {
    @throw create_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(@"Failed to generate keypair", e);
  }
  @catch (JavaSecuritySpecInvalidKeySpecException *e) {
    @throw create_EduUmassCsGnscommonExceptionsClientEncryptionException_initWithNSString_withNSException_(@"Failed to generate keypair", e);
  }
}

void EduUmassCsGnsclientClientUtilGuidEntry_mainWithNSStringArray_(IOSObjectArray *args) {
  EduUmassCsGnsclientClientUtilGuidEntry_initialize();
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsGnsclientClientUtilGuidEntry)
