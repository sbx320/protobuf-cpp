// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_econ.steamclient.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "steammessages_econ.steamclient.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace steam {
class CEcon_ClientGetItemShopOverlayAuthURL_RequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CEcon_ClientGetItemShopOverlayAuthURL_Request> {
} _CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_;
class CEcon_ClientGetItemShopOverlayAuthURL_ResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CEcon_ClientGetItemShopOverlayAuthURL_Response> {
} _CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_;

namespace protobuf_steammessages_5fecon_2esteamclient_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Request, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Request, return_url_),
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Response, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEcon_ClientGetItemShopOverlayAuthURL_Response, url_),
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(CEcon_ClientGetItemShopOverlayAuthURL_Request)},
  { 7, 13, sizeof(CEcon_ClientGetItemShopOverlayAuthURL_Response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "steammessages_econ.steamclient.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::proto::steam::protobuf_steammessages_5funified_5fbase_2esteamclient_2eproto::InitDefaults();
  _CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_.DefaultConstruct();
  _CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n$steammessages_econ.steamclient.proto\022\013"
      "proto.steam\032,steammessages_unified_base."
      "steamclient.proto\"C\n-CEcon_ClientGetItem"
      "ShopOverlayAuthURL_Request\022\022\n\nreturn_url"
      "\030\001 \001(\t\"=\n.CEcon_ClientGetItemShopOverlay"
      "AuthURL_Response\022\013\n\003url\030\001 \001(\t2\273\002\n\004Econ\022\361"
      "\001\n\037ClientGetItemShopOverlayAuthURL\022:.pro"
      "to.steam.CEcon_ClientGetItemShopOverlayA"
      "uthURL_Request\032;.proto.steam.CEcon_Clien"
      "tGetItemShopOverlayAuthURL_Response\"U\202\265\030"
      "QGenerates a URL which sets a secure coo"
      "kie for in-game-browser itemshop purchas"
      "es\032\?\202\265\030;A service that provides communic"
      "ation with the econ serversB\003\200\001\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 552);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "steammessages_econ.steamclient.proto", &protobuf_RegisterTypes);
  ::proto::steam::protobuf_steammessages_5funified_5fbase_2esteamclient_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_steammessages_5fecon_2esteamclient_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CEcon_ClientGetItemShopOverlayAuthURL_Request::kReturnUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CEcon_ClientGetItemShopOverlayAuthURL_Request::CEcon_ClientGetItemShopOverlayAuthURL_Request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_steammessages_5fecon_2esteamclient_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
}
CEcon_ClientGetItemShopOverlayAuthURL_Request::CEcon_ClientGetItemShopOverlayAuthURL_Request(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  return_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_return_url()) {
    return_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.return_url_);
  }
  // @@protoc_insertion_point(copy_constructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::SharedCtor() {
  _cached_size_ = 0;
  return_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CEcon_ClientGetItemShopOverlayAuthURL_Request::~CEcon_ClientGetItemShopOverlayAuthURL_Request() {
  // @@protoc_insertion_point(destructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  SharedDtor();
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::SharedDtor() {
  return_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CEcon_ClientGetItemShopOverlayAuthURL_Request::descriptor() {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CEcon_ClientGetItemShopOverlayAuthURL_Request& CEcon_ClientGetItemShopOverlayAuthURL_Request::default_instance() {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::InitDefaults();
  return *internal_default_instance();
}

CEcon_ClientGetItemShopOverlayAuthURL_Request* CEcon_ClientGetItemShopOverlayAuthURL_Request::New(::google::protobuf::Arena* arena) const {
  CEcon_ClientGetItemShopOverlayAuthURL_Request* n = new CEcon_ClientGetItemShopOverlayAuthURL_Request;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  if (has_return_url()) {
    GOOGLE_DCHECK(!return_url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*return_url_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CEcon_ClientGetItemShopOverlayAuthURL_Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string return_url = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_return_url()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->return_url().data(), this->return_url().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  return false;
#undef DO_
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string return_url = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->return_url().data(), this->return_url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->return_url(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
}

::google::protobuf::uint8* CEcon_ClientGetItemShopOverlayAuthURL_Request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string return_url = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->return_url().data(), this->return_url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->return_url(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  return target;
}

size_t CEcon_ClientGetItemShopOverlayAuthURL_Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // optional string return_url = 1;
  if (has_return_url()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->return_url());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  GOOGLE_DCHECK_NE(&from, this);
  const CEcon_ClientGetItemShopOverlayAuthURL_Request* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CEcon_ClientGetItemShopOverlayAuthURL_Request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
    MergeFrom(*source);
  }
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::MergeFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_return_url()) {
    set_has_return_url();
    return_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.return_url_);
  }
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::CopyFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CEcon_ClientGetItemShopOverlayAuthURL_Request::IsInitialized() const {
  return true;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Request::Swap(CEcon_ClientGetItemShopOverlayAuthURL_Request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::InternalSwap(CEcon_ClientGetItemShopOverlayAuthURL_Request* other) {
  return_url_.Swap(&other->return_url_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CEcon_ClientGetItemShopOverlayAuthURL_Request::GetMetadata() const {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CEcon_ClientGetItemShopOverlayAuthURL_Request

// optional string return_url = 1;
bool CEcon_ClientGetItemShopOverlayAuthURL_Request::has_return_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_has_return_url() {
  _has_bits_[0] |= 0x00000001u;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::clear_has_return_url() {
  _has_bits_[0] &= ~0x00000001u;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::clear_return_url() {
  return_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_return_url();
}
const ::std::string& CEcon_ClientGetItemShopOverlayAuthURL_Request::return_url() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  return return_url_.GetNoArena();
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const ::std::string& value) {
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
#if LANG_CXX11
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(::std::string&& value) {
  set_has_return_url();
  return_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
#endif
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const char* value, size_t size) {
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Request::mutable_return_url() {
  set_has_return_url();
  // @@protoc_insertion_point(field_mutable:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  return return_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Request::release_return_url() {
  // @@protoc_insertion_point(field_release:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  clear_has_return_url();
  return return_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_allocated_return_url(::std::string* return_url) {
  if (return_url != NULL) {
    set_has_return_url();
  } else {
    clear_has_return_url();
  }
  return_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), return_url);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CEcon_ClientGetItemShopOverlayAuthURL_Response::kUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CEcon_ClientGetItemShopOverlayAuthURL_Response::CEcon_ClientGetItemShopOverlayAuthURL_Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_steammessages_5fecon_2esteamclient_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
}
CEcon_ClientGetItemShopOverlayAuthURL_Response::CEcon_ClientGetItemShopOverlayAuthURL_Response(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_url()) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  // @@protoc_insertion_point(copy_constructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::SharedCtor() {
  _cached_size_ = 0;
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CEcon_ClientGetItemShopOverlayAuthURL_Response::~CEcon_ClientGetItemShopOverlayAuthURL_Response() {
  // @@protoc_insertion_point(destructor:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  SharedDtor();
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::SharedDtor() {
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CEcon_ClientGetItemShopOverlayAuthURL_Response::descriptor() {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CEcon_ClientGetItemShopOverlayAuthURL_Response& CEcon_ClientGetItemShopOverlayAuthURL_Response::default_instance() {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::InitDefaults();
  return *internal_default_instance();
}

CEcon_ClientGetItemShopOverlayAuthURL_Response* CEcon_ClientGetItemShopOverlayAuthURL_Response::New(::google::protobuf::Arena* arena) const {
  CEcon_ClientGetItemShopOverlayAuthURL_Response* n = new CEcon_ClientGetItemShopOverlayAuthURL_Response;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  if (has_url()) {
    GOOGLE_DCHECK(!url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*url_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CEcon_ClientGetItemShopOverlayAuthURL_Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string url = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->url().data(), this->url().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  return false;
#undef DO_
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string url = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->url(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
}

::google::protobuf::uint8* CEcon_ClientGetItemShopOverlayAuthURL_Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string url = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->url(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  return target;
}

size_t CEcon_ClientGetItemShopOverlayAuthURL_Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // optional string url = 1;
  if (has_url()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->url());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  GOOGLE_DCHECK_NE(&from, this);
  const CEcon_ClientGetItemShopOverlayAuthURL_Response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CEcon_ClientGetItemShopOverlayAuthURL_Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
    MergeFrom(*source);
  }
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::MergeFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_url()) {
    set_has_url();
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::CopyFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CEcon_ClientGetItemShopOverlayAuthURL_Response::IsInitialized() const {
  return true;
}

void CEcon_ClientGetItemShopOverlayAuthURL_Response::Swap(CEcon_ClientGetItemShopOverlayAuthURL_Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::InternalSwap(CEcon_ClientGetItemShopOverlayAuthURL_Response* other) {
  url_.Swap(&other->url_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CEcon_ClientGetItemShopOverlayAuthURL_Response::GetMetadata() const {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CEcon_ClientGetItemShopOverlayAuthURL_Response

// optional string url = 1;
bool CEcon_ClientGetItemShopOverlayAuthURL_Response::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
const ::std::string& CEcon_ClientGetItemShopOverlayAuthURL_Response::url() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  return url_.GetNoArena();
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
#if LANG_CXX11
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
#endif
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Response::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Response::release_url() {
  // @@protoc_insertion_point(field_release:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

Econ::~Econ() {}

const ::google::protobuf::ServiceDescriptor* Econ::descriptor() {
  protobuf_steammessages_5fecon_2esteamclient_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* Econ::GetDescriptor() {
  return descriptor();
}

void Econ::ClientGetItemShopOverlayAuthURL(::google::protobuf::RpcController* controller,
                         const ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request*,
                         ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method ClientGetItemShopOverlayAuthURL() not implemented.");
  done->Run();
}

void Econ::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_steammessages_5fecon_2esteamclient_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      ClientGetItemShopOverlayAuthURL(controller,
             ::google::protobuf::down_cast<const ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request*>(request),
             ::google::protobuf::down_cast< ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& Econ::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& Econ::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

Econ_Stub::Econ_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
Econ_Stub::Econ_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
Econ_Stub::~Econ_Stub() {
  if (owns_channel_) delete channel_;
}

void Econ_Stub::ClientGetItemShopOverlayAuthURL(::google::protobuf::RpcController* controller,
                              const ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request* request,
                              ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace steam
}  // namespace proto

// @@protoc_insertion_point(global_scope)
