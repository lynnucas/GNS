//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java
//

#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "edu/umass/cs/gigapaxos/PaxosConfig.h"
#include "edu/umass/cs/gigapaxos/paxosutil/IntegerMap.h"
#include "edu/umass/cs/utils/Util.h"
#include "java/io/PrintStream.h"
#include "java/lang/Integer.h"
#include "java/lang/Math.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/System.h"
#include "java/net/InetAddress.h"
#include "java/net/UnknownHostException.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Set.h"
#include "java/util/logging/Logger.h"

@interface EduUmassCsGigapaxosPaxosutilIntegerMap () {
 @public
  JavaUtilHashMap *nodeMap_;
}

- (JavaLangInteger *)getIDWithId:(id)node;

@end

J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosutilIntegerMap, nodeMap_, JavaUtilHashMap *)

inline jboolean EduUmassCsGigapaxosPaxosutilIntegerMap_get_allInteger();
inline jboolean EduUmassCsGigapaxosPaxosutilIntegerMap_set_allInteger(jboolean value);
inline jboolean *EduUmassCsGigapaxosPaxosutilIntegerMap_getRef_allInteger();
static jboolean EduUmassCsGigapaxosPaxosutilIntegerMap_allInteger = true;
J2OBJC_STATIC_FIELD_PRIMITIVE(EduUmassCsGigapaxosPaxosutilIntegerMap, allInteger, jboolean)

inline JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosutilIntegerMap_get_log();
inline JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosutilIntegerMap_set_log(JavaUtilLoggingLogger *value);
static JavaUtilLoggingLogger *EduUmassCsGigapaxosPaxosutilIntegerMap_log;
J2OBJC_STATIC_FIELD_OBJ(EduUmassCsGigapaxosPaxosutilIntegerMap, log, JavaUtilLoggingLogger *)

inline NSString *EduUmassCsGigapaxosPaxosutilIntegerMap_get_message();
inline NSString *EduUmassCsGigapaxosPaxosutilIntegerMap_set_message(NSString *value);
static NSString *EduUmassCsGigapaxosPaxosutilIntegerMap_message = @": Unable to translate integer ID  to NodeIDType; this is likely a bug";
J2OBJC_STATIC_FIELD_OBJ(EduUmassCsGigapaxosPaxosutilIntegerMap, message, NSString *)

__attribute__((unused)) static JavaLangInteger *EduUmassCsGigapaxosPaxosutilIntegerMap_getIDWithId_(EduUmassCsGigapaxosPaxosutilIntegerMap *self, id node);

J2OBJC_INITIALIZED_DEFN(EduUmassCsGigapaxosPaxosutilIntegerMap)

JavaLangInteger *EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE;
NSString *EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_STR_NODE;

@implementation EduUmassCsGigapaxosPaxosutilIntegerMap

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  EduUmassCsGigapaxosPaxosutilIntegerMap_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (jint)putWithId:(id)node {
  JreAssert(((node != nil)), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:27 condition failed: assert (node != null);"));
  jint id_ = [((JavaLangInteger *) nil_chk(EduUmassCsGigapaxosPaxosutilIntegerMap_getIDWithId_(self, node))) intValue];
  if (![((NSString *) nil_chk([nil_chk(node) description])) isEqual:[JavaLangInteger_valueOfWithInt_(id_) description]]) EduUmassCsGigapaxosPaxosutilIntegerMap_allInteger = false;
  jboolean collision = [((JavaUtilHashMap *) nil_chk(self->nodeMap_)) containsKeyWithId:JavaLangInteger_valueOfWithInt_(id_)];
  if (collision && ([node isKindOfClass:[NSString class]]) && [((NSString *) cast_chk(node, [NSString class])) isEqual:JreStrcat("I", id_)]) return id_;
  if (collision) while ([((JavaUtilHashMap *) nil_chk(self->nodeMap_)) containsKeyWithId:JavaLangInteger_valueOfWithInt_(id_)] && ![nil_chk([((JavaUtilHashMap *) nil_chk(self->nodeMap_)) getWithId:JavaLangInteger_valueOfWithInt_(id_)]) isEqual:node]) {
    [((JavaUtilLoggingLogger *) nil_chk(EduUmassCsGigapaxosPaxosutilIntegerMap_log)) warningWithNSString:JreStrcat("$@$@", @"Hash collision: ", node, @" != ", [((JavaUtilHashMap *) nil_chk(self->nodeMap_)) getWithId:JavaLangInteger_valueOfWithInt_(id_)])];
    id_++;
  }
  [((JavaUtilHashMap *) nil_chk(self->nodeMap_)) putWithId:JavaLangInteger_valueOfWithInt_(id_) withId:node];
  return id_;
}

+ (jboolean)allInt {
  return EduUmassCsGigapaxosPaxosutilIntegerMap_allInt();
}

- (id)getWithInt:(jint)id_ {
  @synchronized(self) {
    id node = [((JavaUtilHashMap *) nil_chk(self->nodeMap_)) getWithId:JavaLangInteger_valueOfWithInt_(id_)];
    if (node == nil) {
      [((JavaUtilLoggingLogger *) nil_chk(EduUmassCsGigapaxosPaxosutilIntegerMap_log)) severeWithNSString:JreStrcat("I$", id_, EduUmassCsGigapaxosPaxosutilIntegerMap_message)];
      @throw create_JavaLangRuntimeException_initWithNSString_(JreStrcat("I$", id_, EduUmassCsGigapaxosPaxosutilIntegerMap_message));
    }
    return node;
  }
}

- (id<JavaUtilSet>)putWithJavaUtilSet:(id<JavaUtilSet>)nodes {
  @synchronized(self) {
    id<JavaUtilSet> intNodes = create_JavaUtilHashSet_init();
    for (id __strong node in nil_chk(nodes)) {
      [intNodes addWithId:JavaLangInteger_valueOfWithInt_([self putWithId:node])];
    }
    return intNodes;
  }
}

- (id<JavaUtilSet>)getWithJavaUtilSet:(id<JavaUtilSet>)intNodes {
  @synchronized(self) {
    id<JavaUtilSet> nodes = create_JavaUtilHashSet_init();
    for (JavaLangInteger *boxed__ in nil_chk(intNodes)) {
      jint id_ = [((JavaLangInteger *) nil_chk(boxed__)) intValue];
      [nodes addWithId:[self getWithInt:id_]];
    }
    return nodes;
  }
}

- (id<JavaUtilSet>)getIntArrayAsNodeSetWithIntArray:(IOSIntArray *)members {
  @synchronized(self) {
    id<JavaUtilSet> nodes = create_JavaUtilHashSet_init();
    {
      IOSIntArray *a__ = members;
      jint const *b__ = ((IOSIntArray *) nil_chk(a__))->buffer_;
      jint const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        jint member = *b__++;
        id node = [((JavaUtilHashMap *) nil_chk(self->nodeMap_)) getWithId:JavaLangInteger_valueOfWithInt_(member)];
        [nodes addWithId:node];
      }
    }
    return nodes;
  }
}

- (JavaLangInteger *)getIDWithId:(id)node {
  return EduUmassCsGigapaxosPaxosutilIntegerMap_getIDWithId_(self, node);
}

+ (void)mainWithNSStringArray:(IOSObjectArray *)args {
  EduUmassCsGigapaxosPaxosutilIntegerMap_mainWithNSStringArray_(args);
}

- (void)dealloc {
  RELEASE_(nodeMap_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 0, 1, -1, 2, -1, -1 },
    { NULL, "Z", 0x19, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSObject;", 0x21, 3, 4, -1, 5, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x21, 0, 6, -1, 7, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x21, 3, 6, -1, 8, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x21, 9, 10, -1, 11, -1, -1 },
    { NULL, "LJavaLangInteger;", 0x2, 12, 1, -1, 13, -1, -1 },
    { NULL, "V", 0x9, 14, 15, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(putWithId:);
  methods[2].selector = @selector(allInt);
  methods[3].selector = @selector(getWithInt:);
  methods[4].selector = @selector(putWithJavaUtilSet:);
  methods[5].selector = @selector(getWithJavaUtilSet:);
  methods[6].selector = @selector(getIntArrayAsNodeSetWithIntArray:);
  methods[7].selector = @selector(getIDWithId:);
  methods[8].selector = @selector(mainWithNSStringArray:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "NULL_INT_NODE", "LJavaLangInteger;", .constantValue.asLong = 0, 0x19, -1, 16, -1, -1 },
    { "NULL_STR_NODE", "LNSString;", .constantValue.asLong = 0, 0x19, -1, 17, -1, -1 },
    { "nodeMap_", "LJavaUtilHashMap;", .constantValue.asLong = 0, 0x2, -1, -1, 18, -1 },
    { "allInteger", "Z", .constantValue.asLong = 0, 0xa, -1, 19, -1, -1 },
    { "log", "LJavaUtilLoggingLogger;", .constantValue.asLong = 0, 0xa, -1, 20, -1, -1 },
    { "message", "LNSString;", .constantValue.asLong = 0, 0xa, -1, 21, -1, -1 },
  };
  static const void *ptrTable[] = { "put", "LNSObject;", "(TNodeIDType;)I", "get", "I", "(I)TNodeIDType;", "LJavaUtilSet;", "(Ljava/util/Set<TNodeIDType;>;)Ljava/util/Set<Ljava/lang/Integer;>;", "(Ljava/util/Set<Ljava/lang/Integer;>;)Ljava/util/Set<TNodeIDType;>;", "getIntArrayAsNodeSet", "[I", "([I)Ljava/util/Set<TNodeIDType;>;", "getID", "(TNodeIDType;)Ljava/lang/Integer;", "main", "[LNSString;", &EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE, &EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_STR_NODE, "Ljava/util/HashMap<Ljava/lang/Integer;TNodeIDType;>;", &EduUmassCsGigapaxosPaxosutilIntegerMap_allInteger, &EduUmassCsGigapaxosPaxosutilIntegerMap_log, &EduUmassCsGigapaxosPaxosutilIntegerMap_message, "<NodeIDType:Ljava/lang/Object;>Ljava/lang/Object;" };
  static const J2ObjcClassInfo _EduUmassCsGigapaxosPaxosutilIntegerMap = { "IntegerMap", "edu.umass.cs.gigapaxos.paxosutil", ptrTable, methods, fields, 7, 0x1, 9, 6, -1, -1, -1, 22, -1 };
  return &_EduUmassCsGigapaxosPaxosutilIntegerMap;
}

+ (void)initialize {
  if (self == [EduUmassCsGigapaxosPaxosutilIntegerMap class]) {
    JreStrongAssign(&EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE, JavaLangInteger_valueOfWithInt_(-1));
    JreStrongAssign(&EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_STR_NODE, [EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE description]);
    JreStrongAssign(&EduUmassCsGigapaxosPaxosutilIntegerMap_log, EduUmassCsGigapaxosPaxosConfig_getLogger());
    J2OBJC_SET_INITIALIZED(EduUmassCsGigapaxosPaxosutilIntegerMap)
  }
}

@end

void EduUmassCsGigapaxosPaxosutilIntegerMap_init(EduUmassCsGigapaxosPaxosutilIntegerMap *self) {
  NSObject_init(self);
  JreStrongAssignAndConsume(&self->nodeMap_, new_JavaUtilHashMap_init());
}

EduUmassCsGigapaxosPaxosutilIntegerMap *new_EduUmassCsGigapaxosPaxosutilIntegerMap_init() {
  J2OBJC_NEW_IMPL(EduUmassCsGigapaxosPaxosutilIntegerMap, init)
}

EduUmassCsGigapaxosPaxosutilIntegerMap *create_EduUmassCsGigapaxosPaxosutilIntegerMap_init() {
  J2OBJC_CREATE_IMPL(EduUmassCsGigapaxosPaxosutilIntegerMap, init)
}

jboolean EduUmassCsGigapaxosPaxosutilIntegerMap_allInt() {
  EduUmassCsGigapaxosPaxosutilIntegerMap_initialize();
  return EduUmassCsGigapaxosPaxosutilIntegerMap_allInteger;
}

JavaLangInteger *EduUmassCsGigapaxosPaxosutilIntegerMap_getIDWithId_(EduUmassCsGigapaxosPaxosutilIntegerMap *self, id node) {
  if (node == nil) return nil;
  jint hash_ = -1;
  if ([node isKindOfClass:[NSString class]] && [((NSString *) cast_chk(node, [NSString class])) java_matches:@"[0-9]*"]) hash_ = [((JavaLangInteger *) nil_chk(JavaLangInteger_valueOfWithNSString_((NSString *) cast_chk(node, [NSString class])))) intValue];
  else hash_ = ((jint) [node hash]);
  return JavaLangInteger_valueOfWithInt_((hash_ != [((JavaLangInteger *) nil_chk(EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE)) intValue] ? JavaLangMath_absWithInt_(hash_) : [EduUmassCsGigapaxosPaxosutilIntegerMap_NULL_INT_NODE intValue]));
}

void EduUmassCsGigapaxosPaxosutilIntegerMap_mainWithNSStringArray_(IOSObjectArray *args) {
  EduUmassCsGigapaxosPaxosutilIntegerMap_initialize();
  EduUmassCsUtilsUtil_assertAssertionsEnabled();
  EduUmassCsGigapaxosPaxosutilIntegerMap *map = create_EduUmassCsGigapaxosPaxosutilIntegerMap_init();
  jint id1 = [map putWithId:@"hello1"];
  jint id2 = [map putWithId:@"hello2"];
  JreAssert(((id1 != id2)), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:126 condition failed: assert (id1 != id2);"));
  jint id3 = [map putWithId:@"hello1"];
  JreAssert((id1 == id3), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:128 condition failed: assert (id1 == id3);"));
  JavaNetInetAddress *iaddr1 = nil;
  JavaNetInetAddress *iaddr2 = nil;
  JavaNetInetAddress *iaddr3 = nil;
  JavaNetInetAddress *iaddr4 = nil;
  @try {
    iaddr1 = JavaNetInetAddress_getByNameWithNSString_(@"localhost");
    iaddr2 = JavaNetInetAddress_getByNameWithNSString_(@"plum.cs.umass.edu");
    iaddr3 = JavaNetInetAddress_getByNameWithNSString_(@"localhost");
    iaddr4 = JavaNetInetAddress_getByNameWithNSString_(@"plum.cs.umass.edu");
  }
  @catch (JavaNetUnknownHostException *e) {
    [((JavaNetUnknownHostException *) nil_chk(e)) printStackTrace];
  }
  EduUmassCsGigapaxosPaxosutilIntegerMap *iMap = create_EduUmassCsGigapaxosPaxosutilIntegerMap_init();
  jint id5 = [iMap putWithId:iaddr1];
  jint id6 = [iMap putWithId:iaddr2];
  jint id7 = [iMap putWithId:iaddr3];
  jint id8 = [iMap putWithId:iaddr4];
  JreAssert(((id5 != id6)), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:148 condition failed: assert (id5 != id6);"));
  JreAssert((id5 == id7), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:149 condition failed: assert (id5 == id7);"));
  JreAssert((id6 == id8), (@"edu/umass/cs/gigapaxos/paxosutil/IntegerMap.java:150 condition failed: assert (id6 == id8);"));
  [((JavaIoPrintStream *) nil_chk(JreLoadStatic(JavaLangSystem, out))) printlnWithNSString:@"SUCCESS!"];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EduUmassCsGigapaxosPaxosutilIntegerMap)
