#include "ProtoDisableWarning.h"
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/rpc/status.proto

#include "google/rpc/status.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
namespace google {
namespace rpc {
class StatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Status> _instance;
} _Status_default_instance_;
}  // namespace rpc
}  // namespace google
static void InitDefaultsscc_info_Status_google_2frpc_2fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::rpc::_Status_default_instance_;
    new (ptr) ::google::rpc::Status();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Status_google_2frpc_2fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Status_google_2frpc_2fstatus_2eproto}, {
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2frpc_2fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2frpc_2fstatus_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2frpc_2fstatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2frpc_2fstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, code_),
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, message_),
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, details_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::rpc::Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::rpc::_Status_default_instance_),
};

const char descriptor_table_protodef_google_2frpc_2fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027google/rpc/status.proto\022\ngoogle.rpc\032\031g"
  "oogle/protobuf/any.proto\"N\n\006Status\022\014\n\004co"
  "de\030\001 \001(\005\022\017\n\007message\030\002 \001(\t\022%\n\007details\030\003 \003"
  "(\0132\024.google.protobuf.AnyBa\n\016com.google.r"
  "pcB\013StatusProtoP\001Z7google.golang.org/gen"
  "proto/googleapis/rpc/status;status\370\001\001\242\002\003"
  "RPCb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2frpc_2fstatus_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2frpc_2fstatus_2eproto_sccs[1] = {
  &scc_info_Status_google_2frpc_2fstatus_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2frpc_2fstatus_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2frpc_2fstatus_2eproto = {
  false, false, descriptor_table_protodef_google_2frpc_2fstatus_2eproto, "google/rpc/status.proto", 251,
  &descriptor_table_google_2frpc_2fstatus_2eproto_once, descriptor_table_google_2frpc_2fstatus_2eproto_sccs, descriptor_table_google_2frpc_2fstatus_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_google_2frpc_2fstatus_2eproto::offsets,
  file_level_metadata_google_2frpc_2fstatus_2eproto, 1, file_level_enum_descriptors_google_2frpc_2fstatus_2eproto, file_level_service_descriptors_google_2frpc_2fstatus_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2frpc_2fstatus_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2frpc_2fstatus_2eproto)), true);
namespace google {
namespace rpc {

// ===================================================================

class Status::_Internal {
 public:
};

void Status::clear_details() {
  details_.Clear();
}
Status::Status(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  details_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.rpc.Status)
}
Status::Status(const Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      details_(from.details_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArena());
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:google.rpc.Status)
}

void Status::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Status_google_2frpc_2fstatus_2eproto.base);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:google.rpc.Status)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Status::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Status::ArenaDtor(void* object) {
  Status* _this = reinterpret_cast< Status* >(object);
  (void)_this;
}
void Status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Status& Status::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Status_google_2frpc_2fstatus_2eproto.base);
  return *internal_default_instance();
}


void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:google.rpc.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  details_.Clear();
  message_.ClearToEmpty();
  code_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.rpc.Status.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.protobuf.Any details = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_details(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.rpc.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 code = 1;
  if (this->code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_code(), target);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.rpc.Status.message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_message(), target);
  }

  // repeated .google.protobuf.Any details = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_details_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_details(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.rpc.Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.rpc.Status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any details = 3;
  total_size += 1UL * this->_internal_details_size();
  for (const auto& msg : this->details_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // int32 code = 1;
  if (this->code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Status::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.rpc.Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Status* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Status>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.rpc.Status)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.rpc.Status)
    MergeFrom(*source);
  }
}

void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.rpc.Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  details_.MergeFrom(from.details_);
  if (from.message().size() > 0) {
    _internal_set_message(from._internal_message());
  }
  if (from.code() != 0) {
    _internal_set_code(from._internal_code());
  }
}

void Status::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.rpc.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.rpc.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::InternalSwap(Status* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  details_.InternalSwap(&other->details_);
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Status::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::rpc::Status* Arena::CreateMaybeMessage< ::google::rpc::Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::rpc::Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
