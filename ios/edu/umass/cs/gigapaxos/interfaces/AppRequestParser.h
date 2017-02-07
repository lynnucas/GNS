//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/gigapaxos/interfaces/AppRequestParser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesAppRequestParser")
#ifdef RESTRICT_EduUmassCsGigapaxosInterfacesAppRequestParser
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesAppRequestParser 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesAppRequestParser 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosInterfacesAppRequestParser

#if !defined (EduUmassCsGigapaxosInterfacesAppRequestParser_) && (INCLUDE_ALL_EduUmassCsGigapaxosInterfacesAppRequestParser || defined(INCLUDE_EduUmassCsGigapaxosInterfacesAppRequestParser))
#define EduUmassCsGigapaxosInterfacesAppRequestParser_

#define RESTRICT_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#include "edu/umass/cs/gigapaxos/interfaces/AppRequestParserBytes.h"

@class EduUmassCsNioNioutilsNIOHeader;
@class IOSByteArray;
@protocol EduUmassCsGigapaxosInterfacesRequest;
@protocol JavaUtilSet;

@protocol EduUmassCsGigapaxosInterfacesAppRequestParser < EduUmassCsGigapaxosInterfacesAppRequestParserBytes, JavaObject >

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithNSString:(NSString *)stringified;

- (id<JavaUtilSet>)getRequestTypes;

- (id<JavaUtilSet>)getServerAuthRequestTypes;

- (id<JavaUtilSet>)getMutualAuthRequestTypes;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithByteArray:(IOSByteArray *)message
                                 withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosInterfacesAppRequestParser)

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGigapaxosInterfacesAppRequestParser_getServerAuthRequestTypes(id<EduUmassCsGigapaxosInterfacesAppRequestParser> self);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGigapaxosInterfacesAppRequestParser_getMutualAuthRequestTypes(id<EduUmassCsGigapaxosInterfacesAppRequestParser> self);

FOUNDATION_EXPORT id<EduUmassCsGigapaxosInterfacesRequest> EduUmassCsGigapaxosInterfacesAppRequestParser_getRequestWithByteArray_withEduUmassCsNioNioutilsNIOHeader_(id<EduUmassCsGigapaxosInterfacesAppRequestParser> self, IOSByteArray *message, EduUmassCsNioNioutilsNIOHeader *header);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosInterfacesAppRequestParser)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesAppRequestParser")
