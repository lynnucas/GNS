//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/gigapaxos/testing/TESTPaxosConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig")
#ifdef RESTRICT_EduUmassCsGigapaxosTestingTESTPaxosConfig
#define INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosTestingTESTPaxosConfig

#if !defined (EduUmassCsGigapaxosTestingTESTPaxosConfig_) && (INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig || defined(INCLUDE_EduUmassCsGigapaxosTestingTESTPaxosConfig))
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_

@class EduUmassCsNioNioutilsSampleNodeConfig;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangInteger;
@class JavaUtilLoggingLevel;
@protocol EduUmassCsNioInterfacesNodeConfig;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface EduUmassCsGigapaxosTestingTESTPaxosConfig : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)commitWithInt:(jint)reqnum;

+ (void)crashWithInt:(jint)nodeID;

+ (void)createGroupWithNSString:(NSString *)groupID
                   withIntArray:(IOSIntArray *)members;

+ (void)executeWithLong:(jlong)reqnum;

+ (jboolean)findMyIPWithJavaLangInteger:(JavaLangInteger *)myID;

+ (jboolean)getCleanDB;

+ (NSString *)getConfDirArgWithNSStringArray:(IOSObjectArray *)args;

+ (IOSIntArray *)getDefaultGroup;

+ (id<JavaUtilSet>)getDefaultGroupSet;

+ (id<EduUmassCsNioInterfacesNodeConfig>)getFromPaxosConfigWithBoolean:(jboolean)clientFacing;

+ (IOSIntArray *)getGroupWithInt:(jint)groupID;

+ (IOSIntArray *)getGroupWithNSString:(NSString *)groupID;

+ (NSString *)getGroupNameWithInt:(jint)groupID;

+ (id<JavaUtilCollection>)getGroups;

+ (EduUmassCsNioNioutilsSampleNodeConfig *)getNodeConfig;

+ (id<JavaUtilSet>)getNodes;

+ (jboolean)getRecoveredWithInt:(jint)id_
                   withNSString:(NSString *)paxosID;

+ (jboolean)getSendReplyToClient;

+ (jboolean)isCommittedWithLong:(jlong)reqnum;

+ (jboolean)isCrashedWithId:(id)nodeID;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (void)recoverWithInt:(jint)nodeID;

+ (void)setAssertRSMInvariantWithBoolean:(jboolean)b;

+ (void)setCleanDBWithBoolean:(jboolean)b;

+ (void)setConsoleHandlerWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level;

+ (void)setDefaultGroupsWithInt:(jint)numGroups;

+ (void)setGroupWithNSString:(NSString *)groupID
                withIntArray:(IOSIntArray *)members;

+ (void)setGroupWithNSString:(NSString *)groupID
             withJavaUtilSet:(id<JavaUtilSet>)members;

+ (void)setRandomGroupsWithInt:(jint)numGroups;

+ (void)setRecoveredWithInt:(jint)id_
               withNSString:(NSString *)paxosID
                withBoolean:(jboolean)b;

+ (void)setSendReplyToClientWithBoolean:(jboolean)b;

+ (jboolean)shouldAssertRSMInvariant;

+ (jboolean)shouldCleanDBWithNSStringArray:(IOSObjectArray *)args;

#pragma mark Protected

+ (id<EduUmassCsNioInterfacesNodeConfig>)getFromPaxosConfig;

+ (void)load__;

+ (void)setConsoleHandler;

+ (void)setDistribtedTest;

+ (void)setSingleNodeTest;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosTestingTESTPaxosConfig)

inline NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_get_TESTING_CONFIG_FILE_KEY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_TESTING_CONFIG_FILE_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosTestingTESTPaxosConfig, TESTING_CONFIG_FILE_KEY, NSString *)

inline NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_get_DEFAULT_TESTING_CONFIG_FILE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_DEFAULT_TESTING_CONFIG_FILE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosTestingTESTPaxosConfig, DEFAULT_TESTING_CONFIG_FILE, NSString *)

inline jint EduUmassCsGigapaxosTestingTESTPaxosConfig_get_MAX_NODE_ID();
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_MAX_NODE_ID 10000
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig, MAX_NODE_ID, jint)

inline jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_get_ENABLE_CLIENT_REQ_RTX();
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_ENABLE_CLIENT_REQ_RTX false
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig, ENABLE_CLIENT_REQ_RTX, jboolean)

inline jlong EduUmassCsGigapaxosTestingTESTPaxosConfig_get_CLIENT_REQ_RTX_TIMEOUT();
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_CLIENT_REQ_RTX_TIMEOUT 8000LL
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig, CLIENT_REQ_RTX_TIMEOUT, jlong)

inline jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_get_PAXOS_MANAGER_UNIT_TEST();
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_PAXOS_MANAGER_UNIT_TEST false
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig, PAXOS_MANAGER_UNIT_TEST, jboolean)

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_init(EduUmassCsGigapaxosTestingTESTPaxosConfig *self);

FOUNDATION_EXPORT EduUmassCsGigapaxosTestingTESTPaxosConfig *new_EduUmassCsGigapaxosTestingTESTPaxosConfig_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosTestingTESTPaxosConfig *create_EduUmassCsGigapaxosTestingTESTPaxosConfig_init();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_load__();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setSingleNodeTest();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setDistribtedTest();

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_shouldAssertRSMInvariant();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setAssertRSMInvariantWithBoolean_(jboolean b);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setCleanDBWithBoolean_(jboolean b);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_getCleanDB();

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGigapaxosTestingTESTPaxosConfig_getNodes();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setSendReplyToClientWithBoolean_(jboolean b);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_getSendReplyToClient();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setDefaultGroupsWithInt_(jint numGroups);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setRandomGroupsWithInt_(jint numGroups);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_shouldCleanDBWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_getConfDirArgWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setGroupWithNSString_withJavaUtilSet_(NSString *groupID, id<JavaUtilSet> members);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setGroupWithNSString_withIntArray_(NSString *groupID, IOSIntArray *members);

FOUNDATION_EXPORT IOSIntArray *EduUmassCsGigapaxosTestingTESTPaxosConfig_getDefaultGroup();

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGigapaxosTestingTESTPaxosConfig_getDefaultGroupSet();

FOUNDATION_EXPORT IOSIntArray *EduUmassCsGigapaxosTestingTESTPaxosConfig_getGroupWithNSString_(NSString *groupID);

FOUNDATION_EXPORT IOSIntArray *EduUmassCsGigapaxosTestingTESTPaxosConfig_getGroupWithInt_(jint groupID);

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosTestingTESTPaxosConfig_getGroupNameWithInt_(jint groupID);

FOUNDATION_EXPORT id<JavaUtilCollection> EduUmassCsGigapaxosTestingTESTPaxosConfig_getGroups();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_createGroupWithNSString_withIntArray_(NSString *groupID, IOSIntArray *members);

FOUNDATION_EXPORT EduUmassCsNioNioutilsSampleNodeConfig *EduUmassCsGigapaxosTestingTESTPaxosConfig_getNodeConfig();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_crashWithInt_(jint nodeID);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_recoverWithInt_(jint nodeID);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_isCrashedWithId_(id nodeID);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setRecoveredWithInt_withNSString_withBoolean_(jint id_, NSString *paxosID, jboolean b);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_getRecoveredWithInt_withNSString_(jint id_, NSString *paxosID);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_isCommittedWithLong_(jlong reqnum);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_executeWithLong_(jlong reqnum);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_commitWithInt_(jint reqnum);

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosTestingTESTPaxosConfig_findMyIPWithJavaLangInteger_(JavaLangInteger *myID);

FOUNDATION_EXPORT id<EduUmassCsNioInterfacesNodeConfig> EduUmassCsGigapaxosTestingTESTPaxosConfig_getFromPaxosConfig();

FOUNDATION_EXPORT id<EduUmassCsNioInterfacesNodeConfig> EduUmassCsGigapaxosTestingTESTPaxosConfig_getFromPaxosConfigWithBoolean_(jboolean clientFacing);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setConsoleHandlerWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *level);

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_setConsoleHandler();

FOUNDATION_EXPORT void EduUmassCsGigapaxosTestingTESTPaxosConfig_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosTestingTESTPaxosConfig)

#endif

#if !defined (EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_) && (INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig || defined(INCLUDE_EduUmassCsGigapaxosTestingTESTPaxosConfig_TC))
#define EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_EduUmassCsUtilsConfig 1
#define INCLUDE_EduUmassCsUtilsConfig_ConfigurableEnum 1
#include "edu/umass/cs/utils/Config.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum) {
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NUM_NODES = 0,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TEST_GUID_PREFIX = 1,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TEST_GUID = 2,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NODE_INCLUSION_PROB = 3,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TEST_START_NODE_ID = 4,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TEST_CLIENT_ID = 5,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PRE_CONFIGURED_GROUPS = 6,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NUM_GROUPS = 7,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NUM_GROUPS_CLIENT = 8,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_GROUP_SIZE = 9,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NUM_CLIENTS = 10,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_WARMUP = 11,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PIN_CLIENT = 12,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_NUM_REQUESTS = 13,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TOTAL_LOAD = 14,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_REQUEST_BAGGAGE_SIZE = 15,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_COMPRESSIBLE_REQUEST = 16,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_OVERHEAD_TESTING = 17,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_MEMORY_TESTING = 18,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_ABSOLUTE_NOOP_APP = 19,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_TEST_APP_DELAY = 20,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_CAPACITY = 21,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_INIT_LOAD = 22,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_RUN_DURATION = 23,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_RESPONSE_THRESHOLD = 24,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_LOAD_INCREASE_FACTOR = 25,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_LATENCY_THRESHOLD = 26,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_MAX_CONSECUTIVE_FAILURES = 27,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_PROBE_MAX_RUNS = 28,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_MAX_RESPONSE_WAIT_TIME = 29,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_WORKLOAD_SKEW = 30,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_BATCH_CREATION_SIZE = 31,
  EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_Enum_BATCH_CREATION_ENABLED = 32,
};

@interface EduUmassCsGigapaxosTestingTESTPaxosConfig_TC : JavaLangEnum < NSCopying, EduUmassCsUtilsConfig_ConfigurableEnum > {
 @public
  id defaultValue_;
}

#pragma mark Public

- (NSString *)getConfigFileKey;

- (NSString *)getDefaultConfigFile;

- (id)getDefaultValue;

+ (EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_values_[];

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NUM_NODES();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NUM_NODES)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TEST_GUID_PREFIX();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TEST_GUID_PREFIX)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TEST_GUID();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TEST_GUID)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NODE_INCLUSION_PROB();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NODE_INCLUSION_PROB)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TEST_START_NODE_ID();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TEST_START_NODE_ID)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TEST_CLIENT_ID();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TEST_CLIENT_ID)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PRE_CONFIGURED_GROUPS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PRE_CONFIGURED_GROUPS)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NUM_GROUPS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NUM_GROUPS)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NUM_GROUPS_CLIENT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NUM_GROUPS_CLIENT)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_GROUP_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, GROUP_SIZE)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NUM_CLIENTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NUM_CLIENTS)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_WARMUP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, WARMUP)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PIN_CLIENT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PIN_CLIENT)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_NUM_REQUESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, NUM_REQUESTS)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TOTAL_LOAD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TOTAL_LOAD)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_REQUEST_BAGGAGE_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, REQUEST_BAGGAGE_SIZE)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_COMPRESSIBLE_REQUEST();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, COMPRESSIBLE_REQUEST)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_OVERHEAD_TESTING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, OVERHEAD_TESTING)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_MEMORY_TESTING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, MEMORY_TESTING)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_ABSOLUTE_NOOP_APP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, ABSOLUTE_NOOP_APP)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_TEST_APP_DELAY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, TEST_APP_DELAY)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_CAPACITY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_CAPACITY)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_INIT_LOAD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_INIT_LOAD)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_RUN_DURATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_RUN_DURATION)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_RESPONSE_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_RESPONSE_THRESHOLD)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_LOAD_INCREASE_FACTOR();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_LOAD_INCREASE_FACTOR)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_LATENCY_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_LATENCY_THRESHOLD)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_MAX_CONSECUTIVE_FAILURES();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_MAX_CONSECUTIVE_FAILURES)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_PROBE_MAX_RUNS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, PROBE_MAX_RUNS)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_MAX_RESPONSE_WAIT_TIME();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, MAX_RESPONSE_WAIT_TIME)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_WORKLOAD_SKEW();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, WORKLOAD_SKEW)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_BATCH_CREATION_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, BATCH_CREATION_SIZE)

inline EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_get_BATCH_CREATION_ENABLED();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, BATCH_CREATION_ENABLED)

J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC, defaultValue_, id)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_values();

FOUNDATION_EXPORT EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGigapaxosTestingTESTPaxosConfig_TC *EduUmassCsGigapaxosTestingTESTPaxosConfig_TC_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosTestingTESTPaxosConfig_TC)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosTestingTESTPaxosConfig")
