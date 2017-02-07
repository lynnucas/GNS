//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/gigapaxos/PaxosConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig")
#ifdef RESTRICT_EduUmassCsGigapaxosPaxosConfig
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosPaxosConfig

#if !defined (EduUmassCsGigapaxosPaxosConfig_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig || defined(INCLUDE_EduUmassCsGigapaxosPaxosConfig))
#define EduUmassCsGigapaxosPaxosConfig_

@class IOSClass;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@class JavaUtilProperties;
@protocol EduUmassCsNioInterfacesNodeConfig;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsGigapaxosPaxosConfig : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<JavaUtilMap>)getActives;

+ (JavaUtilProperties *)getAsProperties;

+ (jint)getClientPortOffset;

+ (id<EduUmassCsNioInterfacesNodeConfig>)getDefaultNodeConfig;

+ (JavaUtilLoggingLogger *)getLogger;

+ (NSString *)getPropertiesFile;

+ (void)load__;

+ (void)load__WithIOSClass:(IOSClass *)type;

+ (id<JavaUtilSet>)offsetSocketAddressesWithJavaUtilSet:(id<JavaUtilSet>)servers
                                                withInt:(jint)globalInt;

+ (jboolean)sanityCheck;

+ (void)sanityCheckWithEduUmassCsNioInterfacesNodeConfig:(id<EduUmassCsNioInterfacesNodeConfig>)nodeConfig;

+ (void)setConsoleHandlerWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level;

+ (void)setNoPropertiesFile;

#pragma mark Protected

+ (void)setConsoleHandler;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosPaxosConfig)

inline NSString *EduUmassCsGigapaxosPaxosConfig_get_DEFAULT_GIGAPAXOS_CONFIG_FILE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosConfig_DEFAULT_GIGAPAXOS_CONFIG_FILE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosPaxosConfig, DEFAULT_GIGAPAXOS_CONFIG_FILE, NSString *)

inline NSString *EduUmassCsGigapaxosPaxosConfig_get_GIGAPAXOS_CONFIG_FILE_KEY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosConfig_GIGAPAXOS_CONFIG_FILE_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosPaxosConfig, GIGAPAXOS_CONFIG_FILE_KEY, NSString *)

inline NSString *EduUmassCsGigapaxosPaxosConfig_get_DEFAULT_SERVER_PREFIX();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosConfig_DEFAULT_SERVER_PREFIX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosPaxosConfig, DEFAULT_SERVER_PREFIX, NSString *)

inline IOSClass *EduUmassCsGigapaxosPaxosConfig_get_application();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *EduUmassCsGigapaxosPaxosConfig_application;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosPaxosConfig, application, IOSClass *)

inline JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosConfig_get_log();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosConfig_log;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGigapaxosPaxosConfig, log, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_init(EduUmassCsGigapaxosPaxosConfig *self);

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig *new_EduUmassCsGigapaxosPaxosConfig_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig *create_EduUmassCsGigapaxosPaxosConfig_init();

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_load__WithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_load__();

FOUNDATION_EXPORT JavaUtilProperties *EduUmassCsGigapaxosPaxosConfig_getAsProperties();

FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosPaxosConfig_sanityCheck();

FOUNDATION_EXPORT id<JavaUtilMap> EduUmassCsGigapaxosPaxosConfig_getActives();

FOUNDATION_EXPORT JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosConfig_getLogger();

FOUNDATION_EXPORT jint EduUmassCsGigapaxosPaxosConfig_getClientPortOffset();

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGigapaxosPaxosConfig_offsetSocketAddressesWithJavaUtilSet_withInt_(id<JavaUtilSet> servers, jint globalInt);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_setConsoleHandlerWithJavaUtilLoggingLevel_(JavaUtilLoggingLevel *level);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_setConsoleHandler();

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_sanityCheckWithEduUmassCsNioInterfacesNodeConfig_(id<EduUmassCsNioInterfacesNodeConfig> nodeConfig);

FOUNDATION_EXPORT id<EduUmassCsNioInterfacesNodeConfig> EduUmassCsGigapaxosPaxosConfig_getDefaultNodeConfig();

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_setNoPropertiesFile();

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosConfig_getPropertiesFile();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosConfig)

#endif

#if !defined (EduUmassCsGigapaxosPaxosConfig_PC_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig || defined(INCLUDE_EduUmassCsGigapaxosPaxosConfig_PC))
#define EduUmassCsGigapaxosPaxosConfig_PC_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_EduUmassCsUtilsConfig 1
#define INCLUDE_EduUmassCsUtilsConfig_ConfigurableEnum 1
#include "edu/umass/cs/utils/Config.h"

#define RESTRICT_EduUmassCsUtilsConfig 1
#define INCLUDE_EduUmassCsUtilsConfig_Disableable 1
#include "edu/umass/cs/utils/Config.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGigapaxosPaxosConfig_PC_Enum) {
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_APPLICATION = 0,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CLIENT_PORT_OFFSET = 1,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CLIENT_PORT_SSL_OFFSET = 2,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DEBUG = 3,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DISABLE_LOGGING = 4,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_JOURNALING = 5,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DISABLE_CHECKPOINTING = 6,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_COMPRESSION = 7,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_COMPRESSION_THRESHOLD = 8,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PINSTANCES_CAPACITY = 9,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MORGUE_DELAY = 10,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_HIBERNATE_OPTION = 11,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAUSE_OPTION = 12,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAUSE_SIZE_THRESHOLD = 13,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DEACTIVATION_PERIOD = 14,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAUSE_RATE_LIMIT = 15,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_FINAL_STATE_AGE = 16,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCHING_ENABLED = 17,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_LOG_FILE_SIZE = 18,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CAN_CREATE_TIMEOUT = 19,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_WAIT_TO_GET_CREATED_TIMEOUT = 20,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_LOG_MESSAGE_SIZE = 21,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_CHECKPOINT_SIZE = 22,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LOG_GC_FREQUENCY = 23,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_JOURNAL_GC_FREQUENCY = 24,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_COMPACTION_FREQUENCY = 25,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LOG_INDEX_FREQUENCY = 26,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_INDEX_LOG_TABLE = 27,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCH_SLEEP_DURATION = 28,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCH_OVERHEAD = 29,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DISABLE_SYNC_DECISIONS = 30,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_BATCH_SIZE = 31,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CHECKPOINT_INTERVAL = 32,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PACKET_DEMULTIPLEXER_THREADS = 33,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ORDER_PRESERVING_REQUESTS = 34,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_EMULATE_UNREPLICATED = 35,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NO_RESPONSE = 36,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_EXECUTE_UPON_ACCEPT = 37,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LAZY_PROPAGATION = 38,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCHED_ACCEPT_REPLIES = 39,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCHED_COMMITS = 40,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DB_COMPRESSION = 41,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_INSTRUMENTATION = 42,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_STATIC_CHECKS = 43,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DELAY_PROFILER = 44,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_JSON_LIBRARY = 45,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_GIGAPAXOS_DATA_DIR = 46,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAXOS_LOGS_DIR = 47,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAXOS_DB_PREFIX = 48,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_PAXOS_ID_SIZE = 49,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_SQL_TYPE = 50,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_GROUP_SIZE = 51,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_OUTSTANDING_REQUESTS = 52,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_THROTTLE_SLEEP = 53,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CLIENT_SSL_MODE = 54,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_SERVER_SSL_MODE = 55,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NUM_MESSENGER_WORKERS = 56,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_NIO_SENDER_TASK = 57,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DISABLE_CC = 58,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_GC_MAP = 59,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LOG_META_DECISIONS = 60,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BYTEIFICATION = 61,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_INSTRUMENT_SERIALIZATION = 62,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_STRICT_ADDRESS_CHECKS = 63,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CLIENT_DEMULTIPLEXER_THREADS = 64,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_HANDLE_MESSAGE_REPORT = 65,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_READ_YOUR_WRITES = 66,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PREVENT_DOUBLE_EXECUTION = 67,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAUSABLE_INDEX_JOURNAL = 68,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MULTITHREAD_LOGGER = 69,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DB_INDEX_JOURNAL = 70,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_FAILURE_DETECTION_TIMEOUT = 71,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_REQUEST_TIMEOUT = 72,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_MAP_DB = 73,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_CHECKPOINTS_AS_PAUSE_TABLE = 74,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_DISK_MAP = 75,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_USE_HEX_TIMESTAMP = 76,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LAZY_COMPACTION = 77,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_PAUSE_BATCH_SIZE = 78,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_SYNC = 79,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_FLUSH = 80,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_SYNC_FCLOSE = 81,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_FLUSH_FCLOSE = 82,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LOGFILE_AGE_THRESHOLD = 83,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_CPI_NOISE = 84,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCH_CHECKPOINTS = 85,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MAX_DB_BATCH_SIZE = 86,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_HANDLE_REQUEST_RETRY_INTERVAL = 87,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_HANDLE_REQUEST_RETRY_LIMIT = 88,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DIGEST_REQUESTS = 89,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DIGEST_THRESHOLD = 90,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCH_ACROSS_GROUPS = 91,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_FLIP_BATCHED_ACCEPTS = 92,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BATCHED_REQUESTS = 93,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_SHORT_CIRCUIT_LOCAL = 94,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NUM_MESSAGE_DIGESTS = 95,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DEBUG_MONITOR = 96,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ACCEPT_TIMEOUT = 97,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_POKE_COORDINATOR = 98,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_MIN_PP_BATCH_SIZE = 99,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_LOG_DISKMAP_CAPACITY = 100,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DIGEST_THRESHOLD_SIZE = 101,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_BLOCKING_CHECKPOINT = 102,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_GC_MAJORITY_EXECUTED = 103,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DB_USER = 104,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DB_PASSWORD = 105,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_EMULATE_DELAYS = 106,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_JOURNAL_COMPRESSION = 107,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_STRINGIFY_WO_JOURNALING = 108,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NON_COORD_ONLY = 109,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NO_STRINGIFY_JOURNALING = 110,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_COORD_STRINGIFIES_WO_JOURNALING = 111,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DONT_LOG_DECISIONS = 112,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_NON_COORD_DONT_LOG_DECISIONS = 113,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_COORD_DONT_LOG_DECISIONS = 114,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_COORD_JOURNALS_WO_STRINGIFYING = 115,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ALL_BUT_APPEND = 116,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_DISABLE_GET_LOGGED_MESSAGES = 117,
  EduUmassCsGigapaxosPaxosConfig_PC_Enum_ENABLE_RESPONSE_CACHING = 118,
};

@interface EduUmassCsGigapaxosPaxosConfig_PC : JavaLangEnum < NSCopying, EduUmassCsUtilsConfig_ConfigurableEnum, EduUmassCsUtilsConfig_Disableable > {
 @public
  id defaultValue_;
  jboolean unsafeTestingOnly_;
}

#pragma mark Public

- (NSString *)getConfigFileKey;

- (NSString *)getDefaultConfigFile;

- (id)getDefaultValue;

- (jboolean)isDisabled;

+ (EduUmassCsGigapaxosPaxosConfig_PC *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosPaxosConfig_PC)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_values_[];

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_APPLICATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, APPLICATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CLIENT_PORT_OFFSET();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CLIENT_PORT_OFFSET)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CLIENT_PORT_SSL_OFFSET();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CLIENT_PORT_SSL_OFFSET)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DEBUG();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DEBUG)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DISABLE_LOGGING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DISABLE_LOGGING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_JOURNALING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_JOURNALING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DISABLE_CHECKPOINTING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DISABLE_CHECKPOINTING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_COMPRESSION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_COMPRESSION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_COMPRESSION_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, COMPRESSION_THRESHOLD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PINSTANCES_CAPACITY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PINSTANCES_CAPACITY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MORGUE_DELAY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MORGUE_DELAY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_HIBERNATE_OPTION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, HIBERNATE_OPTION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAUSE_OPTION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAUSE_OPTION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAUSE_SIZE_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAUSE_SIZE_THRESHOLD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DEACTIVATION_PERIOD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DEACTIVATION_PERIOD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAUSE_RATE_LIMIT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAUSE_RATE_LIMIT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_FINAL_STATE_AGE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_FINAL_STATE_AGE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCHING_ENABLED();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCHING_ENABLED)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_LOG_FILE_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_LOG_FILE_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CAN_CREATE_TIMEOUT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CAN_CREATE_TIMEOUT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_WAIT_TO_GET_CREATED_TIMEOUT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, WAIT_TO_GET_CREATED_TIMEOUT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_LOG_MESSAGE_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_LOG_MESSAGE_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_CHECKPOINT_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_CHECKPOINT_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LOG_GC_FREQUENCY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LOG_GC_FREQUENCY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_JOURNAL_GC_FREQUENCY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, JOURNAL_GC_FREQUENCY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_COMPACTION_FREQUENCY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, COMPACTION_FREQUENCY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LOG_INDEX_FREQUENCY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LOG_INDEX_FREQUENCY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_INDEX_LOG_TABLE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, INDEX_LOG_TABLE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCH_SLEEP_DURATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCH_SLEEP_DURATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCH_OVERHEAD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCH_OVERHEAD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DISABLE_SYNC_DECISIONS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DISABLE_SYNC_DECISIONS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_BATCH_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_BATCH_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CHECKPOINT_INTERVAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CHECKPOINT_INTERVAL)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PACKET_DEMULTIPLEXER_THREADS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PACKET_DEMULTIPLEXER_THREADS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ORDER_PRESERVING_REQUESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ORDER_PRESERVING_REQUESTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_EMULATE_UNREPLICATED();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, EMULATE_UNREPLICATED)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NO_RESPONSE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NO_RESPONSE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_EXECUTE_UPON_ACCEPT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, EXECUTE_UPON_ACCEPT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LAZY_PROPAGATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LAZY_PROPAGATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCHED_ACCEPT_REPLIES();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCHED_ACCEPT_REPLIES)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCHED_COMMITS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCHED_COMMITS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DB_COMPRESSION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DB_COMPRESSION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_INSTRUMENTATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_INSTRUMENTATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_STATIC_CHECKS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_STATIC_CHECKS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DELAY_PROFILER();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DELAY_PROFILER)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_JSON_LIBRARY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, JSON_LIBRARY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_GIGAPAXOS_DATA_DIR();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, GIGAPAXOS_DATA_DIR)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAXOS_LOGS_DIR();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAXOS_LOGS_DIR)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAXOS_DB_PREFIX();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAXOS_DB_PREFIX)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_PAXOS_ID_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_PAXOS_ID_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_SQL_TYPE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, SQL_TYPE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_GROUP_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_GROUP_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_OUTSTANDING_REQUESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_OUTSTANDING_REQUESTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_THROTTLE_SLEEP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, THROTTLE_SLEEP)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CLIENT_SSL_MODE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CLIENT_SSL_MODE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_SERVER_SSL_MODE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, SERVER_SSL_MODE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NUM_MESSENGER_WORKERS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NUM_MESSENGER_WORKERS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_NIO_SENDER_TASK();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_NIO_SENDER_TASK)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DISABLE_CC();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DISABLE_CC)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_GC_MAP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_GC_MAP)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LOG_META_DECISIONS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LOG_META_DECISIONS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BYTEIFICATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BYTEIFICATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_INSTRUMENT_SERIALIZATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, INSTRUMENT_SERIALIZATION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_STRICT_ADDRESS_CHECKS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, STRICT_ADDRESS_CHECKS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CLIENT_DEMULTIPLEXER_THREADS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CLIENT_DEMULTIPLEXER_THREADS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_HANDLE_MESSAGE_REPORT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_HANDLE_MESSAGE_REPORT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_READ_YOUR_WRITES();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, READ_YOUR_WRITES)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PREVENT_DOUBLE_EXECUTION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PREVENT_DOUBLE_EXECUTION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAUSABLE_INDEX_JOURNAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAUSABLE_INDEX_JOURNAL)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MULTITHREAD_LOGGER();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MULTITHREAD_LOGGER)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DB_INDEX_JOURNAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DB_INDEX_JOURNAL)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_FAILURE_DETECTION_TIMEOUT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, FAILURE_DETECTION_TIMEOUT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_REQUEST_TIMEOUT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, REQUEST_TIMEOUT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_MAP_DB();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_MAP_DB)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_CHECKPOINTS_AS_PAUSE_TABLE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_CHECKPOINTS_AS_PAUSE_TABLE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_DISK_MAP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_DISK_MAP)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_USE_HEX_TIMESTAMP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, USE_HEX_TIMESTAMP)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LAZY_COMPACTION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LAZY_COMPACTION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_PAUSE_BATCH_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, PAUSE_BATCH_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_SYNC();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, SYNC)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_FLUSH();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, FLUSH)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_SYNC_FCLOSE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, SYNC_FCLOSE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_FLUSH_FCLOSE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, FLUSH_FCLOSE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LOGFILE_AGE_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LOGFILE_AGE_THRESHOLD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_CPI_NOISE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, CPI_NOISE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCH_CHECKPOINTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCH_CHECKPOINTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MAX_DB_BATCH_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MAX_DB_BATCH_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_HANDLE_REQUEST_RETRY_INTERVAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, HANDLE_REQUEST_RETRY_INTERVAL)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_HANDLE_REQUEST_RETRY_LIMIT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, HANDLE_REQUEST_RETRY_LIMIT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DIGEST_REQUESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DIGEST_REQUESTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DIGEST_THRESHOLD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DIGEST_THRESHOLD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCH_ACROSS_GROUPS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCH_ACROSS_GROUPS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_FLIP_BATCHED_ACCEPTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, FLIP_BATCHED_ACCEPTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BATCHED_REQUESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BATCHED_REQUESTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_SHORT_CIRCUIT_LOCAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, SHORT_CIRCUIT_LOCAL)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NUM_MESSAGE_DIGESTS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NUM_MESSAGE_DIGESTS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DEBUG_MONITOR();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DEBUG_MONITOR)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ACCEPT_TIMEOUT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ACCEPT_TIMEOUT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_POKE_COORDINATOR();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, POKE_COORDINATOR)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_MIN_PP_BATCH_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, MIN_PP_BATCH_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_LOG_DISKMAP_CAPACITY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, LOG_DISKMAP_CAPACITY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DIGEST_THRESHOLD_SIZE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DIGEST_THRESHOLD_SIZE)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_BLOCKING_CHECKPOINT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, BLOCKING_CHECKPOINT)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_GC_MAJORITY_EXECUTED();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, GC_MAJORITY_EXECUTED)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DB_USER();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DB_USER)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DB_PASSWORD();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DB_PASSWORD)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_EMULATE_DELAYS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, EMULATE_DELAYS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_JOURNAL_COMPRESSION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, JOURNAL_COMPRESSION)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_STRINGIFY_WO_JOURNALING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, STRINGIFY_WO_JOURNALING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NON_COORD_ONLY();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NON_COORD_ONLY)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NO_STRINGIFY_JOURNALING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NO_STRINGIFY_JOURNALING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_COORD_STRINGIFIES_WO_JOURNALING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, COORD_STRINGIFIES_WO_JOURNALING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DONT_LOG_DECISIONS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DONT_LOG_DECISIONS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_NON_COORD_DONT_LOG_DECISIONS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, NON_COORD_DONT_LOG_DECISIONS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_COORD_DONT_LOG_DECISIONS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, COORD_DONT_LOG_DECISIONS)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_COORD_JOURNALS_WO_STRINGIFYING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, COORD_JOURNALS_WO_STRINGIFYING)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ALL_BUT_APPEND();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ALL_BUT_APPEND)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_DISABLE_GET_LOGGED_MESSAGES();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, DISABLE_GET_LOGGED_MESSAGES)

inline EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_get_ENABLE_RESPONSE_CACHING();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosPaxosConfig_PC, ENABLE_RESPONSE_CACHING)

J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosConfig_PC, defaultValue_, id)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGigapaxosPaxosConfig_PC_values();

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig_PC *EduUmassCsGigapaxosPaxosConfig_PC_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosConfig_PC)

#endif

#if !defined (EduUmassCsGigapaxosPaxosConfig_RequestAndCallback_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig || defined(INCLUDE_EduUmassCsGigapaxosPaxosConfig_RequestAndCallback))
#define EduUmassCsGigapaxosPaxosConfig_RequestAndCallback_

@class EduUmassCsGigapaxosPaxospacketsAcceptPacket;
@class EduUmassCsGigapaxosPaxospacketsRequestPacket;
@protocol EduUmassCsGigapaxosInterfacesExecutedCallback;

@interface EduUmassCsGigapaxosPaxosConfig_RequestAndCallback : NSObject {
 @public
  EduUmassCsGigapaxosPaxospacketsRequestPacket *requestPacket_;
  id<EduUmassCsGigapaxosInterfacesExecutedCallback> callback_;
}

#pragma mark Public

- (EduUmassCsGigapaxosPaxospacketsRequestPacket *)getRequestPacket;

#pragma mark Protected

- (EduUmassCsGigapaxosPaxospacketsAcceptPacket *)setAcceptPacketWithEduUmassCsGigapaxosPaxospacketsAcceptPacket:(EduUmassCsGigapaxosPaxospacketsAcceptPacket *)accept;

#pragma mark Package-Private

- (instancetype)initWithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request
                   withEduUmassCsGigapaxosInterfacesExecutedCallback:(id<EduUmassCsGigapaxosInterfacesExecutedCallback>)callback;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosPaxosConfig_RequestAndCallback)

J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosConfig_RequestAndCallback, requestPacket_, EduUmassCsGigapaxosPaxospacketsRequestPacket *)
J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosConfig_RequestAndCallback, callback_, id<EduUmassCsGigapaxosInterfacesExecutedCallback>)

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosConfig_RequestAndCallback_initWithEduUmassCsGigapaxosPaxospacketsRequestPacket_withEduUmassCsGigapaxosInterfacesExecutedCallback_(EduUmassCsGigapaxosPaxosConfig_RequestAndCallback *self, EduUmassCsGigapaxosPaxospacketsRequestPacket *request, id<EduUmassCsGigapaxosInterfacesExecutedCallback> callback);

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig_RequestAndCallback *new_EduUmassCsGigapaxosPaxosConfig_RequestAndCallback_initWithEduUmassCsGigapaxosPaxospacketsRequestPacket_withEduUmassCsGigapaxosInterfacesExecutedCallback_(EduUmassCsGigapaxosPaxospacketsRequestPacket *request, id<EduUmassCsGigapaxosInterfacesExecutedCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosConfig_RequestAndCallback *create_EduUmassCsGigapaxosPaxosConfig_RequestAndCallback_initWithEduUmassCsGigapaxosPaxospacketsRequestPacket_withEduUmassCsGigapaxosInterfacesExecutedCallback_(EduUmassCsGigapaxosPaxospacketsRequestPacket *request, id<EduUmassCsGigapaxosInterfacesExecutedCallback> callback);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosConfig_RequestAndCallback)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosConfig")
