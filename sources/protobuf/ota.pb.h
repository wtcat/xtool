// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ota.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ota_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ota_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ota_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ota_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ota_2eproto;
namespace ota {
class File;
class FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
class FileCheck;
class FileCheckDefaultTypeInternal;
extern FileCheckDefaultTypeInternal _FileCheck_default_instance_;
class FileRequest;
class FileRequestDefaultTypeInternal;
extern FileRequestDefaultTypeInternal _FileRequest_default_instance_;
}  // namespace ota
PROTOBUF_NAMESPACE_OPEN
template<> ::ota::File* Arena::CreateMaybeMessage<::ota::File>(Arena*);
template<> ::ota::FileCheck* Arena::CreateMaybeMessage<::ota::FileCheck>(Arena*);
template<> ::ota::FileRequest* Arena::CreateMaybeMessage<::ota::FileRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ota {

// ===================================================================

class File PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ota.File) */ {
 public:
  inline File() : File(nullptr) {}
  virtual ~File();

  File(const File& from);
  File(File&& from) noexcept
    : File() {
    *this = ::std::move(from);
  }

  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  inline File& operator=(File&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const File& default_instance();

  enum FieldCase {
    kCrc = 6,
    kData = 7,
    FIELD_NOT_SET = 0,
  };

  static inline const File* internal_default_instance() {
    return reinterpret_cast<const File*>(
               &_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(File& a, File& b) {
    a.Swap(&b);
  }
  inline void Swap(File* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(File* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline File* New() const final {
    return CreateMaybeMessage<File>(nullptr);
  }

  File* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<File>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const File& from);
  void MergeFrom(const File& from);
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
  void InternalSwap(File* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ota.File";
  }
  protected:
  explicit File(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ota_2eproto);
    return ::descriptor_table_ota_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaxnoFieldNumber = 1,
    kNoFieldNumber = 2,
    kCrcFieldNumber = 6,
    kDataFieldNumber = 7,
  };
  // required int32 maxno = 1;
  bool has_maxno() const;
  private:
  bool _internal_has_maxno() const;
  public:
  void clear_maxno();
  ::PROTOBUF_NAMESPACE_ID::int32 maxno() const;
  void set_maxno(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_maxno() const;
  void _internal_set_maxno(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 no = 2;
  bool has_no() const;
  private:
  bool _internal_has_no() const;
  public:
  void clear_no();
  ::PROTOBUF_NAMESPACE_ID::int32 no() const;
  void set_no(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_no() const;
  void _internal_set_no(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // uint32 crc = 6;
  bool has_crc() const;
  private:
  bool _internal_has_crc() const;
  public:
  void clear_crc();
  ::PROTOBUF_NAMESPACE_ID::uint32 crc() const;
  void set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_crc() const;
  void _internal_set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bytes data = 7;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  void clear_field();
  FieldCase field_case() const;
  // @@protoc_insertion_point(class_scope:ota.File)
 private:
  class _Internal;
  void set_has_crc();
  void set_has_data();

  inline bool has_field() const;
  inline void clear_has_field();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 maxno_;
  ::PROTOBUF_NAMESPACE_ID::int32 no_;
  union FieldUnion {
    FieldUnion() {}
    ::PROTOBUF_NAMESPACE_ID::uint32 crc_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  } field_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_ota_2eproto;
};
// -------------------------------------------------------------------

class FileRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ota.FileRequest) */ {
 public:
  inline FileRequest() : FileRequest(nullptr) {}
  virtual ~FileRequest();

  FileRequest(const FileRequest& from);
  FileRequest(FileRequest&& from) noexcept
    : FileRequest() {
    *this = ::std::move(from);
  }

  inline FileRequest& operator=(const FileRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline FileRequest& operator=(FileRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const FileRequest& default_instance();

  static inline const FileRequest* internal_default_instance() {
    return reinterpret_cast<const FileRequest*>(
               &_FileRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FileRequest& a, FileRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(FileRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FileRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FileRequest* New() const final {
    return CreateMaybeMessage<FileRequest>(nullptr);
  }

  FileRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FileRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FileRequest& from);
  void MergeFrom(const FileRequest& from);
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
  void InternalSwap(FileRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ota.FileRequest";
  }
  protected:
  explicit FileRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ota_2eproto);
    return ::descriptor_table_ota_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFmaxSizeFieldNumber = 1,
    kBatteryFieldNumber = 2,
  };
  // required uint32 fmax_size = 1;
  bool has_fmax_size() const;
  private:
  bool _internal_has_fmax_size() const;
  public:
  void clear_fmax_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 fmax_size() const;
  void set_fmax_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_fmax_size() const;
  void _internal_set_fmax_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 battery = 2;
  bool has_battery() const;
  private:
  bool _internal_has_battery() const;
  public:
  void clear_battery();
  ::PROTOBUF_NAMESPACE_ID::uint32 battery() const;
  void set_battery(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_battery() const;
  void _internal_set_battery(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:ota.FileRequest)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 fmax_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 battery_;
  friend struct ::TableStruct_ota_2eproto;
};
// -------------------------------------------------------------------

class FileCheck PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ota.FileCheck) */ {
 public:
  inline FileCheck() : FileCheck(nullptr) {}
  virtual ~FileCheck();

  FileCheck(const FileCheck& from);
  FileCheck(FileCheck&& from) noexcept
    : FileCheck() {
    *this = ::std::move(from);
  }

  inline FileCheck& operator=(const FileCheck& from) {
    CopyFrom(from);
    return *this;
  }
  inline FileCheck& operator=(FileCheck&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const FileCheck& default_instance();

  static inline const FileCheck* internal_default_instance() {
    return reinterpret_cast<const FileCheck*>(
               &_FileCheck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FileCheck& a, FileCheck& b) {
    a.Swap(&b);
  }
  inline void Swap(FileCheck* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FileCheck* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FileCheck* New() const final {
    return CreateMaybeMessage<FileCheck>(nullptr);
  }

  FileCheck* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FileCheck>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FileCheck& from);
  void MergeFrom(const FileCheck& from);
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
  void InternalSwap(FileCheck* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ota.FileCheck";
  }
  protected:
  explicit FileCheck(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ota_2eproto);
    return ::descriptor_table_ota_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCrcFieldNumber = 1,
  };
  // required uint32 crc = 1;
  bool has_crc() const;
  private:
  bool _internal_has_crc() const;
  public:
  void clear_crc();
  ::PROTOBUF_NAMESPACE_ID::uint32 crc() const;
  void set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_crc() const;
  void _internal_set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:ota.FileCheck)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 crc_;
  friend struct ::TableStruct_ota_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// File

// required int32 maxno = 1;
inline bool File::_internal_has_maxno() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool File::has_maxno() const {
  return _internal_has_maxno();
}
inline void File::clear_maxno() {
  maxno_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 File::_internal_maxno() const {
  return maxno_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 File::maxno() const {
  // @@protoc_insertion_point(field_get:ota.File.maxno)
  return _internal_maxno();
}
inline void File::_internal_set_maxno(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  maxno_ = value;
}
inline void File::set_maxno(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_maxno(value);
  // @@protoc_insertion_point(field_set:ota.File.maxno)
}

// required int32 no = 2;
inline bool File::_internal_has_no() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool File::has_no() const {
  return _internal_has_no();
}
inline void File::clear_no() {
  no_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 File::_internal_no() const {
  return no_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 File::no() const {
  // @@protoc_insertion_point(field_get:ota.File.no)
  return _internal_no();
}
inline void File::_internal_set_no(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  no_ = value;
}
inline void File::set_no(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_no(value);
  // @@protoc_insertion_point(field_set:ota.File.no)
}

// uint32 crc = 6;
inline bool File::_internal_has_crc() const {
  return field_case() == kCrc;
}
inline bool File::has_crc() const {
  return _internal_has_crc();
}
inline void File::set_has_crc() {
  _oneof_case_[0] = kCrc;
}
inline void File::clear_crc() {
  if (_internal_has_crc()) {
    field_.crc_ = 0u;
    clear_has_field();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 File::_internal_crc() const {
  if (_internal_has_crc()) {
    return field_.crc_;
  }
  return 0u;
}
inline void File::_internal_set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  if (!_internal_has_crc()) {
    clear_field();
    set_has_crc();
  }
  field_.crc_ = value;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 File::crc() const {
  // @@protoc_insertion_point(field_get:ota.File.crc)
  return _internal_crc();
}
inline void File::set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_crc(value);
  // @@protoc_insertion_point(field_set:ota.File.crc)
}

// bytes data = 7;
inline bool File::_internal_has_data() const {
  return field_case() == kData;
}
inline bool File::has_data() const {
  return _internal_has_data();
}
inline void File::set_has_data() {
  _oneof_case_[0] = kData;
}
inline void File::clear_data() {
  if (_internal_has_data()) {
    field_.data_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
    clear_has_field();
  }
}
inline const std::string& File::data() const {
  // @@protoc_insertion_point(field_get:ota.File.data)
  return _internal_data();
}
inline void File::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:ota.File.data)
}
inline std::string* File::mutable_data() {
  // @@protoc_insertion_point(field_mutable:ota.File.data)
  return _internal_mutable_data();
}
inline const std::string& File::_internal_data() const {
  if (_internal_has_data()) {
    return field_.data_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void File::_internal_set_data(const std::string& value) {
  if (!_internal_has_data()) {
    clear_field();
    set_has_data();
    field_.data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  field_.data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void File::set_data(std::string&& value) {
  // @@protoc_insertion_point(field_set:ota.File.data)
  if (!_internal_has_data()) {
    clear_field();
    set_has_data();
    field_.data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  field_.data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ota.File.data)
}
inline void File::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!_internal_has_data()) {
    clear_field();
    set_has_data();
    field_.data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  field_.data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{},
      ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ota.File.data)
}
inline void File::set_data(const void* value,
                             size_t size) {
  if (!_internal_has_data()) {
    clear_field();
    set_has_data();
    field_.data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  field_.data_.Set(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArena());
  // @@protoc_insertion_point(field_set_pointer:ota.File.data)
}
inline std::string* File::_internal_mutable_data() {
  if (!_internal_has_data()) {
    clear_field();
    set_has_data();
    field_.data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return field_.data_.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* File::release_data() {
  // @@protoc_insertion_point(field_release:ota.File.data)
  if (_internal_has_data()) {
    clear_has_field();
    return field_.data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  } else {
    return nullptr;
  }
}
inline void File::set_allocated_data(std::string* data) {
  if (has_field()) {
    clear_field();
  }
  if (data != nullptr) {
    set_has_data();
    field_.data_.UnsafeSetDefault(data);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
    if (arena != nullptr) {
      arena->Own(data);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:ota.File.data)
}

inline bool File::has_field() const {
  return field_case() != FIELD_NOT_SET;
}
inline void File::clear_has_field() {
  _oneof_case_[0] = FIELD_NOT_SET;
}
inline File::FieldCase File::field_case() const {
  return File::FieldCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// FileRequest

// required uint32 fmax_size = 1;
inline bool FileRequest::_internal_has_fmax_size() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FileRequest::has_fmax_size() const {
  return _internal_has_fmax_size();
}
inline void FileRequest::clear_fmax_size() {
  fmax_size_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileRequest::_internal_fmax_size() const {
  return fmax_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileRequest::fmax_size() const {
  // @@protoc_insertion_point(field_get:ota.FileRequest.fmax_size)
  return _internal_fmax_size();
}
inline void FileRequest::_internal_set_fmax_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  fmax_size_ = value;
}
inline void FileRequest::set_fmax_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_fmax_size(value);
  // @@protoc_insertion_point(field_set:ota.FileRequest.fmax_size)
}

// required uint32 battery = 2;
inline bool FileRequest::_internal_has_battery() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool FileRequest::has_battery() const {
  return _internal_has_battery();
}
inline void FileRequest::clear_battery() {
  battery_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileRequest::_internal_battery() const {
  return battery_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileRequest::battery() const {
  // @@protoc_insertion_point(field_get:ota.FileRequest.battery)
  return _internal_battery();
}
inline void FileRequest::_internal_set_battery(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  battery_ = value;
}
inline void FileRequest::set_battery(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_battery(value);
  // @@protoc_insertion_point(field_set:ota.FileRequest.battery)
}

// -------------------------------------------------------------------

// FileCheck

// required uint32 crc = 1;
inline bool FileCheck::_internal_has_crc() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FileCheck::has_crc() const {
  return _internal_has_crc();
}
inline void FileCheck::clear_crc() {
  crc_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileCheck::_internal_crc() const {
  return crc_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 FileCheck::crc() const {
  // @@protoc_insertion_point(field_get:ota.FileCheck.crc)
  return _internal_crc();
}
inline void FileCheck::_internal_set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  crc_ = value;
}
inline void FileCheck::set_crc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_crc(value);
  // @@protoc_insertion_point(field_set:ota.FileCheck.crc)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ota

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ota_2eproto