// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: call.proto

#include "call.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UnixTimestamp_time_2eproto;
namespace call {
class NoticeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Notice> _instance;
} _Notice_default_instance_;
class CallStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CallState> _instance;
} _CallState_default_instance_;
}  // namespace call
static void InitDefaultsscc_info_CallState_call_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::call::_CallState_default_instance_;
    new (ptr) ::call::CallState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CallState_call_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CallState_call_2eproto}, {}};

static void InitDefaultsscc_info_Notice_call_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::call::_Notice_default_instance_;
    new (ptr) ::call::Notice();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Notice_call_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Notice_call_2eproto}, {
      &scc_info_UnixTimestamp_time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_call_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_call_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_call_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_call_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::call::Notice, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::call::Notice, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::call::Notice, timestamp_),
  PROTOBUF_FIELD_OFFSET(::call::Notice, phone_),
  PROTOBUF_FIELD_OFFSET(::call::Notice, people_),
  2,
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::call::CallState, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::call::CallState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::call::CallState, state_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::call::Notice)},
  { 11, 17, sizeof(::call::CallState)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::call::_Notice_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::call::_CallState_default_instance_),
};

const char descriptor_table_protodef_call_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ncall.proto\022\004call\032\ntime.proto\"U\n\006Notice"
  "\022,\n\ttimestamp\030\001 \002(\0132\031.proto.time.UnixTim"
  "estamp\022\r\n\005phone\030\002 \002(\t\022\016\n\006people\030\003 \001(\t\"_\n"
  "\tCallState\022$\n\005state\030\001 \002(\0162\025.call.CallSta"
  "te.State\",\n\005State\022\n\n\006ANSWER\020\001\022\n\n\006REJECT\020"
  "\002\022\013\n\007SPEAKER\020\003B\002H\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_call_2eproto_deps[1] = {
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_call_2eproto_sccs[2] = {
  &scc_info_CallState_call_2eproto.base,
  &scc_info_Notice_call_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_call_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_call_2eproto = {
  false, false, descriptor_table_protodef_call_2eproto, "call.proto", 218,
  &descriptor_table_call_2eproto_once, descriptor_table_call_2eproto_sccs, descriptor_table_call_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_call_2eproto::offsets,
  file_level_metadata_call_2eproto, 2, file_level_enum_descriptors_call_2eproto, file_level_service_descriptors_call_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_call_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_call_2eproto)), true);
namespace call {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallState_State_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_call_2eproto);
  return file_level_enum_descriptors_call_2eproto[0];
}
bool CallState_State_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr CallState_State CallState::ANSWER;
constexpr CallState_State CallState::REJECT;
constexpr CallState_State CallState::SPEAKER;
constexpr CallState_State CallState::State_MIN;
constexpr CallState_State CallState::State_MAX;
constexpr int CallState::State_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Notice::_Internal {
 public:
  using HasBits = decltype(std::declval<Notice>()._has_bits_);
  static const ::proto::time::UnixTimestamp& timestamp(const Notice* msg);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_phone(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_people(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000005) ^ 0x00000005) != 0;
  }
};

const ::proto::time::UnixTimestamp&
Notice::_Internal::timestamp(const Notice* msg) {
  return *msg->timestamp_;
}
void Notice::clear_timestamp() {
  if (timestamp_ != nullptr) timestamp_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Notice::Notice(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:call.Notice)
}
Notice::Notice(const Notice& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  phone_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_phone()) {
    phone_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_phone(), 
      GetArena());
  }
  people_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_people()) {
    people_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_people(), 
      GetArena());
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new ::proto::time::UnixTimestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:call.Notice)
}

void Notice::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Notice_call_2eproto.base);
  phone_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  people_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  timestamp_ = nullptr;
}

Notice::~Notice() {
  // @@protoc_insertion_point(destructor:call.Notice)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Notice::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  phone_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  people_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void Notice::ArenaDtor(void* object) {
  Notice* _this = reinterpret_cast< Notice* >(object);
  (void)_this;
}
void Notice::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Notice::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Notice& Notice::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Notice_call_2eproto.base);
  return *internal_default_instance();
}


void Notice::Clear() {
// @@protoc_insertion_point(message_clear_start:call.Notice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      phone_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      people_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(timestamp_ != nullptr);
      timestamp_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Notice::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .proto.time.UnixTimestamp timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string phone = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_phone();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "call.Notice.phone");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string people = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_people();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "call.Notice.people");
          #endif  // !NDEBUG
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Notice::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:call.Notice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .proto.time.UnixTimestamp timestamp = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::timestamp(this), target, stream);
  }

  // required string phone = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_phone().data(), static_cast<int>(this->_internal_phone().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "call.Notice.phone");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_phone(), target);
  }

  // optional string people = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_people().data(), static_cast<int>(this->_internal_people().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "call.Notice.people");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_people(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:call.Notice)
  return target;
}

size_t Notice::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:call.Notice)
  size_t total_size = 0;

  if (_internal_has_phone()) {
    // required string phone = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone());
  }

  if (_internal_has_timestamp()) {
    // required .proto.time.UnixTimestamp timestamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  return total_size;
}
size_t Notice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:call.Notice)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required string phone = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone());

    // required .proto.time.UnixTimestamp timestamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string people = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000002u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_people());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Notice::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:call.Notice)
  GOOGLE_DCHECK_NE(&from, this);
  const Notice* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Notice>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:call.Notice)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:call.Notice)
    MergeFrom(*source);
  }
}

void Notice::MergeFrom(const Notice& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:call.Notice)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_phone(from._internal_phone());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_people(from._internal_people());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_timestamp()->::proto::time::UnixTimestamp::MergeFrom(from._internal_timestamp());
    }
  }
}

void Notice::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:call.Notice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Notice::CopyFrom(const Notice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:call.Notice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Notice::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_timestamp()) {
    if (!timestamp_->IsInitialized()) return false;
  }
  return true;
}

void Notice::InternalSwap(Notice* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  phone_.Swap(&other->phone_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  people_.Swap(&other->people_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Notice::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class CallState::_Internal {
 public:
  using HasBits = decltype(std::declval<CallState>()._has_bits_);
  static void set_has_state(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

CallState::CallState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:call.CallState)
}
CallState::CallState(const CallState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  state_ = from.state_;
  // @@protoc_insertion_point(copy_constructor:call.CallState)
}

void CallState::SharedCtor() {
  state_ = 1;
}

CallState::~CallState() {
  // @@protoc_insertion_point(destructor:call.CallState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CallState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CallState::ArenaDtor(void* object) {
  CallState* _this = reinterpret_cast< CallState* >(object);
  (void)_this;
}
void CallState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CallState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CallState& CallState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CallState_call_2eproto.base);
  return *internal_default_instance();
}


void CallState::Clear() {
// @@protoc_insertion_point(message_clear_start:call.CallState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  state_ = 1;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CallState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .call.CallState.State state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::call::CallState_State_IsValid(val))) {
            _internal_set_state(static_cast<::call::CallState_State>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CallState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:call.CallState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .call.CallState.State state = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:call.CallState)
  return target;
}

size_t CallState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:call.CallState)
  size_t total_size = 0;

  // required .call.CallState.State state = 1;
  if (_internal_has_state()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_state());
  }
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

void CallState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:call.CallState)
  GOOGLE_DCHECK_NE(&from, this);
  const CallState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CallState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:call.CallState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:call.CallState)
    MergeFrom(*source);
  }
}

void CallState::MergeFrom(const CallState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:call.CallState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_state()) {
    _internal_set_state(from._internal_state());
  }
}

void CallState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:call.CallState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CallState::CopyFrom(const CallState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:call.CallState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CallState::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void CallState::InternalSwap(CallState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(state_, other->state_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CallState::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace call
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::call::Notice* Arena::CreateMaybeMessage< ::call::Notice >(Arena* arena) {
  return Arena::CreateMessageInternal< ::call::Notice >(arena);
}
template<> PROTOBUF_NOINLINE ::call::CallState* Arena::CreateMaybeMessage< ::call::CallState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::call::CallState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
