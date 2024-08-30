// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai/inworld/engine/v1/state_serialization.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/api/client.pb.h"
#include "google/api/field_behavior.pb.h"
#include "google/api/resource.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto;
namespace ai {
namespace inworld {
namespace engine {
namespace v1 {
class GetSessionStateRequest;
class GetSessionStateRequestDefaultTypeInternal;
extern GetSessionStateRequestDefaultTypeInternal _GetSessionStateRequest_default_instance_;
class SessionState;
class SessionStateDefaultTypeInternal;
extern SessionStateDefaultTypeInternal _SessionState_default_instance_;
}  // namespace v1
}  // namespace engine
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::engine::v1::GetSessionStateRequest* Arena::CreateMaybeMessage<::ai::inworld::engine::v1::GetSessionStateRequest>(Arena*);
template<> ::ai::inworld::engine::v1::SessionState* Arena::CreateMaybeMessage<::ai::inworld::engine::v1::SessionState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace engine {
namespace v1 {

// ===================================================================

class GetSessionStateRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.engine.v1.GetSessionStateRequest) */ {
 public:
  inline GetSessionStateRequest() : GetSessionStateRequest(nullptr) {}
  virtual ~GetSessionStateRequest();

  GetSessionStateRequest(const GetSessionStateRequest& from);
  GetSessionStateRequest(GetSessionStateRequest&& from) noexcept
    : GetSessionStateRequest() {
    *this = ::std::move(from);
  }

  inline GetSessionStateRequest& operator=(const GetSessionStateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetSessionStateRequest& operator=(GetSessionStateRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetSessionStateRequest& default_instance();

  static inline const GetSessionStateRequest* internal_default_instance() {
    return reinterpret_cast<const GetSessionStateRequest*>(
               &_GetSessionStateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetSessionStateRequest& a, GetSessionStateRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetSessionStateRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetSessionStateRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetSessionStateRequest* New() const final {
    return CreateMaybeMessage<GetSessionStateRequest>(nullptr);
  }

  GetSessionStateRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetSessionStateRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetSessionStateRequest& from);
  void MergeFrom(const GetSessionStateRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetSessionStateRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.engine.v1.GetSessionStateRequest";
  }
  protected:
  explicit GetSessionStateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto);
    return ::descriptor_table_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1 [(.google.api.field_behavior) = REQUIRED, (.google.api.resource_reference) = {
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:ai.inworld.engine.v1.GetSessionStateRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto;
};
// -------------------------------------------------------------------

class SessionState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.engine.v1.SessionState) */ {
 public:
  inline SessionState() : SessionState(nullptr) {}
  virtual ~SessionState();

  SessionState(const SessionState& from);
  SessionState(SessionState&& from) noexcept
    : SessionState() {
    *this = ::std::move(from);
  }

  inline SessionState& operator=(const SessionState& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionState& operator=(SessionState&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SessionState& default_instance();

  static inline const SessionState* internal_default_instance() {
    return reinterpret_cast<const SessionState*>(
               &_SessionState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SessionState& a, SessionState& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SessionState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SessionState* New() const final {
    return CreateMaybeMessage<SessionState>(nullptr);
  }

  SessionState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SessionState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SessionState& from);
  void MergeFrom(const SessionState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SessionState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.engine.v1.SessionState";
  }
  protected:
  explicit SessionState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto);
    return ::descriptor_table_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStateFieldNumber = 1,
    kCreationTimeFieldNumber = 2,
  };
  // bytes state = 1;
  void clear_state();
  const std::string& state() const;
  void set_state(const std::string& value);
  void set_state(std::string&& value);
  void set_state(const char* value);
  void set_state(const void* value, size_t size);
  std::string* mutable_state();
  std::string* release_state();
  void set_allocated_state(std::string* state);
  private:
  const std::string& _internal_state() const;
  void _internal_set_state(const std::string& value);
  std::string* _internal_mutable_state();
  public:

  // .google.protobuf.Timestamp creation_time = 2;
  bool has_creation_time() const;
  private:
  bool _internal_has_creation_time() const;
  public:
  void clear_creation_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& creation_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_creation_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_creation_time();
  void set_allocated_creation_time(PROTOBUF_NAMESPACE_ID::Timestamp* creation_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_creation_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_creation_time();
  public:
  void unsafe_arena_set_allocated_creation_time(
      PROTOBUF_NAMESPACE_ID::Timestamp* creation_time);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_creation_time();

  // @@protoc_insertion_point(class_scope:ai.inworld.engine.v1.SessionState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr state_;
  PROTOBUF_NAMESPACE_ID::Timestamp* creation_time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetSessionStateRequest

// string name = 1 [(.google.api.field_behavior) = REQUIRED, (.google.api.resource_reference) = {
inline void GetSessionStateRequest::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& GetSessionStateRequest::name() const {
  // @@protoc_insertion_point(field_get:ai.inworld.engine.v1.GetSessionStateRequest.name)
  return _internal_name();
}
inline void GetSessionStateRequest::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:ai.inworld.engine.v1.GetSessionStateRequest.name)
}
inline std::string* GetSessionStateRequest::mutable_name() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.engine.v1.GetSessionStateRequest.name)
  return _internal_mutable_name();
}
inline const std::string& GetSessionStateRequest::_internal_name() const {
  return name_.Get();
}
inline void GetSessionStateRequest::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetSessionStateRequest::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.engine.v1.GetSessionStateRequest.name)
}
inline void GetSessionStateRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.engine.v1.GetSessionStateRequest.name)
}
inline void GetSessionStateRequest::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.engine.v1.GetSessionStateRequest.name)
}
inline std::string* GetSessionStateRequest::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetSessionStateRequest::release_name() {
  // @@protoc_insertion_point(field_release:ai.inworld.engine.v1.GetSessionStateRequest.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetSessionStateRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.engine.v1.GetSessionStateRequest.name)
}

// -------------------------------------------------------------------

// SessionState

// bytes state = 1;
inline void SessionState::clear_state() {
  state_.ClearToEmpty();
}
inline const std::string& SessionState::state() const {
  // @@protoc_insertion_point(field_get:ai.inworld.engine.v1.SessionState.state)
  return _internal_state();
}
inline void SessionState::set_state(const std::string& value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:ai.inworld.engine.v1.SessionState.state)
}
inline std::string* SessionState::mutable_state() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.engine.v1.SessionState.state)
  return _internal_mutable_state();
}
inline const std::string& SessionState::_internal_state() const {
  return state_.Get();
}
inline void SessionState::_internal_set_state(const std::string& value) {
  
  state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SessionState::set_state(std::string&& value) {
  
  state_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.engine.v1.SessionState.state)
}
inline void SessionState::set_state(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.engine.v1.SessionState.state)
}
inline void SessionState::set_state(const void* value,
    size_t size) {
  
  state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.engine.v1.SessionState.state)
}
inline std::string* SessionState::_internal_mutable_state() {
  
  return state_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SessionState::release_state() {
  // @@protoc_insertion_point(field_release:ai.inworld.engine.v1.SessionState.state)
  return state_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SessionState::set_allocated_state(std::string* state) {
  if (state != nullptr) {
    
  } else {
    
  }
  state_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), state,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.engine.v1.SessionState.state)
}

// .google.protobuf.Timestamp creation_time = 2;
inline bool SessionState::_internal_has_creation_time() const {
  return this != internal_default_instance() && creation_time_ != nullptr;
}
inline bool SessionState::has_creation_time() const {
  return _internal_has_creation_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& SessionState::_internal_creation_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = creation_time_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& SessionState::creation_time() const {
  // @@protoc_insertion_point(field_get:ai.inworld.engine.v1.SessionState.creation_time)
  return _internal_creation_time();
}
inline void SessionState::unsafe_arena_set_allocated_creation_time(
    PROTOBUF_NAMESPACE_ID::Timestamp* creation_time) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(creation_time_);
  }
  creation_time_ = creation_time;
  if (creation_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ai.inworld.engine.v1.SessionState.creation_time)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* SessionState::release_creation_time() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = creation_time_;
  creation_time_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* SessionState::unsafe_arena_release_creation_time() {
  // @@protoc_insertion_point(field_release:ai.inworld.engine.v1.SessionState.creation_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = creation_time_;
  creation_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* SessionState::_internal_mutable_creation_time() {
  
  if (creation_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    creation_time_ = p;
  }
  return creation_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* SessionState::mutable_creation_time() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.engine.v1.SessionState.creation_time)
  return _internal_mutable_creation_time();
}
inline void SessionState::set_allocated_creation_time(PROTOBUF_NAMESPACE_ID::Timestamp* creation_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(creation_time_);
  }
  if (creation_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(creation_time)->GetArena();
    if (message_arena != submessage_arena) {
      creation_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, creation_time, submessage_arena);
    }
    
  } else {
    
  }
  creation_time_ = creation_time;
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.engine.v1.SessionState.creation_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace engine
}  // namespace inworld
}  // namespace ai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fengine_2fv1_2fstate_5fserialization_2eproto
