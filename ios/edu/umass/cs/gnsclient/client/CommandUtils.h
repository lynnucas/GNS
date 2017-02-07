//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../src/edu/umass/cs/gnsclient/client/CommandUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsclientClientCommandUtils")
#ifdef RESTRICT_EduUmassCsGnsclientClientCommandUtils
#define INCLUDE_ALL_EduUmassCsGnsclientClientCommandUtils 0
#else
#define INCLUDE_ALL_EduUmassCsGnsclientClientCommandUtils 1
#endif
#undef RESTRICT_EduUmassCsGnsclientClientCommandUtils

#if !defined (EduUmassCsGnsclientClientCommandUtils_) && (INCLUDE_ALL_EduUmassCsGnsclientClientCommandUtils || defined(INCLUDE_EduUmassCsGnsclientClientCommandUtils))
#define EduUmassCsGnsclientClientCommandUtils_

@class EduUmassCsGnscommonPacketsCommandPacket;
@class EduUmassCsGnscommonPacketsResponsePacket;
@class OrgJsonJSONArray;
@class OrgJsonJSONObject;

@interface EduUmassCsGnsclientClientCommandUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)addMessageWithoutSignatureToJSONWithOrgJsonJSONObject:(OrgJsonJSONObject *)command;

+ (EduUmassCsGnscommonPacketsResponsePacket *)checkResponseWithEduUmassCsGnscommonPacketsResponsePacket:(EduUmassCsGnscommonPacketsResponsePacket *)responsePacket
                                                            withEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)command;

+ (NSString *)checkResponseOldSchoolWithNSString:(NSString *)response;

+ (OrgJsonJSONArray *)commandResponseToJSONArrayWithNSString:(NSString *)field
                                                withNSString:(NSString *)response;

+ (NSString *)specialCaseSingleFieldWithNSString:(NSString *)response;

#pragma mark Protected

+ (EduUmassCsGnscommonPacketsResponsePacket *)checkResponseOldSchoolWithEduUmassCsGnscommonPacketsResponsePacket:(EduUmassCsGnscommonPacketsResponsePacket *)cvrp;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsclientClientCommandUtils)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientCommandUtils_init(EduUmassCsGnsclientClientCommandUtils *self);

FOUNDATION_EXPORT EduUmassCsGnsclientClientCommandUtils *new_EduUmassCsGnsclientClientCommandUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientCommandUtils *create_EduUmassCsGnsclientClientCommandUtils_init();

FOUNDATION_EXPORT NSString *EduUmassCsGnsclientClientCommandUtils_specialCaseSingleFieldWithNSString_(NSString *response);

FOUNDATION_EXPORT OrgJsonJSONArray *EduUmassCsGnsclientClientCommandUtils_commandResponseToJSONArrayWithNSString_withNSString_(NSString *field, NSString *response);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientCommandUtils_addMessageWithoutSignatureToJSONWithOrgJsonJSONObject_(OrgJsonJSONObject *command);

FOUNDATION_EXPORT EduUmassCsGnscommonPacketsResponsePacket *EduUmassCsGnsclientClientCommandUtils_checkResponseOldSchoolWithEduUmassCsGnscommonPacketsResponsePacket_(EduUmassCsGnscommonPacketsResponsePacket *cvrp);

FOUNDATION_EXPORT NSString *EduUmassCsGnsclientClientCommandUtils_checkResponseOldSchoolWithNSString_(NSString *response);

FOUNDATION_EXPORT EduUmassCsGnscommonPacketsResponsePacket *EduUmassCsGnsclientClientCommandUtils_checkResponseWithEduUmassCsGnscommonPacketsResponsePacket_withEduUmassCsGnscommonPacketsCommandPacket_(EduUmassCsGnscommonPacketsResponsePacket *responsePacket, EduUmassCsGnscommonPacketsCommandPacket *command);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientCommandUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsclientClientCommandUtils")
