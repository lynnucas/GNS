//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/org/json/JSONArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsonJSONArray")
#ifdef RESTRICT_OrgJsonJSONArray
#define INCLUDE_ALL_OrgJsonJSONArray 0
#else
#define INCLUDE_ALL_OrgJsonJSONArray 1
#endif
#undef RESTRICT_OrgJsonJSONArray

#if !defined (OrgJsonJSONArray_) && (INCLUDE_ALL_OrgJsonJSONArray || defined(INCLUDE_OrgJsonJSONArray))
#define OrgJsonJSONArray_

@class JavaIoWriter;
@class OrgJsonJSONObject;
@class OrgJsonJSONTokener;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

@interface OrgJsonJSONArray : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (instancetype)initWithOrgJsonJSONTokener:(OrgJsonJSONTokener *)x;

- (instancetype)initWithId:(id)array;

- (instancetype)initWithNSString:(NSString *)source;

- (id)getWithInt:(jint)index;

- (jboolean)getBooleanWithInt:(jint)index;

- (jdouble)getDoubleWithInt:(jint)index;

- (jint)getIntWithInt:(jint)index;

- (OrgJsonJSONArray *)getJSONArrayWithInt:(jint)index;

- (OrgJsonJSONObject *)getJSONObjectWithInt:(jint)index;

- (jlong)getLongWithInt:(jint)index;

- (NSString *)getStringWithInt:(jint)index;

- (jboolean)isNullWithInt:(jint)index;

- (NSString *)joinWithNSString:(NSString *)separator;

- (jint)length;

- (id)optWithInt:(jint)index;

- (jboolean)optBooleanWithInt:(jint)index;

- (jboolean)optBooleanWithInt:(jint)index
                  withBoolean:(jboolean)defaultValue;

- (jdouble)optDoubleWithInt:(jint)index;

- (jdouble)optDoubleWithInt:(jint)index
                 withDouble:(jdouble)defaultValue;

- (jint)optIntWithInt:(jint)index;

- (jint)optIntWithInt:(jint)index
              withInt:(jint)defaultValue;

- (OrgJsonJSONArray *)optJSONArrayWithInt:(jint)index;

- (OrgJsonJSONObject *)optJSONObjectWithInt:(jint)index;

- (jlong)optLongWithInt:(jint)index;

- (jlong)optLongWithInt:(jint)index
               withLong:(jlong)defaultValue;

- (NSString *)optStringWithInt:(jint)index;

- (NSString *)optStringWithInt:(jint)index
                  withNSString:(NSString *)defaultValue;

- (OrgJsonJSONArray *)putWithBoolean:(jboolean)value;

- (OrgJsonJSONArray *)putWithJavaUtilCollection:(id<JavaUtilCollection>)value;

- (OrgJsonJSONArray *)putWithDouble:(jdouble)value;

- (OrgJsonJSONArray *)putWithInt:(jint)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                     withBoolean:(jboolean)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
          withJavaUtilCollection:(id<JavaUtilCollection>)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                      withDouble:(jdouble)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                         withInt:(jint)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                        withLong:(jlong)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                 withJavaUtilMap:(id<JavaUtilMap>)value;

- (OrgJsonJSONArray *)putWithInt:(jint)index
                          withId:(id)value;

- (OrgJsonJSONArray *)putWithLong:(jlong)value;

- (OrgJsonJSONArray *)putWithJavaUtilMap:(id<JavaUtilMap>)value;

- (OrgJsonJSONArray *)putWithId:(id)value;

- (id)removeWithInt:(jint)index;

- (OrgJsonJSONObject *)toJSONObjectWithOrgJsonJSONArray:(OrgJsonJSONArray *)names;

- (NSString *)toReasonableString;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)indentFactor;

- (JavaIoWriter *)writeWithJavaIoWriter:(JavaIoWriter *)writer;

#pragma mark Package-Private

- (NSString *)toStringWithInt:(jint)indentFactor
                      withInt:(jint)indent;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsonJSONArray)

FOUNDATION_EXPORT void OrgJsonJSONArray_init(OrgJsonJSONArray *self);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_init();

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONArray *self, OrgJsonJSONTokener *x);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *x);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithNSString_(OrgJsonJSONArray *self, NSString *source);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithNSString_(NSString *source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithNSString_(NSString *source);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithJavaUtilCollection_(OrgJsonJSONArray *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithId_(OrgJsonJSONArray *self, id array);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithId_(id array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithId_(id array);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONArray)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJsonJSONArray")
