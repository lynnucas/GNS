//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/reconfiguration/reconfigurationpackets/AckDropEpochFinalState.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState))
#define EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/BasicReconfigurationPacket.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesRequest 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesRequest 1
#include "edu/umass/cs/gigapaxos/interfaces/Request.h"

@class EduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState;
@class EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesIntegerPacketType;
@protocol EduUmassCsNioInterfacesStringifiable;

@interface EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState : EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket < EduUmassCsGigapaxosInterfacesRequest >

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithId:(id)sender
withEduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState:(EduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState *)dropEpoch;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)getRequestType;

- (NSString *)getSummary;

- (EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState_(EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *self, id sender, EduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState *dropEpoch);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *new_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState_(id sender, EduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState *dropEpoch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *create_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState_(id sender, EduUmassCsReconfigurationReconfigurationpacketsDropEpochFinalState *dropEpoch);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *new_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState *create_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsAckDropEpochFinalState")
