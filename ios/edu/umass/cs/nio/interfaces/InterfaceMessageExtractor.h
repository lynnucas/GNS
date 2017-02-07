//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/nio/interfaces/InterfaceMessageExtractor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioInterfacesInterfaceMessageExtractor")
#ifdef RESTRICT_EduUmassCsNioInterfacesInterfaceMessageExtractor
#define INCLUDE_ALL_EduUmassCsNioInterfacesInterfaceMessageExtractor 0
#else
#define INCLUDE_ALL_EduUmassCsNioInterfacesInterfaceMessageExtractor 1
#endif
#undef RESTRICT_EduUmassCsNioInterfacesInterfaceMessageExtractor

#if !defined (EduUmassCsNioInterfacesInterfaceMessageExtractor_) && (INCLUDE_ALL_EduUmassCsNioInterfacesInterfaceMessageExtractor || defined(INCLUDE_EduUmassCsNioInterfacesInterfaceMessageExtractor))
#define EduUmassCsNioInterfacesInterfaceMessageExtractor_

#define RESTRICT_EduUmassCsNioInterfacesDataProcessingWorker 1
#define INCLUDE_EduUmassCsNioInterfacesDataProcessingWorker 1
#include "edu/umass/cs/nio/interfaces/DataProcessingWorker.h"

@class EduUmassCsNioAbstractPacketDemultiplexer;
@class IOSByteArray;
@class JavaNetInetSocketAddress;

@protocol EduUmassCsNioInterfacesInterfaceMessageExtractor < EduUmassCsNioInterfacesDataProcessingWorker, JavaObject >

- (void)addPacketDemultiplexerWithEduUmassCsNioAbstractPacketDemultiplexer:(EduUmassCsNioAbstractPacketDemultiplexer *)pd;

- (void)precedePacketDemultiplexerWithEduUmassCsNioAbstractPacketDemultiplexer:(EduUmassCsNioAbstractPacketDemultiplexer *)pd;

- (void)stop;

- (void)processLocalMessageWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sockAddr
                                          withByteArray:(IOSByteArray *)msg;

- (void)demultiplexMessageWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioInterfacesInterfaceMessageExtractor)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioInterfacesInterfaceMessageExtractor)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioInterfacesInterfaceMessageExtractor")
