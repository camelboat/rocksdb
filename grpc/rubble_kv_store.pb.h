// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rubble_kv_store.proto

#ifndef PROTOBUF_rubble_5fkv_5fstore_2eproto__INCLUDED
#define PROTOBUF_rubble_5fkv_5fstore_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace rubble {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_rubble_5fkv_5fstore_2eproto();
void protobuf_AssignDesc_rubble_5fkv_5fstore_2eproto();
void protobuf_ShutdownFile_rubble_5fkv_5fstore_2eproto();

class Op;
class OpReply;
class SyncReply;
class SyncRequest;

enum Op_OpType {
  Op_OpType_GET = 0,
  Op_OpType_PUT = 1,
  Op_OpType_DELETE = 2,
  Op_OpType_UPDATE = 3,
  Op_OpType_Op_OpType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Op_OpType_Op_OpType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Op_OpType_IsValid(int value);
const Op_OpType Op_OpType_OpType_MIN = Op_OpType_GET;
const Op_OpType Op_OpType_OpType_MAX = Op_OpType_UPDATE;
const int Op_OpType_OpType_ARRAYSIZE = Op_OpType_OpType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Op_OpType_descriptor();
inline const ::std::string& Op_OpType_Name(Op_OpType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Op_OpType_descriptor(), value);
}
inline bool Op_OpType_Parse(
    const ::std::string& name, Op_OpType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Op_OpType>(
    Op_OpType_descriptor(), name, value);
}
enum OpReply_OpType {
  OpReply_OpType_GET = 0,
  OpReply_OpType_PUT = 1,
  OpReply_OpType_DELETE = 2,
  OpReply_OpType_UPDATE = 3,
  OpReply_OpType_OpReply_OpType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  OpReply_OpType_OpReply_OpType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool OpReply_OpType_IsValid(int value);
const OpReply_OpType OpReply_OpType_OpType_MIN = OpReply_OpType_GET;
const OpReply_OpType OpReply_OpType_OpType_MAX = OpReply_OpType_UPDATE;
const int OpReply_OpType_OpType_ARRAYSIZE = OpReply_OpType_OpType_MAX + 1;

const ::google::protobuf::EnumDescriptor* OpReply_OpType_descriptor();
inline const ::std::string& OpReply_OpType_Name(OpReply_OpType value) {
  return ::google::protobuf::internal::NameOfEnum(
    OpReply_OpType_descriptor(), value);
}
inline bool OpReply_OpType_Parse(
    const ::std::string& name, OpReply_OpType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OpReply_OpType>(
    OpReply_OpType_descriptor(), name, value);
}
// ===================================================================

class Op : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rubble.Op) */ {
 public:
  Op();
  virtual ~Op();

  Op(const Op& from);

  inline Op& operator=(const Op& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Op& default_instance();

  void Swap(Op* other);

  // implements Message ----------------------------------------------

  inline Op* New() const { return New(NULL); }

  Op* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Op& from);
  void MergeFrom(const Op& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Op* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Op_OpType OpType;
  static const OpType GET =
    Op_OpType_GET;
  static const OpType PUT =
    Op_OpType_PUT;
  static const OpType DELETE =
    Op_OpType_DELETE;
  static const OpType UPDATE =
    Op_OpType_UPDATE;
  static inline bool OpType_IsValid(int value) {
    return Op_OpType_IsValid(value);
  }
  static const OpType OpType_MIN =
    Op_OpType_OpType_MIN;
  static const OpType OpType_MAX =
    Op_OpType_OpType_MAX;
  static const int OpType_ARRAYSIZE =
    Op_OpType_OpType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  OpType_descriptor() {
    return Op_OpType_descriptor();
  }
  static inline const ::std::string& OpType_Name(OpType value) {
    return Op_OpType_Name(value);
  }
  static inline bool OpType_Parse(const ::std::string& name,
      OpType* value) {
    return Op_OpType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // optional uint64 Id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // optional .rubble.Op.OpType type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::rubble::Op_OpType type() const;
  void set_type(::rubble::Op_OpType value);

  // @@protoc_insertion_point(class_scope:rubble.Op)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::uint64 id_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_AssignDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_ShutdownFile_rubble_5fkv_5fstore_2eproto();

  void InitAsDefaultInstance();
  static Op* default_instance_;
};
// -------------------------------------------------------------------

class OpReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rubble.OpReply) */ {
 public:
  OpReply();
  virtual ~OpReply();

  OpReply(const OpReply& from);

  inline OpReply& operator=(const OpReply& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OpReply& default_instance();

  void Swap(OpReply* other);

  // implements Message ----------------------------------------------

  inline OpReply* New() const { return New(NULL); }

  OpReply* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OpReply& from);
  void MergeFrom(const OpReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OpReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef OpReply_OpType OpType;
  static const OpType GET =
    OpReply_OpType_GET;
  static const OpType PUT =
    OpReply_OpType_PUT;
  static const OpType DELETE =
    OpReply_OpType_DELETE;
  static const OpType UPDATE =
    OpReply_OpType_UPDATE;
  static inline bool OpType_IsValid(int value) {
    return OpReply_OpType_IsValid(value);
  }
  static const OpType OpType_MIN =
    OpReply_OpType_OpType_MIN;
  static const OpType OpType_MAX =
    OpReply_OpType_OpType_MAX;
  static const int OpType_ARRAYSIZE =
    OpReply_OpType_OpType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  OpType_descriptor() {
    return OpReply_OpType_descriptor();
  }
  static inline const ::std::string& OpType_Name(OpType value) {
    return OpReply_OpType_Name(value);
  }
  static inline bool OpType_Parse(const ::std::string& name,
      OpType* value) {
    return OpReply_OpType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional bool ok = 1;
  void clear_ok();
  static const int kOkFieldNumber = 1;
  bool ok() const;
  void set_ok(bool value);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // optional string status = 3;
  void clear_status();
  static const int kStatusFieldNumber = 3;
  const ::std::string& status() const;
  void set_status(const ::std::string& value);
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  ::std::string* mutable_status();
  ::std::string* release_status();
  void set_allocated_status(::std::string* status);

  // optional int64 Id = 4;
  void clear_id();
  static const int kIdFieldNumber = 4;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // optional .rubble.OpReply.OpType type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::rubble::OpReply_OpType type() const;
  void set_type(::rubble::OpReply_OpType value);

  // @@protoc_insertion_point(class_scope:rubble.OpReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  bool ok_;
  int type_;
  ::google::protobuf::int64 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_AssignDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_ShutdownFile_rubble_5fkv_5fstore_2eproto();

  void InitAsDefaultInstance();
  static OpReply* default_instance_;
};
// -------------------------------------------------------------------

class SyncRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rubble.SyncRequest) */ {
 public:
  SyncRequest();
  virtual ~SyncRequest();

  SyncRequest(const SyncRequest& from);

  inline SyncRequest& operator=(const SyncRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SyncRequest& default_instance();

  void Swap(SyncRequest* other);

  // implements Message ----------------------------------------------

  inline SyncRequest* New() const { return New(NULL); }

  SyncRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SyncRequest& from);
  void MergeFrom(const SyncRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SyncRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string args = 1;
  void clear_args();
  static const int kArgsFieldNumber = 1;
  const ::std::string& args() const;
  void set_args(const ::std::string& value);
  void set_args(const char* value);
  void set_args(const char* value, size_t size);
  ::std::string* mutable_args();
  ::std::string* release_args();
  void set_allocated_args(::std::string* args);

  // @@protoc_insertion_point(class_scope:rubble.SyncRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr args_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_AssignDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_ShutdownFile_rubble_5fkv_5fstore_2eproto();

  void InitAsDefaultInstance();
  static SyncRequest* default_instance_;
};
// -------------------------------------------------------------------

class SyncReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rubble.SyncReply) */ {
 public:
  SyncReply();
  virtual ~SyncReply();

  SyncReply(const SyncReply& from);

  inline SyncReply& operator=(const SyncReply& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SyncReply& default_instance();

  void Swap(SyncReply* other);

  // implements Message ----------------------------------------------

  inline SyncReply* New() const { return New(NULL); }

  SyncReply* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SyncReply& from);
  void MergeFrom(const SyncReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SyncReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:rubble.SyncReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_AssignDesc_rubble_5fkv_5fstore_2eproto();
  friend void protobuf_ShutdownFile_rubble_5fkv_5fstore_2eproto();

  void InitAsDefaultInstance();
  static SyncReply* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Op

// optional string key = 1;
inline void Op::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Op::key() const {
  // @@protoc_insertion_point(field_get:rubble.Op.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Op::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.Op.key)
}
inline void Op::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.Op.key)
}
inline void Op::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.Op.key)
}
inline ::std::string* Op::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:rubble.Op.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Op::release_key() {
  // @@protoc_insertion_point(field_release:rubble.Op.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Op::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:rubble.Op.key)
}

// optional string value = 2;
inline void Op::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Op::value() const {
  // @@protoc_insertion_point(field_get:rubble.Op.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Op::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.Op.value)
}
inline void Op::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.Op.value)
}
inline void Op::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.Op.value)
}
inline ::std::string* Op::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:rubble.Op.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Op::release_value() {
  // @@protoc_insertion_point(field_release:rubble.Op.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Op::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:rubble.Op.value)
}

// optional uint64 Id = 3;
inline void Op::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Op::id() const {
  // @@protoc_insertion_point(field_get:rubble.Op.Id)
  return id_;
}
inline void Op::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:rubble.Op.Id)
}

// optional .rubble.Op.OpType type = 4;
inline void Op::clear_type() {
  type_ = 0;
}
inline ::rubble::Op_OpType Op::type() const {
  // @@protoc_insertion_point(field_get:rubble.Op.type)
  return static_cast< ::rubble::Op_OpType >(type_);
}
inline void Op::set_type(::rubble::Op_OpType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:rubble.Op.type)
}

// -------------------------------------------------------------------

// OpReply

// optional bool ok = 1;
inline void OpReply::clear_ok() {
  ok_ = false;
}
inline bool OpReply::ok() const {
  // @@protoc_insertion_point(field_get:rubble.OpReply.ok)
  return ok_;
}
inline void OpReply::set_ok(bool value) {
  
  ok_ = value;
  // @@protoc_insertion_point(field_set:rubble.OpReply.ok)
}

// optional string value = 2;
inline void OpReply::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OpReply::value() const {
  // @@protoc_insertion_point(field_get:rubble.OpReply.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpReply::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.OpReply.value)
}
inline void OpReply::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.OpReply.value)
}
inline void OpReply::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.OpReply.value)
}
inline ::std::string* OpReply::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:rubble.OpReply.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OpReply::release_value() {
  // @@protoc_insertion_point(field_release:rubble.OpReply.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpReply::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:rubble.OpReply.value)
}

// optional string status = 3;
inline void OpReply::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OpReply::status() const {
  // @@protoc_insertion_point(field_get:rubble.OpReply.status)
  return status_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpReply::set_status(const ::std::string& value) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.OpReply.status)
}
inline void OpReply::set_status(const char* value) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.OpReply.status)
}
inline void OpReply::set_status(const char* value, size_t size) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.OpReply.status)
}
inline ::std::string* OpReply::mutable_status() {
  
  // @@protoc_insertion_point(field_mutable:rubble.OpReply.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OpReply::release_status() {
  // @@protoc_insertion_point(field_release:rubble.OpReply.status)
  
  return status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpReply::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    
  } else {
    
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:rubble.OpReply.status)
}

// optional int64 Id = 4;
inline void OpReply::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 OpReply::id() const {
  // @@protoc_insertion_point(field_get:rubble.OpReply.Id)
  return id_;
}
inline void OpReply::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:rubble.OpReply.Id)
}

// optional .rubble.OpReply.OpType type = 5;
inline void OpReply::clear_type() {
  type_ = 0;
}
inline ::rubble::OpReply_OpType OpReply::type() const {
  // @@protoc_insertion_point(field_get:rubble.OpReply.type)
  return static_cast< ::rubble::OpReply_OpType >(type_);
}
inline void OpReply::set_type(::rubble::OpReply_OpType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:rubble.OpReply.type)
}

// -------------------------------------------------------------------

// SyncRequest

// optional string args = 1;
inline void SyncRequest::clear_args() {
  args_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SyncRequest::args() const {
  // @@protoc_insertion_point(field_get:rubble.SyncRequest.args)
  return args_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncRequest::set_args(const ::std::string& value) {
  
  args_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.SyncRequest.args)
}
inline void SyncRequest::set_args(const char* value) {
  
  args_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.SyncRequest.args)
}
inline void SyncRequest::set_args(const char* value, size_t size) {
  
  args_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.SyncRequest.args)
}
inline ::std::string* SyncRequest::mutable_args() {
  
  // @@protoc_insertion_point(field_mutable:rubble.SyncRequest.args)
  return args_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SyncRequest::release_args() {
  // @@protoc_insertion_point(field_release:rubble.SyncRequest.args)
  
  return args_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncRequest::set_allocated_args(::std::string* args) {
  if (args != NULL) {
    
  } else {
    
  }
  args_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), args);
  // @@protoc_insertion_point(field_set_allocated:rubble.SyncRequest.args)
}

// -------------------------------------------------------------------

// SyncReply

// optional string message = 1;
inline void SyncReply::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SyncReply::message() const {
  // @@protoc_insertion_point(field_get:rubble.SyncReply.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncReply::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rubble.SyncReply.message)
}
inline void SyncReply::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rubble.SyncReply.message)
}
inline void SyncReply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rubble.SyncReply.message)
}
inline ::std::string* SyncReply::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:rubble.SyncReply.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SyncReply::release_message() {
  // @@protoc_insertion_point(field_release:rubble.SyncReply.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncReply::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:rubble.SyncReply.message)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace rubble

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::rubble::Op_OpType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::rubble::Op_OpType>() {
  return ::rubble::Op_OpType_descriptor();
}
template <> struct is_proto_enum< ::rubble::OpReply_OpType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::rubble::OpReply_OpType>() {
  return ::rubble::OpReply_OpType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rubble_5fkv_5fstore_2eproto__INCLUDED
