// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/empty.proto

#include <google/protobuf/empty.pb.h>

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
PROTOBUF_NAMESPACE_OPEN
class EmptyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Empty> _instance;
} _Empty_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
static void InitDefaultsscc_info_Empty_google_2fprotobuf_2fempty_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &PROTOBUF_NAMESPACE_ID::_Empty_default_instance_;
    new (ptr) PROTOBUF_NAMESPACE_ID::Empty();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

PROTOBUF_EXPORT ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Empty_google_2fprotobuf_2fempty_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Empty_google_2fprotobuf_2fempty_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2fempty_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fempty_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fempty_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2fempty_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(PROTOBUF_NAMESPACE_ID::Empty)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&PROTOBUF_NAMESPACE_ID::_Empty_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2fempty_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/protobuf/empty.proto\022\017google.pr"
  "otobuf\"\007\n\005EmptyB}\n\023com.google.protobufB\n"
  "EmptyProtoP\001Z.google.golang.org/protobuf"
  "/types/known/emptypb\370\001\001\242\002\003GPB\252\002\036Google.P"
  "rotobuf.WellKnownTypesb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2fempty_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2fempty_2eproto_sccs[1] = {
  &scc_info_Empty_google_2fprotobuf_2fempty_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2fempty_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fempty_2eproto = {
  false, false, descriptor_table_protodef_google_2fprotobuf_2fempty_2eproto, "google/protobuf/empty.proto", 190,
  &descriptor_table_google_2fprotobuf_2fempty_2eproto_once, descriptor_table_google_2fprotobuf_2fempty_2eproto_sccs, descriptor_table_google_2fprotobuf_2fempty_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2fempty_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fempty_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2fempty_2eproto, file_level_service_descriptors_google_2fprotobuf_2fempty_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2fempty_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2fempty_2eproto)), true);
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class Empty::_Internal {
 public:
};

Empty::Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Empty)
}
Empty::Empty(const Empty& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Empty)
}

void Empty::SharedCtor() {
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:google.protobuf.Empty)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Empty::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Empty::ArenaDtor(void* object) {
  Empty* _this = reinterpret_cast< Empty* >(object);
  (void)_this;
}
void Empty::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Empty::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Empty& Empty::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Empty_google_2fprotobuf_2fempty_2eproto.base);
  return *internal_default_instance();
}


void Empty::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Empty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Empty::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Empty::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Empty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Empty)
  return target;
}

size_t Empty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Empty)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Empty::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  const Empty* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Empty>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Empty)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Empty)
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void Empty::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {
  return true;
}

void Empty::InternalSwap(Empty* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Empty::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE PROTOBUF_NAMESPACE_ID::Empty* Arena::CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Empty >(Arena* arena) {
  return Arena::CreateMessageInternal< PROTOBUF_NAMESPACE_ID::Empty >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
