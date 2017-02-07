//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../gig_ios/src/org/json/JSONTokener.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/BufferedReader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#include "java/io/Reader.h"
#include "java/io/StringReader.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuffer.h"
#include "org/json/JSONArray.h"
#include "org/json/JSONException.h"
#include "org/json/JSONObject.h"
#include "org/json/JSONTokener.h"

@interface OrgJsonJSONTokener () {
 @public
  jint character_;
  jboolean eof_;
  jint index_;
  jint line_;
  jchar previous_;
  JavaIoReader *reader_;
  jboolean usePrevious_;
}

@end

J2OBJC_FIELD_SETTER(OrgJsonJSONTokener, reader_, JavaIoReader *)

@implementation OrgJsonJSONTokener

- (instancetype)initWithJavaIoReader:(JavaIoReader *)reader {
  OrgJsonJSONTokener_initWithJavaIoReader_(self, reader);
  return self;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream {
  OrgJsonJSONTokener_initWithJavaIoInputStream_(self, inputStream);
  return self;
}

- (instancetype)initWithNSString:(NSString *)s {
  OrgJsonJSONTokener_initWithNSString_(self, s);
  return self;
}

- (void)back {
  if (usePrevious_ || index_ <= 0) {
    @throw create_OrgJsonJSONException_initWithNSString_(@"Stepping back two steps is not supported");
  }
  self->index_ -= 1;
  self->character_ -= 1;
  self->usePrevious_ = true;
  self->eof_ = false;
}

+ (jint)dehexcharWithChar:(jchar)c {
  return OrgJsonJSONTokener_dehexcharWithChar_(c);
}

- (jboolean)end {
  return eof_ && !usePrevious_;
}

- (jboolean)more {
  [self next];
  if ([self end]) {
    return false;
  }
  [self back];
  return true;
}

- (jchar)next {
  jint c;
  if (self->usePrevious_) {
    self->usePrevious_ = false;
    c = self->previous_;
  }
  else {
    @try {
      c = [((JavaIoReader *) nil_chk(self->reader_)) read];
    }
    @catch (JavaIoIOException *exception) {
      @throw create_OrgJsonJSONException_initWithNSException_(exception);
    }
    if (c <= 0) {
      self->eof_ = true;
      c = 0;
    }
  }
  self->index_ += 1;
  if (self->previous_ == 0x000d) {
    self->line_ += 1;
    self->character_ = c == 0x000a ? 0 : 1;
  }
  else if (c == 0x000a) {
    self->line_ += 1;
    self->character_ = 0;
  }
  else {
    self->character_ += 1;
  }
  self->previous_ = (jchar) c;
  return self->previous_;
}

- (jchar)nextWithChar:(jchar)c {
  jchar n = [self next];
  if (n != c) {
    @throw [self syntaxErrorWithNSString:JreStrcat("$C$CC", @"Expected '", c, @"' and instead saw '", n, '\'')];
  }
  return n;
}

- (NSString *)nextWithInt:(jint)n {
  if (n == 0) {
    return @"";
  }
  IOSCharArray *chars = [IOSCharArray arrayWithLength:n];
  jint pos = 0;
  while (pos < n) {
    *IOSCharArray_GetRef(chars, pos) = [self next];
    if ([self end]) {
      @throw [self syntaxErrorWithNSString:@"Substring bounds error"];
    }
    pos += 1;
  }
  return [NSString java_stringWithCharacters:chars];
}

- (jchar)nextClean {
  for (; ; ) {
    jchar c = [self next];
    if (c == 0 || c > ' ') {
      return c;
    }
  }
}

- (NSString *)nextStringWithChar:(jchar)quote {
  jchar c;
  JavaLangStringBuffer *sb = create_JavaLangStringBuffer_init();
  for (; ; ) {
    c = [self next];
    switch (c) {
      case 0:
      case 0x000a:
      case 0x000d:
      @throw [self syntaxErrorWithNSString:@"Unterminated string"];
      case '\\':
      c = [self next];
      switch (c) {
        case 'b':
        [sb appendWithChar:0x0008];
        break;
        case 't':
        [sb appendWithChar:0x0009];
        break;
        case 'n':
        [sb appendWithChar:0x000a];
        break;
        case 'f':
        [sb appendWithChar:0x000c];
        break;
        case 'r':
        [sb appendWithChar:0x000d];
        break;
        case 'u':
        [sb appendWithChar:(jchar) JavaLangInteger_parseIntWithNSString_withInt_([self nextWithInt:4], 16)];
        break;
        case '"':
        case '\'':
        case '\\':
        case '/':
        [sb appendWithChar:c];
        break;
        default:
        @throw [self syntaxErrorWithNSString:@"Illegal escape."];
      }
      break;
      default:
      if (c == quote) {
        return [sb description];
      }
      [sb appendWithChar:c];
    }
  }
}

- (NSString *)nextToWithChar:(jchar)delimiter {
  JavaLangStringBuffer *sb = create_JavaLangStringBuffer_init();
  for (; ; ) {
    jchar c = [self next];
    if (c == delimiter || c == 0 || c == 0x000a || c == 0x000d) {
      if (c != 0) {
        [self back];
      }
      return [((NSString *) nil_chk([sb description])) java_trim];
    }
    [sb appendWithChar:c];
  }
}

- (NSString *)nextToWithNSString:(NSString *)delimiters {
  jchar c;
  JavaLangStringBuffer *sb = create_JavaLangStringBuffer_init();
  for (; ; ) {
    c = [self next];
    if ([((NSString *) nil_chk(delimiters)) java_indexOf:c] >= 0 || c == 0 || c == 0x000a || c == 0x000d) {
      if (c != 0) {
        [self back];
      }
      return [((NSString *) nil_chk([sb description])) java_trim];
    }
    [sb appendWithChar:c];
  }
}

- (id)nextValue {
  jchar c = [self nextClean];
  NSString *string;
  switch (c) {
    case '"':
    case '\'':
    return [self nextStringWithChar:c];
    case '{':
    [self back];
    return create_OrgJsonJSONObject_initWithOrgJsonJSONTokener_(self);
    case '[':
    [self back];
    return create_OrgJsonJSONArray_initWithOrgJsonJSONTokener_(self);
  }
  JavaLangStringBuffer *sb = create_JavaLangStringBuffer_init();
  while (c >= ' ' && [@",:]}/\\\"[{;=#" java_indexOf:c] < 0) {
    [sb appendWithChar:c];
    c = [self next];
  }
  [self back];
  string = [((NSString *) nil_chk([sb description])) java_trim];
  if ([((NSString *) nil_chk(string)) isEqual:@""]) {
    @throw [self syntaxErrorWithNSString:@"Missing value"];
  }
  return OrgJsonJSONObject_stringToValueWithNSString_(string);
}

- (jchar)skipToWithChar:(jchar)to {
  jchar c;
  @try {
    jint startIndex = self->index_;
    jint startCharacter = self->character_;
    jint startLine = self->line_;
    [((JavaIoReader *) nil_chk(reader_)) markWithInt:JavaLangInteger_MAX_VALUE];
    do {
      c = [self next];
      if (c == 0) {
        [((JavaIoReader *) nil_chk(reader_)) reset];
        self->index_ = startIndex;
        self->character_ = startCharacter;
        self->line_ = startLine;
        return c;
      }
    }
    while (c != to);
  }
  @catch (JavaIoIOException *exc) {
    @throw create_OrgJsonJSONException_initWithNSException_(exc);
  }
  [self back];
  return c;
}

- (OrgJsonJSONException *)syntaxErrorWithNSString:(NSString *)message {
  return create_OrgJsonJSONException_initWithNSString_(JreStrcat("$$", message, [self description]));
}

- (NSString *)description {
  return JreStrcat("$I$I$IC", @" at ", index_, @" [character ", self->character_, @" line ", self->line_, ']');
}

- (void)dealloc {
  RELEASE_(reader_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 1, 2, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 3, -1, -1, -1, -1 },
    { NULL, "V", 0x1, -1, -1, 2, -1, -1, -1 },
    { NULL, "I", 0x9, 4, 5, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, 2, -1, -1, -1 },
    { NULL, "C", 0x1, -1, -1, 2, -1, -1, -1 },
    { NULL, "C", 0x1, 6, 5, 2, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 6, 7, 2, -1, -1, -1 },
    { NULL, "C", 0x1, -1, -1, 2, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 8, 5, 2, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 9, 5, 2, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 9, 3, 2, -1, -1, -1 },
    { NULL, "LNSObject;", 0x1, -1, -1, 2, -1, -1, -1 },
    { NULL, "C", 0x1, 10, 5, 2, -1, -1, -1 },
    { NULL, "LOrgJsonJSONException;", 0x1, 11, 3, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 12, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithJavaIoReader:);
  methods[1].selector = @selector(initWithJavaIoInputStream:);
  methods[2].selector = @selector(initWithNSString:);
  methods[3].selector = @selector(back);
  methods[4].selector = @selector(dehexcharWithChar:);
  methods[5].selector = @selector(end);
  methods[6].selector = @selector(more);
  methods[7].selector = @selector(next);
  methods[8].selector = @selector(nextWithChar:);
  methods[9].selector = @selector(nextWithInt:);
  methods[10].selector = @selector(nextClean);
  methods[11].selector = @selector(nextStringWithChar:);
  methods[12].selector = @selector(nextToWithChar:);
  methods[13].selector = @selector(nextToWithNSString:);
  methods[14].selector = @selector(nextValue);
  methods[15].selector = @selector(skipToWithChar:);
  methods[16].selector = @selector(syntaxErrorWithNSString:);
  methods[17].selector = @selector(description);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "character_", "I", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "eof_", "Z", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "index_", "I", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "line_", "I", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "previous_", "C", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "reader_", "LJavaIoReader;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "usePrevious_", "Z", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LJavaIoReader;", "LJavaIoInputStream;", "LOrgJsonJSONException;", "LNSString;", "dehexchar", "C", "next", "I", "nextString", "nextTo", "skipTo", "syntaxError", "toString" };
  static const J2ObjcClassInfo _OrgJsonJSONTokener = { "JSONTokener", "org.json", ptrTable, methods, fields, 7, 0x1, 18, 7, -1, -1, -1, -1, -1 };
  return &_OrgJsonJSONTokener;
}

@end

void OrgJsonJSONTokener_initWithJavaIoReader_(OrgJsonJSONTokener *self, JavaIoReader *reader) {
  NSObject_init(self);
  JreStrongAssign(&self->reader_, [((JavaIoReader *) nil_chk(reader)) markSupported] ? reader : create_JavaIoBufferedReader_initWithJavaIoReader_(reader));
  self->eof_ = false;
  self->usePrevious_ = false;
  self->previous_ = 0;
  self->index_ = 0;
  self->character_ = 1;
  self->line_ = 1;
}

OrgJsonJSONTokener *new_OrgJsonJSONTokener_initWithJavaIoReader_(JavaIoReader *reader) {
  J2OBJC_NEW_IMPL(OrgJsonJSONTokener, initWithJavaIoReader_, reader)
}

OrgJsonJSONTokener *create_OrgJsonJSONTokener_initWithJavaIoReader_(JavaIoReader *reader) {
  J2OBJC_CREATE_IMPL(OrgJsonJSONTokener, initWithJavaIoReader_, reader)
}

void OrgJsonJSONTokener_initWithJavaIoInputStream_(OrgJsonJSONTokener *self, JavaIoInputStream *inputStream) {
  OrgJsonJSONTokener_initWithJavaIoReader_(self, create_JavaIoInputStreamReader_initWithJavaIoInputStream_(inputStream));
}

OrgJsonJSONTokener *new_OrgJsonJSONTokener_initWithJavaIoInputStream_(JavaIoInputStream *inputStream) {
  J2OBJC_NEW_IMPL(OrgJsonJSONTokener, initWithJavaIoInputStream_, inputStream)
}

OrgJsonJSONTokener *create_OrgJsonJSONTokener_initWithJavaIoInputStream_(JavaIoInputStream *inputStream) {
  J2OBJC_CREATE_IMPL(OrgJsonJSONTokener, initWithJavaIoInputStream_, inputStream)
}

void OrgJsonJSONTokener_initWithNSString_(OrgJsonJSONTokener *self, NSString *s) {
  OrgJsonJSONTokener_initWithJavaIoReader_(self, create_JavaIoStringReader_initWithNSString_(s));
}

OrgJsonJSONTokener *new_OrgJsonJSONTokener_initWithNSString_(NSString *s) {
  J2OBJC_NEW_IMPL(OrgJsonJSONTokener, initWithNSString_, s)
}

OrgJsonJSONTokener *create_OrgJsonJSONTokener_initWithNSString_(NSString *s) {
  J2OBJC_CREATE_IMPL(OrgJsonJSONTokener, initWithNSString_, s)
}

jint OrgJsonJSONTokener_dehexcharWithChar_(jchar c) {
  OrgJsonJSONTokener_initialize();
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  if (c >= 'A' && c <= 'F') {
    return c - ('A' - 10);
  }
  if (c >= 'a' && c <= 'f') {
    return c - ('a' - 10);
  }
  return -1;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJsonJSONTokener)
