#include "ProtoDisableWarning.h"
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/client.proto

#include "google/api/client.pb.h"

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
namespace google {
namespace api {
}  // namespace api
}  // namespace google
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_google_2fapi_2fclient_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fclient_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fclient_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fclient_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2fapi_2fclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027google/api/client.proto\022\ngoogle.api\032 g"
  "oogle/protobuf/descriptor.proto:9\n\020metho"
  "d_signature\022\036.google.protobuf.MethodOpti"
  "ons\030\233\010 \003(\t:6\n\014default_host\022\037.google.prot"
  "obuf.ServiceOptions\030\231\010 \001(\t:6\n\014oauth_scop"
  "es\022\037.google.protobuf.ServiceOptions\030\232\010 \001"
  "(\tBi\n\016com.google.apiB\013ClientProtoP\001ZAgoo"
  "gle.golang.org/genproto/googleapis/api/a"
  "nnotations;annotations\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fclient_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fclient_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fclient_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fclient_2eproto = {
  false, false, descriptor_table_protodef_google_2fapi_2fclient_2eproto, "google/api/client.proto", 357,
  &descriptor_table_google_2fapi_2fclient_2eproto_once, descriptor_table_google_2fapi_2fclient_2eproto_sccs, descriptor_table_google_2fapi_2fclient_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fclient_2eproto::offsets,
  file_level_metadata_google_2fapi_2fclient_2eproto, 0, file_level_enum_descriptors_google_2fapi_2fclient_2eproto, file_level_service_descriptors_google_2fapi_2fclient_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fclient_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fclient_2eproto)), true);
namespace google {
namespace api {
const std::string method_signature_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedStringTypeTraits, 9, false >
  method_signature(kMethodSignatureFieldNumber, method_signature_default);
const std::string default_host_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  default_host(kDefaultHostFieldNumber, default_host_default);
const std::string oauth_scopes_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  oauth_scopes(kOauthScopesFieldNumber, oauth_scopes_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
