// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#include <google/protobuf/any.pb.h>

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
class AnyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Any> _instance;
} _Any_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
static void InitDefaultsscc_info_Any_google_2fprotobuf_2fany_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &PROTOBUF_NAMESPACE_ID::_Any_default_instance_;
    new (ptr) PROTOBUF_NAMESPACE_ID::Any();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

PROTOBUF_EXPORT ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Any_google_2fprotobuf_2fany_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2fany_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2fany_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, type_url_),
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(PROTOBUF_NAMESPACE_ID::Any)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&PROTOBUF_NAMESPACE_ID::_Any_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2fany_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031google/protobuf/any.proto\022\017google.prot"
  "obuf\"&\n\003Any\022\020\n\010type_url\030\001 \001(\t\022\r\n\005value\030\002"
  " \001(\014Bv\n\023com.google.protobufB\010AnyProtoP\001Z"
  ",google.golang.org/protobuf/types/known/"
  "anypb\242\002\003GPB\252\002\036Google.Protobuf.WellKnownT"
  "ypesb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2fany_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2fany_2eproto_sccs[1] = {
  &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2fany_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fany_2eproto = {
  false, false, descriptor_table_protodef_google_2fprotobuf_2fany_2eproto, "google/protobuf/any.proto", 212,
  &descriptor_table_google_2fprotobuf_2fany_2eproto_once, descriptor_table_google_2fprotobuf_2fany_2eproto_sccs, descriptor_table_google_2fprotobuf_2fany_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2fany_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fany_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto, file_level_service_descriptors_google_2fprotobuf_2fany_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2fany_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2fany_2eproto)), true);
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

bool Any::GetAnyFieldDescriptors(
    const ::PROTOBUF_NAMESPACE_ID::Message& message,
    const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** type_url_field,
    const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** value_field) {
  return ::PROTOBUF_NAMESPACE_ID::internal::GetAnyFieldDescriptors(
      message, type_url_field, value_field);
}
bool Any::ParseAnyTypeUrl(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam type_url,
    std::string* full_type_name) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseAnyTypeUrl(type_url,
                                             full_type_name);
}

class Any::_Internal {
 public:
};

Any::Any(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  _any_metadata_(&type_url_, &value_) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Any)
}
Any::Any(const Any& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _any_metadata_(&type_url_, &value_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type_url().empty()) {
    type_url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type_url(), 
      GetArena());
  }
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Any)
}

void Any::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Any_google_2fprotobuf_2fany_2eproto.base);
  type_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:google.protobuf.Any)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Any::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  type_url_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Any::ArenaDtor(void* object) {
  Any* _this = reinterpret_cast< Any* >(object);
  (void)_this;
}
void Any::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Any::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Any& Any::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Any_google_2fprotobuf_2fany_2eproto.base);
  return *internal_default_instance();
}


void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_url_.ClearToEmpty();
  value_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Any::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string type_url = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type_url();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.protobuf.Any.type_url"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Any::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type_url = 1;
  if (this->type_url().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type_url().data(), static_cast<int>(this->_internal_type_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type_url(), target);
  }

  // bytes value = 2;
  if (this->value().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Any)
  return target;
}

size_t Any::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Any)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type_url = 1;
  if (this->type_url().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type_url());
  }

  // bytes value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_value());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Any::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Any)
  GOOGLE_DCHECK_NE(&from, this);
  const Any* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Any>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Any)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Any)
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Any)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type_url().size() > 0) {
    _internal_set_type_url(from._internal_type_url());
  }
  if (from.value().size() > 0) {
    _internal_set_value(from._internal_value());
  }
}

void Any::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {
  return true;
}

void Any::InternalSwap(Any* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  type_url_.Swap(&other->type_url_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  value_.Swap(&other->value_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata Any::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE PROTOBUF_NAMESPACE_ID::Any* Arena::CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Any >(Arena* arena) {
  return Arena::CreateMessageInternal< PROTOBUF_NAMESPACE_ID::Any >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
