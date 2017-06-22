// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_datapublisher.steamclient.proto

#ifndef PROTOBUF_steammessages_5fdatapublisher_2esteamclient_2eproto__INCLUDED
#define PROTOBUF_steammessages_5fdatapublisher_2esteamclient_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_unified_base.steamclient.pb.h"
// @@protoc_insertion_point(includes)
namespace proto {
namespace steam {
class CDataPublisher_ClientContentCorruptionReport_Notification;
class CDataPublisher_ClientContentCorruptionReport_NotificationDefaultTypeInternal;
extern CDataPublisher_ClientContentCorruptionReport_NotificationDefaultTypeInternal _CDataPublisher_ClientContentCorruptionReport_Notification_default_instance_;
class NoResponse;
class NoResponseDefaultTypeInternal;
extern NoResponseDefaultTypeInternal _NoResponse_default_instance_;
}  // namespace steam
}  // namespace proto

namespace proto {
namespace steam {

namespace protobuf_steammessages_5fdatapublisher_2esteamclient_2eproto {
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
}  // namespace protobuf_steammessages_5fdatapublisher_2esteamclient_2eproto

// ===================================================================

class CDataPublisher_ClientContentCorruptionReport_Notification : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification) */ {
 public:
  CDataPublisher_ClientContentCorruptionReport_Notification();
  virtual ~CDataPublisher_ClientContentCorruptionReport_Notification();

  CDataPublisher_ClientContentCorruptionReport_Notification(const CDataPublisher_ClientContentCorruptionReport_Notification& from);

  inline CDataPublisher_ClientContentCorruptionReport_Notification& operator=(const CDataPublisher_ClientContentCorruptionReport_Notification& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CDataPublisher_ClientContentCorruptionReport_Notification& default_instance();

  static inline const CDataPublisher_ClientContentCorruptionReport_Notification* internal_default_instance() {
    return reinterpret_cast<const CDataPublisher_ClientContentCorruptionReport_Notification*>(
               &_CDataPublisher_ClientContentCorruptionReport_Notification_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CDataPublisher_ClientContentCorruptionReport_Notification* other);

  // implements Message ----------------------------------------------

  inline CDataPublisher_ClientContentCorruptionReport_Notification* New() const PROTOBUF_FINAL { return New(NULL); }

  CDataPublisher_ClientContentCorruptionReport_Notification* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CDataPublisher_ClientContentCorruptionReport_Notification& from);
  void MergeFrom(const CDataPublisher_ClientContentCorruptionReport_Notification& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CDataPublisher_ClientContentCorruptionReport_Notification* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string download_source = 3 [(.proto.steam.description) = "host name of download source"];
  bool has_download_source() const;
  void clear_download_source();
  static const int kDownloadSourceFieldNumber = 3;
  const ::std::string& download_source() const;
  void set_download_source(const ::std::string& value);
  #if LANG_CXX11
  void set_download_source(::std::string&& value);
  #endif
  void set_download_source(const char* value);
  void set_download_source(const char* value, size_t size);
  ::std::string* mutable_download_source();
  ::std::string* release_download_source();
  void set_allocated_download_source(::std::string* download_source);

  // optional string objectid = 4 [(.proto.steam.description) = "Chunk SHA or Manifest ID"];
  bool has_objectid() const;
  void clear_objectid();
  static const int kObjectidFieldNumber = 4;
  const ::std::string& objectid() const;
  void set_objectid(const ::std::string& value);
  #if LANG_CXX11
  void set_objectid(::std::string&& value);
  #endif
  void set_objectid(const char* value);
  void set_objectid(const char* value, size_t size);
  ::std::string* mutable_objectid();
  ::std::string* release_objectid();
  void set_allocated_objectid(::std::string* objectid);

  // optional uint32 appid = 1;
  bool has_appid() const;
  void clear_appid();
  static const int kAppidFieldNumber = 1;
  ::google::protobuf::uint32 appid() const;
  void set_appid(::google::protobuf::uint32 value);

  // optional uint32 depotid = 2;
  bool has_depotid() const;
  void clear_depotid();
  static const int kDepotidFieldNumber = 2;
  ::google::protobuf::uint32 depotid() const;
  void set_depotid(::google::protobuf::uint32 value);

  // optional uint32 cellid = 5 [(.proto.steam.description) = "Client Cell ID"];
  bool has_cellid() const;
  void clear_cellid();
  static const int kCellidFieldNumber = 5;
  ::google::protobuf::uint32 cellid() const;
  void set_cellid(::google::protobuf::uint32 value);

  // optional bool is_manifest = 6 [(.proto.steam.description) = "The object is a manifest, not a chunk"];
  bool has_is_manifest() const;
  void clear_is_manifest();
  static const int kIsManifestFieldNumber = 6;
  bool is_manifest() const;
  void set_is_manifest(bool value);

  // optional uint64 object_size = 7 [(.proto.steam.description) = "object size in bytes"];
  bool has_object_size() const;
  void clear_object_size();
  static const int kObjectSizeFieldNumber = 7;
  ::google::protobuf::uint64 object_size() const;
  void set_object_size(::google::protobuf::uint64 value);

  // optional uint32 corruption_type = 8 [(.proto.steam.description) = "See EContentCorruptionType"];
  bool has_corruption_type() const;
  void clear_corruption_type();
  static const int kCorruptionTypeFieldNumber = 8;
  ::google::protobuf::uint32 corruption_type() const;
  void set_corruption_type(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification)
 private:
  void set_has_appid();
  void clear_has_appid();
  void set_has_depotid();
  void clear_has_depotid();
  void set_has_download_source();
  void clear_has_download_source();
  void set_has_objectid();
  void clear_has_objectid();
  void set_has_cellid();
  void clear_has_cellid();
  void set_has_is_manifest();
  void clear_has_is_manifest();
  void set_has_object_size();
  void clear_has_object_size();
  void set_has_corruption_type();
  void clear_has_corruption_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr download_source_;
  ::google::protobuf::internal::ArenaStringPtr objectid_;
  ::google::protobuf::uint32 appid_;
  ::google::protobuf::uint32 depotid_;
  ::google::protobuf::uint32 cellid_;
  bool is_manifest_;
  ::google::protobuf::uint64 object_size_;
  ::google::protobuf::uint32 corruption_type_;
  friend struct protobuf_steammessages_5fdatapublisher_2esteamclient_2eproto::TableStruct;
};
// ===================================================================

class DataPublisher_Stub;

class DataPublisher : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline DataPublisher() {};
 public:
  virtual ~DataPublisher();

  typedef DataPublisher_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void ClientContentCorruptionReport(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CDataPublisher_ClientContentCorruptionReport_Notification* request,
                       ::proto::steam::NoResponse* response,
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
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataPublisher);
};

class DataPublisher_Stub : public DataPublisher {
 public:
  DataPublisher_Stub(::google::protobuf::RpcChannel* channel);
  DataPublisher_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~DataPublisher_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements DataPublisher ------------------------------------------

  void ClientContentCorruptionReport(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CDataPublisher_ClientContentCorruptionReport_Notification* request,
                       ::proto::steam::NoResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataPublisher_Stub);
};


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CDataPublisher_ClientContentCorruptionReport_Notification

// optional uint32 appid = 1;
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_appid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_appid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_appid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_appid() {
  appid_ = 0u;
  clear_has_appid();
}
inline ::google::protobuf::uint32 CDataPublisher_ClientContentCorruptionReport_Notification::appid() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.appid)
  return appid_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_appid(::google::protobuf::uint32 value) {
  set_has_appid();
  appid_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.appid)
}

// optional uint32 depotid = 2;
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_depotid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_depotid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_depotid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_depotid() {
  depotid_ = 0u;
  clear_has_depotid();
}
inline ::google::protobuf::uint32 CDataPublisher_ClientContentCorruptionReport_Notification::depotid() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.depotid)
  return depotid_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_depotid(::google::protobuf::uint32 value) {
  set_has_depotid();
  depotid_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.depotid)
}

// optional string download_source = 3 [(.proto.steam.description) = "host name of download source"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_download_source() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_download_source() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_download_source() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_download_source() {
  download_source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_download_source();
}
inline const ::std::string& CDataPublisher_ClientContentCorruptionReport_Notification::download_source() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
  return download_source_.GetNoArena();
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_download_source(const ::std::string& value) {
  set_has_download_source();
  download_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
}
#if LANG_CXX11
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_download_source(::std::string&& value) {
  set_has_download_source();
  download_source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
}
#endif
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_download_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_download_source();
  download_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_download_source(const char* value, size_t size) {
  set_has_download_source();
  download_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
}
inline ::std::string* CDataPublisher_ClientContentCorruptionReport_Notification::mutable_download_source() {
  set_has_download_source();
  // @@protoc_insertion_point(field_mutable:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
  return download_source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CDataPublisher_ClientContentCorruptionReport_Notification::release_download_source() {
  // @@protoc_insertion_point(field_release:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
  clear_has_download_source();
  return download_source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_allocated_download_source(::std::string* download_source) {
  if (download_source != NULL) {
    set_has_download_source();
  } else {
    clear_has_download_source();
  }
  download_source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), download_source);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.download_source)
}

// optional string objectid = 4 [(.proto.steam.description) = "Chunk SHA or Manifest ID"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_objectid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_objectid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_objectid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_objectid() {
  objectid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_objectid();
}
inline const ::std::string& CDataPublisher_ClientContentCorruptionReport_Notification::objectid() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
  return objectid_.GetNoArena();
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_objectid(const ::std::string& value) {
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
}
#if LANG_CXX11
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_objectid(::std::string&& value) {
  set_has_objectid();
  objectid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
}
#endif
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_objectid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_objectid(const char* value, size_t size) {
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
}
inline ::std::string* CDataPublisher_ClientContentCorruptionReport_Notification::mutable_objectid() {
  set_has_objectid();
  // @@protoc_insertion_point(field_mutable:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
  return objectid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CDataPublisher_ClientContentCorruptionReport_Notification::release_objectid() {
  // @@protoc_insertion_point(field_release:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
  clear_has_objectid();
  return objectid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_allocated_objectid(::std::string* objectid) {
  if (objectid != NULL) {
    set_has_objectid();
  } else {
    clear_has_objectid();
  }
  objectid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), objectid);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.objectid)
}

// optional uint32 cellid = 5 [(.proto.steam.description) = "Client Cell ID"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_cellid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_cellid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_cellid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_cellid() {
  cellid_ = 0u;
  clear_has_cellid();
}
inline ::google::protobuf::uint32 CDataPublisher_ClientContentCorruptionReport_Notification::cellid() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.cellid)
  return cellid_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_cellid(::google::protobuf::uint32 value) {
  set_has_cellid();
  cellid_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.cellid)
}

// optional bool is_manifest = 6 [(.proto.steam.description) = "The object is a manifest, not a chunk"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_is_manifest() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_is_manifest() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_is_manifest() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_is_manifest() {
  is_manifest_ = false;
  clear_has_is_manifest();
}
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::is_manifest() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.is_manifest)
  return is_manifest_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_is_manifest(bool value) {
  set_has_is_manifest();
  is_manifest_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.is_manifest)
}

// optional uint64 object_size = 7 [(.proto.steam.description) = "object size in bytes"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_object_size() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_object_size() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_object_size() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_object_size() {
  object_size_ = GOOGLE_ULONGLONG(0);
  clear_has_object_size();
}
inline ::google::protobuf::uint64 CDataPublisher_ClientContentCorruptionReport_Notification::object_size() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.object_size)
  return object_size_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_object_size(::google::protobuf::uint64 value) {
  set_has_object_size();
  object_size_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.object_size)
}

// optional uint32 corruption_type = 8 [(.proto.steam.description) = "See EContentCorruptionType"];
inline bool CDataPublisher_ClientContentCorruptionReport_Notification::has_corruption_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_has_corruption_type() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_has_corruption_type() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::clear_corruption_type() {
  corruption_type_ = 0u;
  clear_has_corruption_type();
}
inline ::google::protobuf::uint32 CDataPublisher_ClientContentCorruptionReport_Notification::corruption_type() const {
  // @@protoc_insertion_point(field_get:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.corruption_type)
  return corruption_type_;
}
inline void CDataPublisher_ClientContentCorruptionReport_Notification::set_corruption_type(::google::protobuf::uint32 value) {
  set_has_corruption_type();
  corruption_type_ = value;
  // @@protoc_insertion_point(field_set:proto.steam.CDataPublisher_ClientContentCorruptionReport_Notification.corruption_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace steam
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_steammessages_5fdatapublisher_2esteamclient_2eproto__INCLUDED
