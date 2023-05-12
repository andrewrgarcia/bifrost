// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/object.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fobject_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fobject_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fobject_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fobject_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fobject_2eproto;
namespace proto {
class Object;
struct ObjectDefaultTypeInternal;
extern ObjectDefaultTypeInternal _Object_default_instance_;
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::Object* Arena::CreateMaybeMessage<::proto::Object>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {

// ===================================================================

class Object final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.Object) */ {
 public:
  inline Object() : Object(nullptr) {}
  ~Object() override;
  explicit PROTOBUF_CONSTEXPR Object(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Object(const Object& from);
  Object(Object&& from) noexcept
    : Object() {
    *this = ::std::move(from);
  }

  inline Object& operator=(const Object& from) {
    CopyFrom(from);
    return *this;
  }
  inline Object& operator=(Object&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Object& default_instance() {
    return *internal_default_instance();
  }
  static inline const Object* internal_default_instance() {
    return reinterpret_cast<const Object*>(
               &_Object_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Object& a, Object& b) {
    a.Swap(&b);
  }
  inline void Swap(Object* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Object* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Object* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Object>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Object& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Object& from) {
    Object::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Object* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.Object";
  }
  protected:
  explicit Object(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kArrayFieldFieldNumber = 2,
    kStringFieldFieldNumber = 1,
  };
  // repeated int32 array_field = 2;
  int array_field_size() const;
  private:
  int _internal_array_field_size() const;
  public:
  void clear_array_field();
  private:
  int32_t _internal_array_field(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_array_field() const;
  void _internal_add_array_field(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_array_field();
  public:
  int32_t array_field(int index) const;
  void set_array_field(int index, int32_t value);
  void add_array_field(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      array_field() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_array_field();

  // string string_field = 1;
  void clear_string_field();
  const std::string& string_field() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_string_field(ArgT0&& arg0, ArgT... args);
  std::string* mutable_string_field();
  PROTOBUF_NODISCARD std::string* release_string_field();
  void set_allocated_string_field(std::string* string_field);
  private:
  const std::string& _internal_string_field() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_string_field(const std::string& value);
  std::string* _internal_mutable_string_field();
  public:

  // @@protoc_insertion_point(class_scope:proto.Object)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > array_field_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _array_field_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_field_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fobject_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Object

// string string_field = 1;
inline void Object::clear_string_field() {
  _impl_.string_field_.ClearToEmpty();
}
inline const std::string& Object::string_field() const {
  // @@protoc_insertion_point(field_get:proto.Object.string_field)
  return _internal_string_field();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Object::set_string_field(ArgT0&& arg0, ArgT... args) {
 
 _impl_.string_field_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:proto.Object.string_field)
}
inline std::string* Object::mutable_string_field() {
  std::string* _s = _internal_mutable_string_field();
  // @@protoc_insertion_point(field_mutable:proto.Object.string_field)
  return _s;
}
inline const std::string& Object::_internal_string_field() const {
  return _impl_.string_field_.Get();
}
inline void Object::_internal_set_string_field(const std::string& value) {
  
  _impl_.string_field_.Set(value, GetArenaForAllocation());
}
inline std::string* Object::_internal_mutable_string_field() {
  
  return _impl_.string_field_.Mutable(GetArenaForAllocation());
}
inline std::string* Object::release_string_field() {
  // @@protoc_insertion_point(field_release:proto.Object.string_field)
  return _impl_.string_field_.Release();
}
inline void Object::set_allocated_string_field(std::string* string_field) {
  if (string_field != nullptr) {
    
  } else {
    
  }
  _impl_.string_field_.SetAllocated(string_field, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.string_field_.IsDefault()) {
    _impl_.string_field_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:proto.Object.string_field)
}

// repeated int32 array_field = 2;
inline int Object::_internal_array_field_size() const {
  return _impl_.array_field_.size();
}
inline int Object::array_field_size() const {
  return _internal_array_field_size();
}
inline void Object::clear_array_field() {
  _impl_.array_field_.Clear();
}
inline int32_t Object::_internal_array_field(int index) const {
  return _impl_.array_field_.Get(index);
}
inline int32_t Object::array_field(int index) const {
  // @@protoc_insertion_point(field_get:proto.Object.array_field)
  return _internal_array_field(index);
}
inline void Object::set_array_field(int index, int32_t value) {
  _impl_.array_field_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto.Object.array_field)
}
inline void Object::_internal_add_array_field(int32_t value) {
  _impl_.array_field_.Add(value);
}
inline void Object::add_array_field(int32_t value) {
  _internal_add_array_field(value);
  // @@protoc_insertion_point(field_add:proto.Object.array_field)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Object::_internal_array_field() const {
  return _impl_.array_field_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Object::array_field() const {
  // @@protoc_insertion_point(field_list:proto.Object.array_field)
  return _internal_array_field();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Object::_internal_mutable_array_field() {
  return &_impl_.array_field_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Object::mutable_array_field() {
  // @@protoc_insertion_point(field_mutable_list:proto.Object.array_field)
  return _internal_mutable_array_field();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fobject_2eproto
