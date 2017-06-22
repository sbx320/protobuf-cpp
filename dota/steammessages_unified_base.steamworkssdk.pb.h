// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_unified_base.steamworkssdk.proto

#ifndef PROTOBUF_steammessages_5funified_5fbase_2esteamworkssdk_2eproto__INCLUDED
#define PROTOBUF_steammessages_5funified_5fbase_2esteamworkssdk_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace protobuf {
class DescriptorProto;
class DescriptorProtoDefaultTypeInternal;
extern DescriptorProtoDefaultTypeInternal _DescriptorProto_default_instance_;
class DescriptorProto_ExtensionRange;
class DescriptorProto_ExtensionRangeDefaultTypeInternal;
extern DescriptorProto_ExtensionRangeDefaultTypeInternal _DescriptorProto_ExtensionRange_default_instance_;
class EnumDescriptorProto;
class EnumDescriptorProtoDefaultTypeInternal;
extern EnumDescriptorProtoDefaultTypeInternal _EnumDescriptorProto_default_instance_;
class EnumOptions;
class EnumOptionsDefaultTypeInternal;
extern EnumOptionsDefaultTypeInternal _EnumOptions_default_instance_;
class EnumValueDescriptorProto;
class EnumValueDescriptorProtoDefaultTypeInternal;
extern EnumValueDescriptorProtoDefaultTypeInternal _EnumValueDescriptorProto_default_instance_;
class EnumValueOptions;
class EnumValueOptionsDefaultTypeInternal;
extern EnumValueOptionsDefaultTypeInternal _EnumValueOptions_default_instance_;
class FieldDescriptorProto;
class FieldDescriptorProtoDefaultTypeInternal;
extern FieldDescriptorProtoDefaultTypeInternal _FieldDescriptorProto_default_instance_;
class FieldOptions;
class FieldOptionsDefaultTypeInternal;
extern FieldOptionsDefaultTypeInternal _FieldOptions_default_instance_;
class FileDescriptorProto;
class FileDescriptorProtoDefaultTypeInternal;
extern FileDescriptorProtoDefaultTypeInternal _FileDescriptorProto_default_instance_;
class FileDescriptorSet;
class FileDescriptorSetDefaultTypeInternal;
extern FileDescriptorSetDefaultTypeInternal _FileDescriptorSet_default_instance_;
class FileOptions;
class FileOptionsDefaultTypeInternal;
extern FileOptionsDefaultTypeInternal _FileOptions_default_instance_;
class MessageOptions;
class MessageOptionsDefaultTypeInternal;
extern MessageOptionsDefaultTypeInternal _MessageOptions_default_instance_;
class MethodDescriptorProto;
class MethodDescriptorProtoDefaultTypeInternal;
extern MethodDescriptorProtoDefaultTypeInternal _MethodDescriptorProto_default_instance_;
class MethodOptions;
class MethodOptionsDefaultTypeInternal;
extern MethodOptionsDefaultTypeInternal _MethodOptions_default_instance_;
class OneofDescriptorProto;
class OneofDescriptorProtoDefaultTypeInternal;
extern OneofDescriptorProtoDefaultTypeInternal _OneofDescriptorProto_default_instance_;
class ServiceDescriptorProto;
class ServiceDescriptorProtoDefaultTypeInternal;
extern ServiceDescriptorProtoDefaultTypeInternal _ServiceDescriptorProto_default_instance_;
class ServiceOptions;
class ServiceOptionsDefaultTypeInternal;
extern ServiceOptionsDefaultTypeInternal _ServiceOptions_default_instance_;
class SourceCodeInfo;
class SourceCodeInfoDefaultTypeInternal;
extern SourceCodeInfoDefaultTypeInternal _SourceCodeInfo_default_instance_;
class SourceCodeInfo_Location;
class SourceCodeInfo_LocationDefaultTypeInternal;
extern SourceCodeInfo_LocationDefaultTypeInternal _SourceCodeInfo_Location_default_instance_;
class UninterpretedOption;
class UninterpretedOptionDefaultTypeInternal;
extern UninterpretedOptionDefaultTypeInternal _UninterpretedOption_default_instance_;
class UninterpretedOption_NamePart;
class UninterpretedOption_NamePartDefaultTypeInternal;
extern UninterpretedOption_NamePartDefaultTypeInternal _UninterpretedOption_NamePart_default_instance_;
}  // namespace protobuf
}  // namespace google
namespace proto {
namespace dota {
}  // namespace dota
}  // namespace proto

namespace proto {
namespace dota {

namespace protobuf_steammessages_5funified_5fbase_2esteamworkssdk_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_steammessages_5funified_5fbase_2esteamworkssdk_2eproto

enum EProtoExecutionSite {
  k_EProtoExecutionSiteUnknown = 0,
  k_EProtoExecutionSiteSteamClient = 3
};
bool EProtoExecutionSite_IsValid(int value);
const EProtoExecutionSite EProtoExecutionSite_MIN = k_EProtoExecutionSiteUnknown;
const EProtoExecutionSite EProtoExecutionSite_MAX = k_EProtoExecutionSiteSteamClient;
const int EProtoExecutionSite_ARRAYSIZE = EProtoExecutionSite_MAX + 1;

const ::google::protobuf::EnumDescriptor* EProtoExecutionSite_descriptor();
inline const ::std::string& EProtoExecutionSite_Name(EProtoExecutionSite value) {
  return ::google::protobuf::internal::NameOfEnum(
    EProtoExecutionSite_descriptor(), value);
}
inline bool EProtoExecutionSite_Parse(
    const ::std::string& name, EProtoExecutionSite* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EProtoExecutionSite>(
    EProtoExecutionSite_descriptor(), name, value);
}
// ===================================================================


// ===================================================================

static const int kDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  description;
static const int kServiceDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  service_description;
static const int kServiceExecutionSiteFieldNumber = 50008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::EnumTypeTraits< ::proto::dota::EProtoExecutionSite, ::proto::dota::EProtoExecutionSite_IsValid>, 14, false >
  service_execution_site;
static const int kMethodDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  method_description;
static const int kEnumDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_description;
static const int kEnumValueDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_value_description;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace dota
}  // namespace proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto::dota::EProtoExecutionSite> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::dota::EProtoExecutionSite>() {
  return ::proto::dota::EProtoExecutionSite_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_steammessages_5funified_5fbase_2esteamworkssdk_2eproto__INCLUDED
