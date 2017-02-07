//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/nio/nioutils/RTTEstimator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator")
#ifdef RESTRICT_EduUmassCsNioNioutilsRTTEstimator
#define INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator 0
#else
#define INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator 1
#endif
#undef RESTRICT_EduUmassCsNioNioutilsRTTEstimator

#if !defined (EduUmassCsNioNioutilsRTTEstimator_) && (INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator || defined(INCLUDE_EduUmassCsNioNioutilsRTTEstimator))
#define EduUmassCsNioNioutilsRTTEstimator_

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaUtilConcurrentConcurrentHashMap;
@class OrgJsonJSONObject;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsNioNioutilsRTTEstimator : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)addrToIntWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (jint)addrToPrefixIntWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (void)closestWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sender
                            withJavaUtilMap:(id<JavaUtilMap>)nearestMap;

+ (OrgJsonJSONObject *)getAmazonIPToRegionFile;

+ (id<JavaUtilSet>)getClosestWithJavaNetInetAddress:(JavaNetInetAddress *)clientAddr;

+ (jlong)getRTTWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (jlong)pingWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (NSString *)print;

+ (void)recordWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (jlong)recordWithJavaNetInetAddress:(JavaNetInetAddress *)address
                             withLong:(jlong)rtt;

#pragma mark Protected

+ (JavaUtilConcurrentConcurrentHashMap *)populateAWSIPToRegionMap;

@end

J2OBJC_STATIC_INIT(EduUmassCsNioNioutilsRTTEstimator)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_init(EduUmassCsNioNioutilsRTTEstimator *self);

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator *new_EduUmassCsNioNioutilsRTTEstimator_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator *create_EduUmassCsNioNioutilsRTTEstimator_init();

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_recordWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT jlong EduUmassCsNioNioutilsRTTEstimator_recordWithJavaNetInetAddress_withLong_(JavaNetInetAddress *address, jlong rtt);

FOUNDATION_EXPORT jlong EduUmassCsNioNioutilsRTTEstimator_getRTTWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT jlong EduUmassCsNioNioutilsRTTEstimator_pingWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsNioNioutilsRTTEstimator_getAmazonIPToRegionFile();

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentHashMap *EduUmassCsNioNioutilsRTTEstimator_populateAWSIPToRegionMap();

FOUNDATION_EXPORT jint EduUmassCsNioNioutilsRTTEstimator_addrToIntWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT jint EduUmassCsNioNioutilsRTTEstimator_addrToPrefixIntWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT NSString *EduUmassCsNioNioutilsRTTEstimator_print();

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_closestWithJavaNetInetSocketAddress_withJavaUtilMap_(JavaNetInetSocketAddress *sender, id<JavaUtilMap> nearestMap);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsNioNioutilsRTTEstimator_getClosestWithJavaNetInetAddress_(JavaNetInetAddress *clientAddr);

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsRTTEstimator)

#endif

#if !defined (EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_) && (INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator || defined(INCLUDE_EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix))
#define EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_

@class JavaNetInetAddress;

@interface EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix : NSObject {
 @public
  JavaNetInetAddress *address_;
  jint mask_;
}

#pragma mark Public

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                   withInt:(jint)mask;

- (instancetype)initWithNSString:(NSString *)prefix;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix)

J2OBJC_FIELD_SETTER(EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix, address_, JavaNetInetAddress *)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithJavaNetInetAddress_withInt_(EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *self, JavaNetInetAddress *address, jint mask);

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *new_EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithJavaNetInetAddress_withInt_(JavaNetInetAddress *address, jint mask) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *create_EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithJavaNetInetAddress_withInt_(JavaNetInetAddress *address, jint mask);

FOUNDATION_EXPORT void EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithNSString_(EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *self, NSString *prefix);

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *new_EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithNSString_(NSString *prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix *create_EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix_initWithNSString_(NSString *prefix);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsRTTEstimator_IPv4Prefix)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioNioutilsRTTEstimator")
