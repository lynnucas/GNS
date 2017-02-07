//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/reconfiguration/reconfigurationutils/ReconfigurationRecord.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord

#if !defined (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord))
#define EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_

#define RESTRICT_OrgJsonJSONObject 1
#define INCLUDE_OrgJsonJSONObject 1
#include "org/json/JSONObject.h"

@class EduUmassCsReconfigurationReconfigurationpacketsDemandReport;
@class EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol EduUmassCsNioInterfacesStringifiable;
@protocol JavaUtilSet;

@interface EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord : OrgJsonJSONObject

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)epoch
                 withJavaUtilSet:(id<JavaUtilSet>)newActives;

- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)epoch
                 withJavaUtilSet:(id<JavaUtilSet>)actives
                 withJavaUtilSet:(id<JavaUtilSet>)newActives;

- (jboolean)addToMergeWithNSString:(NSString *)s;

- (jboolean)areMergesAllDone;

- (void)clearMerged;

- (jboolean)clearMergedWithNSString:(NSString *)mergee;

- (id<JavaUtilSet>)getActiveReplicas;

- (id<JavaUtilSet>)getActiveReplicasWithNSString:(NSString *)name
                                         withInt:(jint)epoch;

- (jlong)getDeleteTime;

- (jint)getEpoch;

- (NSString *)getName;

- (id<JavaUtilSet>)getNewActives;

- (JavaLangInteger *)getRCEpochWithId:(id)rcGroupName;

- (JavaLangInteger *)getRCEpochWithNSString:(NSString *)rcGroupName;

- (NSString *)getRCGroupName;

- (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *)getState;

- (NSString *)getSummary;

- (jint)getUnclean;

- (jboolean)hasBeenMergedWithJavaUtilSet:(id<JavaUtilSet>)mergees;

- (jboolean)hasBeenMergedWithNSString:(NSString *)s;

- (jboolean)incrEpochWithInt:(jint)epoch;

- (jboolean)insertMergedWithNSString:(NSString *)s;

- (jboolean)isDeletable;

- (jboolean)isDeletePending;

- (jboolean)isReady;

- (jboolean)isReconfigurationReady;

- (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *)putActiveReplicasWithNSString:(NSString *)name
                                                                                              withInt:(jint)epoch
                                                                                      withJavaUtilSet:(id<JavaUtilSet>)arSet;

- (void)setActivesToNewActives;

- (void)setActivesToNewActivesWithJavaUtilSet:(id<JavaUtilSet>)newActives;

- (jboolean)setDropPreviousEpochCompleted;

- (jboolean)setEpochWithInt:(jint)epoch;

- (void)setRCEpochsWithJavaUtilSet:(id<JavaUtilSet>)affectedRCs
                   withJavaUtilSet:(id<JavaUtilSet>)addNodes
                   withJavaUtilSet:(id<JavaUtilSet>)deleteNodes;

- (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *)setRCGroupNameWithNSString:(NSString *)groupName;

- (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *)setStateWithNSString:(NSString *)name
                                                                                     withInt:(jint)epoch
             withEduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates:(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *)state;

- (void)setStateWithNSString:(NSString *)name
                     withInt:(jint)epoch
withEduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates:(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *)state
             withJavaUtilSet:(id<JavaUtilSet>)newActives;

- (void)setStateMergeWithNSString:(NSString *)name
                          withInt:(jint)epoch
withEduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates:(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *)state
                  withJavaUtilSet:(id<JavaUtilSet>)mergees;

- (OrgJsonJSONObject *)toJSONObject;

- (jboolean)toMergeContainsWithNSString:(NSString *)s;

- (NSString *)description;

- (void)trimRCEpochs;

- (jboolean)updateStatsWithEduUmassCsReconfigurationReconfigurationpacketsDemandReport:(EduUmassCsReconfigurationReconfigurationpacketsDemandReport *)report;

#pragma mark Package-Private

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *self, NSString *name, jint epoch, id<JavaUtilSet> newActives);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *new_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_(NSString *name, jint epoch, id<JavaUtilSet> newActives) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *create_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_(NSString *name, jint epoch, id<JavaUtilSet> newActives);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_withJavaUtilSet_(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *self, NSString *name, jint epoch, id<JavaUtilSet> actives, id<JavaUtilSet> newActives);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *new_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_withJavaUtilSet_(NSString *name, jint epoch, id<JavaUtilSet> actives, id<JavaUtilSet> newActives) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *create_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithNSString_withInt_withJavaUtilSet_withJavaUtilSet_(NSString *name, jint epoch, id<JavaUtilSet> actives, id<JavaUtilSet> newActives);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *new_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord *create_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord)

#endif

#if !defined (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys))
#define EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum) {
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_NAME = 0,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_EPOCH = 1,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_RC_STATE = 2,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_ACTIVES = 3,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_NEW_ACTIVES = 4,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_MERGED = 5,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_RC_NODE = 6,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_RC_EPOCH = 7,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_RC_EPOCH_MAP = 8,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_STOPPED = 9,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_MERGE_TASKS = 10,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_DELETE_TIME = 11,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_Enum_NUM_UNCLEAN = 12,
};

@interface EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_values_[];

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_NAME();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, NAME)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_EPOCH();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, EPOCH)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_RC_STATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, RC_STATE)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_ACTIVES();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, ACTIVES)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_NEW_ACTIVES();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, NEW_ACTIVES)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_MERGED();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, MERGED)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_RC_NODE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, RC_NODE)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_RC_EPOCH();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, RC_EPOCH)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_RC_EPOCH_MAP();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, RC_EPOCH_MAP)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_STOPPED();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, STOPPED)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_MERGE_TASKS();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, MERGE_TASKS)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_DELETE_TIME();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, DELETE_TIME)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_get_NUM_UNCLEAN();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys, NUM_UNCLEAN)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_values();

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_Keys)

#endif

#if !defined (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates))
#define EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum) {
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum_READY = 0,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum_WAIT_ACK_STOP = 1,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum_WAIT_ACK_START = 2,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum_READY_READY = 3,
  EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_Enum_WAIT_DELETE = 4,
};

@interface EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_values_[];

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_get_READY();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates, READY)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_get_WAIT_ACK_STOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates, WAIT_ACK_STOP)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_get_WAIT_ACK_START();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates, WAIT_ACK_START)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_get_READY_READY();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates, READY_READY)

inline EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_get_WAIT_DELETE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates, WAIT_DELETE)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_values();

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates *EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord_RCStates)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsReconfigurationRecord")
