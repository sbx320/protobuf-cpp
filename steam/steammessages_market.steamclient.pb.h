// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_market.steamclient.proto

#ifndef PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto
#define PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_unified_base.steamclient.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_steammessages_5fmarket_2esteamclient_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_steammessages_5fmarket_2esteamclient_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_steammessages_5fmarket_2esteamclient_2eproto();
namespace proto {
namespace steam {
class CEconMarket_IsMarketplaceAllowed_Request;
class CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal;
extern CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Request_default_instance_;
class CEconMarket_IsMarketplaceAllowed_Response;
class CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal;
extern CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Response_default_instance_;
}  // namespace steam
}  // namespace proto
namespace google {
namespace protobuf {
template<> ::proto::steam::CEconMarket_IsMarketplaceAllowed_Request* Arena::CreateMaybeMessage<::proto::steam::CEconMarket_IsMarketplaceAllowed_Request>(Arena*);
template<> ::proto::steam::CEconMarket_IsMarketplaceAllowed_Response* Arena::CreateMaybeMessage<::proto::steam::CEconMarket_IsMarketplaceAllowed_Response>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace proto {
namespace steam {

// ===================================================================

class CEconMarket_IsMarketplaceAllowed_Request final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.steam.CEconMarket_IsMarketplaceAllowed_Request) */ {
 public:
  CEconMarket_IsMarketplaceAllowed_Request();
  virtual ~CEconMarket_IsMarketplaceAllowed_Request();

  CEconMarket_IsMarketplaceAllowed_Request(const CEconMarket_IsMarketplaceAllowed_Request& from);

  inline CEconMarket_IsMarketplaceAllowed_Request& operator=(const CEconMarket_IsMarketplaceAllowed_Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CEconMarket_IsMarketplaceAllowed_Request(CEconMarket_IsMarketplaceAllowed_Request&& from) noexcept
    : CEconMarket_IsMarketplaceAllowed_Request() {
    *this = ::std::move(from);
  }

  inline CEconMarket_IsMarketplaceAllowed_Request& operator=(CEconMarket_IsMarketplaceAllowed_Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CEconMarket_IsMarketplaceAllowed_Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CEconMarket_IsMarketplaceAllowed_Request* internal_default_instance() {
    return reinterpret_cast<const CEconMarket_IsMarketplaceAllowed_Request*>(
               &_CEconMarket_IsMarketplaceAllowed_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CEconMarket_IsMarketplaceAllowed_Request* other);
  friend void swap(CEconMarket_IsMarketplaceAllowed_Request& a, CEconMarket_IsMarketplaceAllowed_Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CEconMarket_IsMarketplaceAllowed_Request* New() const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Request>(nullptr);
  }

  CEconMarket_IsMarketplaceAllowed_Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CEconMarket_IsMarketplaceAllowed_Request& from);
  void MergeFrom(const CEconMarket_IsMarketplaceAllowed_Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CEconMarket_IsMarketplaceAllowed_Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string webcookie = 1 [(.proto.steam.description) = "The user\'s Steam Guard machine auth cookie."];
  bool has_webcookie() const;
  void clear_webcookie();
  static const int kWebcookieFieldNumber = 1;
  const ::std::string& webcookie() const;
  void set_webcookie(const ::std::string& value);
  #if LANG_CXX11
  void set_webcookie(::std::string&& value);
  #endif
  void set_webcookie(const char* value);
  void set_webcookie(const char* value, size_t size);
  ::std::string* mutable_webcookie();
  ::std::string* release_webcookie();
  void set_allocated_webcookie(::std::string* webcookie);

  // @@protoc_insertion_point(class_scope:proto.steam.CEconMarket_IsMarketplaceAllowed_Request)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr webcookie_;
  friend struct ::TableStruct_steammessages_5fmarket_2esteamclient_2eproto;
};
// -------------------------------------------------------------------

class CEconMarket_IsMarketplaceAllowed_Response final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.steam.CEconMarket_IsMarketplaceAllowed_Response) */ {
 public:
  CEconMarket_IsMarketplaceAllowed_Response();
  virtual ~CEconMarket_IsMarketplaceAllowed_Response();

  CEconMarket_IsMarketplaceAllowed_Response(const CEconMarket_IsMarketplaceAllowed_Response& from);

  inline CEconMarket_IsMarketplaceAllowed_Response& operator=(const CEconMarket_IsMarketplaceAllowed_Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CEconMarket_IsMarketplaceAllowed_Response(CEconMarket_IsMarketplaceAllowed_Response&& from) noexcept
    : CEconMarket_IsMarketplaceAllowed_Response() {
    *this = ::std::move(from);
  }

  inline CEconMarket_IsMarketplaceAllowed_Response& operator=(CEconMarket_IsMarketplaceAllowed_Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CEconMarket_IsMarketplaceAllowed_Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CEconMarket_IsMarketplaceAllowed_Response* internal_default_instance() {
    return reinterpret_cast<const CEconMarket_IsMarketplaceAllowed_Response*>(
               &_CEconMarket_IsMarketplaceAllowed_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CEconMarket_IsMarketplaceAllowed_Response* other);
  friend void swap(CEconMarket_IsMarketplaceAllowed_Response& a, CEconMarket_IsMarketplaceAllowed_Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CEconMarket_IsMarketplaceAllowed_Response* New() const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Response>(nullptr);
  }

  CEconMarket_IsMarketplaceAllowed_Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CEconMarket_IsMarketplaceAllowed_Response& from);
  void MergeFrom(const CEconMarket_IsMarketplaceAllowed_Response& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CEconMarket_IsMarketplaceAllowed_Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 reason = 2 [(.proto.steam.description) = "The reason the user can\'t use the market, if applicable"];
  bool has_reason() const;
  void clear_reason();
  static const int kReasonFieldNumber = 2;
  ::google::protobuf::uint32 reason() const;
  void set_reason(::google::protobuf::uint32 value);

  // optional uint32 allowed_at_time = 3 [(.proto.steam.description) = "The time the user will be allowed to use the market"];
  bool has_allowed_at_time() const;
  void clear_allowed_at_time();
  static const int kAllowedAtTimeFieldNumber = 3;
  ::google::protobuf::uint32 allowed_at_time() const;
  void set_allowed_at_time(::google::protobuf::uint32 value);

  // optional uint32 steamguard_required_days = 4 [(.proto.steam.description) = "The number of days any user is required to have had Steam Guard before they can use the market"];
  bool has_steamguard_required_days() const;
  void clear_steamguard_required_days();
  static const int kSteamguardRequiredDaysFieldNumber = 4;
  ::google::protobuf::uint32 steamguard_required_days() const;
  void set_steamguard_required_days(::google::protobuf::uint32 value);

  // optional bool allowed = 1 [(.proto.steam.description) = "Whether or not the user is allowed to use the market"];
  bool has_allowed() const;
  void clear_allowed();
  static const int kAllowedFieldNumber = 1;
  bool allowed() const;
  void set_allowed(bool value);

  // optional bool forms_requested = 7 [(.proto.steam.description) = "Whether or not we\'ve requested the user fill out tax forms"];
  bool has_forms_requested() const;
  void clear_forms_requested();
  static const int kFormsRequestedFieldNumber = 7;
  bool forms_requested() const;
  void set_forms_requested(bool value);

  // optional bool forms_require_verification = 8 [(.proto.steam.description) = "True if we\'ve received forms but they require verification first"];
  bool has_forms_require_verification() const;
  void clear_forms_require_verification();
  static const int kFormsRequireVerificationFieldNumber = 8;
  bool forms_require_verification() const;
  void set_forms_require_verification(bool value);

  // optional uint32 new_device_cooldown_days = 9 [(.proto.steam.description) = "The number of days after initial device authorization a user must wait before using the market on that device"];
  bool has_new_device_cooldown_days() const;
  void clear_new_device_cooldown_days();
  static const int kNewDeviceCooldownDaysFieldNumber = 9;
  ::google::protobuf::uint32 new_device_cooldown_days() const;
  void set_new_device_cooldown_days(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.steam.CEconMarket_IsMarketplaceAllowed_Response)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 reason_;
  ::google::protobuf::uint32 allowed_at_time_;
  ::google::protobuf::uint32 steamguard_required_days_;
  bool allowed_;
  bool forms_requested_;
  bool forms_require_verification_;
  ::google::protobuf::uint32 new_device_cooldown_days_;
  friend struct ::TableStruct_steammessages_5fmarket_2esteamclient_2eproto;
};
// ===================================================================

class EconMarket_Stub;

class EconMarket : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline EconMarket() {};
 public:
  virtual ~EconMarket();

  typedef EconMarket_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void IsMarketplaceAllowed(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CEconMarket_IsMarketplaceAllowed_Request* request,
                       ::proto::steam::CEconMarket_IsMarketplaceAllowed_Response* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EconMarket);
};

class EconMarket_Stub : public EconMarket {
 public:
  EconMarket_Stub(::google::protobuf::RpcChannel* channel);
  EconMarket_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~EconMarket_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements EconMarket ------------------------------------------

  void IsMarketplaceAllowed(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CEconMarket_IsMarketplaceAllowed_Request* request,
                       ::proto::steam::CEconMarket_IsMarketplaceAllowed_Response* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EconMarket_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CEconMarket_IsMarketplaceAllowed_Request

// optional string webcookie = 1 [(.proto.steam.description) = "The user\'s Steam Guard machine auth cookie."];
inline bool CEconMarket_IsMarketplaceAllowed_Request::has_webcookie() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Request::clear_webcookie() {
  webcookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& CEconMarket_IsMarketplaceAllowed_Request::webcookie() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  return webcookie_.GetNoArena();
}
inline void CEconMarket_IsMarketplaceAllowed_Request::set_webcookie(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  webcookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}
#if LANG_CXX11
inline void CEconMarket_IsMarketplaceAllowed_Request::set_webcookie(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  webcookie_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}
#endif
inline void CEconMarket_IsMarketplaceAllowed_Request::set_webcookie(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  webcookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}
inline void CEconMarket_IsMarketplaceAllowed_Request::set_webcookie(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  webcookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}
inline ::std::string* CEconMarket_IsMarketplaceAllowed_Request::mutable_webcookie() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  return webcookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CEconMarket_IsMarketplaceAllowed_Request::release_webcookie() {
  // @@protoc_insertion_point(field_release:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  if (!has_webcookie()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return webcookie_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CEconMarket_IsMarketplaceAllowed_Request::set_allocated_webcookie(::std::string* webcookie) {
  if (webcookie != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  webcookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), webcookie);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}

// -------------------------------------------------------------------

// CEconMarket_IsMarketplaceAllowed_Response

// optional bool allowed = 1 [(.proto.steam.description) = "Whether or not the user is allowed to use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_allowed() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_allowed() {
  allowed_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::allowed() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.allowed)
  return allowed_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_allowed(bool value) {
  _has_bits_[0] |= 0x00000008u;
  allowed_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.allowed)
}

// optional uint32 reason = 2 [(.proto.steam.description) = "The reason the user can\'t use the market, if applicable"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_reason() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_reason() {
  reason_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::google::protobuf::uint32 CEconMarket_IsMarketplaceAllowed_Response::reason() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.reason)
  return reason_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_reason(::google::protobuf::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  reason_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.reason)
}

// optional uint32 allowed_at_time = 3 [(.proto.steam.description) = "The time the user will be allowed to use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_allowed_at_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_allowed_at_time() {
  allowed_at_time_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::google::protobuf::uint32 CEconMarket_IsMarketplaceAllowed_Response::allowed_at_time() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.allowed_at_time)
  return allowed_at_time_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_allowed_at_time(::google::protobuf::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  allowed_at_time_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.allowed_at_time)
}

// optional uint32 steamguard_required_days = 4 [(.proto.steam.description) = "The number of days any user is required to have had Steam Guard before they can use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_steamguard_required_days() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_steamguard_required_days() {
  steamguard_required_days_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::google::protobuf::uint32 CEconMarket_IsMarketplaceAllowed_Response::steamguard_required_days() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.steamguard_required_days)
  return steamguard_required_days_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_steamguard_required_days(::google::protobuf::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  steamguard_required_days_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.steamguard_required_days)
}

// optional bool forms_requested = 7 [(.proto.steam.description) = "Whether or not we\'ve requested the user fill out tax forms"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_forms_requested() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_forms_requested() {
  forms_requested_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::forms_requested() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.forms_requested)
  return forms_requested_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_forms_requested(bool value) {
  _has_bits_[0] |= 0x00000010u;
  forms_requested_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.forms_requested)
}

// optional bool forms_require_verification = 8 [(.proto.steam.description) = "True if we\'ve received forms but they require verification first"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_forms_require_verification() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_forms_require_verification() {
  forms_require_verification_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::forms_require_verification() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.forms_require_verification)
  return forms_require_verification_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_forms_require_verification(bool value) {
  _has_bits_[0] |= 0x00000020u;
  forms_require_verification_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.forms_require_verification)
}

// optional uint32 new_device_cooldown_days = 9 [(.proto.steam.description) = "The number of days after initial device authorization a user must wait before using the market on that device"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_new_device_cooldown_days() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_new_device_cooldown_days() {
  new_device_cooldown_days_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::google::protobuf::uint32 CEconMarket_IsMarketplaceAllowed_Response::new_device_cooldown_days() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.new_device_cooldown_days)
  return new_device_cooldown_days_;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_new_device_cooldown_days(::google::protobuf::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  new_device_cooldown_days_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CEconMarket_IsMarketplaceAllowed_Response.new_device_cooldown_days)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace steam
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto
