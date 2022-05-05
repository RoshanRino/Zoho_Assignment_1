// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kart.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_kart_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_kart_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_kart_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_kart_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_kart_2eproto;
namespace KartData {
class Product;
struct ProductDefaultTypeInternal;
extern ProductDefaultTypeInternal _Product_default_instance_;
class Products;
struct ProductsDefaultTypeInternal;
extern ProductsDefaultTypeInternal _Products_default_instance_;
}  // namespace KartData
PROTOBUF_NAMESPACE_OPEN
template<> ::KartData::Product* Arena::CreateMaybeMessage<::KartData::Product>(Arena*);
template<> ::KartData::Products* Arena::CreateMaybeMessage<::KartData::Products>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace KartData {

// ===================================================================

class Product final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KartData.Product) */ {
 public:
  inline Product() : Product(nullptr) {}
  ~Product() override;
  explicit PROTOBUF_CONSTEXPR Product(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Product(const Product& from);
  Product(Product&& from) noexcept
    : Product() {
    *this = ::std::move(from);
  }

  inline Product& operator=(const Product& from) {
    CopyFrom(from);
    return *this;
  }
  inline Product& operator=(Product&& from) noexcept {
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
  static const Product& default_instance() {
    return *internal_default_instance();
  }
  static inline const Product* internal_default_instance() {
    return reinterpret_cast<const Product*>(
               &_Product_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Product& a, Product& b) {
    a.Swap(&b);
  }
  inline void Swap(Product* other) {
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
  void UnsafeArenaSwap(Product* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Product* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Product>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Product& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Product& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Product* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KartData.Product";
  }
  protected:
  explicit Product(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCatagoryFieldNumber = 1,
    kBrandFieldNumber = 2,
    kModelFieldNumber = 3,
    kPriceFieldNumber = 4,
    kStockFieldNumber = 5,
  };
  // optional string catagory = 1;
  bool has_catagory() const;
  private:
  bool _internal_has_catagory() const;
  public:
  void clear_catagory();
  const std::string& catagory() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_catagory(ArgT0&& arg0, ArgT... args);
  std::string* mutable_catagory();
  PROTOBUF_NODISCARD std::string* release_catagory();
  void set_allocated_catagory(std::string* catagory);
  private:
  const std::string& _internal_catagory() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_catagory(const std::string& value);
  std::string* _internal_mutable_catagory();
  public:

  // optional string brand = 2;
  bool has_brand() const;
  private:
  bool _internal_has_brand() const;
  public:
  void clear_brand();
  const std::string& brand() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_brand(ArgT0&& arg0, ArgT... args);
  std::string* mutable_brand();
  PROTOBUF_NODISCARD std::string* release_brand();
  void set_allocated_brand(std::string* brand);
  private:
  const std::string& _internal_brand() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_brand(const std::string& value);
  std::string* _internal_mutable_brand();
  public:

  // optional string model = 3;
  bool has_model() const;
  private:
  bool _internal_has_model() const;
  public:
  void clear_model();
  const std::string& model() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_model(ArgT0&& arg0, ArgT... args);
  std::string* mutable_model();
  PROTOBUF_NODISCARD std::string* release_model();
  void set_allocated_model(std::string* model);
  private:
  const std::string& _internal_model() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_model(const std::string& value);
  std::string* _internal_mutable_model();
  public:

  // optional int32 price = 4;
  bool has_price() const;
  private:
  bool _internal_has_price() const;
  public:
  void clear_price();
  int32_t price() const;
  void set_price(int32_t value);
  private:
  int32_t _internal_price() const;
  void _internal_set_price(int32_t value);
  public:

  // optional int32 stock = 5;
  bool has_stock() const;
  private:
  bool _internal_has_stock() const;
  public:
  void clear_stock();
  int32_t stock() const;
  void set_stock(int32_t value);
  private:
  int32_t _internal_stock() const;
  void _internal_set_stock(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:KartData.Product)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr catagory_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr brand_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr model_;
  int32_t price_;
  int32_t stock_;
  friend struct ::TableStruct_kart_2eproto;
};
// -------------------------------------------------------------------

class Products final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KartData.Products) */ {
 public:
  inline Products() : Products(nullptr) {}
  ~Products() override;
  explicit PROTOBUF_CONSTEXPR Products(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Products(const Products& from);
  Products(Products&& from) noexcept
    : Products() {
    *this = ::std::move(from);
  }

  inline Products& operator=(const Products& from) {
    CopyFrom(from);
    return *this;
  }
  inline Products& operator=(Products&& from) noexcept {
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
  static const Products& default_instance() {
    return *internal_default_instance();
  }
  static inline const Products* internal_default_instance() {
    return reinterpret_cast<const Products*>(
               &_Products_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Products& a, Products& b) {
    a.Swap(&b);
  }
  inline void Swap(Products* other) {
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
  void UnsafeArenaSwap(Products* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Products* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Products>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Products& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Products& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Products* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KartData.Products";
  }
  protected:
  explicit Products(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProductFieldNumber = 1,
  };
  // repeated .KartData.Product product = 1;
  int product_size() const;
  private:
  int _internal_product_size() const;
  public:
  void clear_product();
  ::KartData::Product* mutable_product(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::KartData::Product >*
      mutable_product();
  private:
  const ::KartData::Product& _internal_product(int index) const;
  ::KartData::Product* _internal_add_product();
  public:
  const ::KartData::Product& product(int index) const;
  ::KartData::Product* add_product();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::KartData::Product >&
      product() const;

  // @@protoc_insertion_point(class_scope:KartData.Products)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::KartData::Product > product_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kart_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Product

// optional string catagory = 1;
inline bool Product::_internal_has_catagory() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Product::has_catagory() const {
  return _internal_has_catagory();
}
inline void Product::clear_catagory() {
  catagory_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Product::catagory() const {
  // @@protoc_insertion_point(field_get:KartData.Product.catagory)
  return _internal_catagory();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Product::set_catagory(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 catagory_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KartData.Product.catagory)
}
inline std::string* Product::mutable_catagory() {
  std::string* _s = _internal_mutable_catagory();
  // @@protoc_insertion_point(field_mutable:KartData.Product.catagory)
  return _s;
}
inline const std::string& Product::_internal_catagory() const {
  return catagory_.Get();
}
inline void Product::_internal_set_catagory(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  catagory_.Set(value, GetArenaForAllocation());
}
inline std::string* Product::_internal_mutable_catagory() {
  _has_bits_[0] |= 0x00000001u;
  return catagory_.Mutable(GetArenaForAllocation());
}
inline std::string* Product::release_catagory() {
  // @@protoc_insertion_point(field_release:KartData.Product.catagory)
  if (!_internal_has_catagory()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = catagory_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (catagory_.IsDefault()) {
    catagory_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Product::set_allocated_catagory(std::string* catagory) {
  if (catagory != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  catagory_.SetAllocated(catagory, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (catagory_.IsDefault()) {
    catagory_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KartData.Product.catagory)
}

// optional string brand = 2;
inline bool Product::_internal_has_brand() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Product::has_brand() const {
  return _internal_has_brand();
}
inline void Product::clear_brand() {
  brand_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Product::brand() const {
  // @@protoc_insertion_point(field_get:KartData.Product.brand)
  return _internal_brand();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Product::set_brand(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 brand_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KartData.Product.brand)
}
inline std::string* Product::mutable_brand() {
  std::string* _s = _internal_mutable_brand();
  // @@protoc_insertion_point(field_mutable:KartData.Product.brand)
  return _s;
}
inline const std::string& Product::_internal_brand() const {
  return brand_.Get();
}
inline void Product::_internal_set_brand(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  brand_.Set(value, GetArenaForAllocation());
}
inline std::string* Product::_internal_mutable_brand() {
  _has_bits_[0] |= 0x00000002u;
  return brand_.Mutable(GetArenaForAllocation());
}
inline std::string* Product::release_brand() {
  // @@protoc_insertion_point(field_release:KartData.Product.brand)
  if (!_internal_has_brand()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = brand_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (brand_.IsDefault()) {
    brand_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Product::set_allocated_brand(std::string* brand) {
  if (brand != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  brand_.SetAllocated(brand, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (brand_.IsDefault()) {
    brand_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KartData.Product.brand)
}

// optional string model = 3;
inline bool Product::_internal_has_model() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Product::has_model() const {
  return _internal_has_model();
}
inline void Product::clear_model() {
  model_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Product::model() const {
  // @@protoc_insertion_point(field_get:KartData.Product.model)
  return _internal_model();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Product::set_model(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 model_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KartData.Product.model)
}
inline std::string* Product::mutable_model() {
  std::string* _s = _internal_mutable_model();
  // @@protoc_insertion_point(field_mutable:KartData.Product.model)
  return _s;
}
inline const std::string& Product::_internal_model() const {
  return model_.Get();
}
inline void Product::_internal_set_model(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  model_.Set(value, GetArenaForAllocation());
}
inline std::string* Product::_internal_mutable_model() {
  _has_bits_[0] |= 0x00000004u;
  return model_.Mutable(GetArenaForAllocation());
}
inline std::string* Product::release_model() {
  // @@protoc_insertion_point(field_release:KartData.Product.model)
  if (!_internal_has_model()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  auto* p = model_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (model_.IsDefault()) {
    model_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Product::set_allocated_model(std::string* model) {
  if (model != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  model_.SetAllocated(model, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (model_.IsDefault()) {
    model_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KartData.Product.model)
}

// optional int32 price = 4;
inline bool Product::_internal_has_price() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Product::has_price() const {
  return _internal_has_price();
}
inline void Product::clear_price() {
  price_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline int32_t Product::_internal_price() const {
  return price_;
}
inline int32_t Product::price() const {
  // @@protoc_insertion_point(field_get:KartData.Product.price)
  return _internal_price();
}
inline void Product::_internal_set_price(int32_t value) {
  _has_bits_[0] |= 0x00000008u;
  price_ = value;
}
inline void Product::set_price(int32_t value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:KartData.Product.price)
}

// optional int32 stock = 5;
inline bool Product::_internal_has_stock() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Product::has_stock() const {
  return _internal_has_stock();
}
inline void Product::clear_stock() {
  stock_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline int32_t Product::_internal_stock() const {
  return stock_;
}
inline int32_t Product::stock() const {
  // @@protoc_insertion_point(field_get:KartData.Product.stock)
  return _internal_stock();
}
inline void Product::_internal_set_stock(int32_t value) {
  _has_bits_[0] |= 0x00000010u;
  stock_ = value;
}
inline void Product::set_stock(int32_t value) {
  _internal_set_stock(value);
  // @@protoc_insertion_point(field_set:KartData.Product.stock)
}

// -------------------------------------------------------------------

// Products

// repeated .KartData.Product product = 1;
inline int Products::_internal_product_size() const {
  return product_.size();
}
inline int Products::product_size() const {
  return _internal_product_size();
}
inline void Products::clear_product() {
  product_.Clear();
}
inline ::KartData::Product* Products::mutable_product(int index) {
  // @@protoc_insertion_point(field_mutable:KartData.Products.product)
  return product_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::KartData::Product >*
Products::mutable_product() {
  // @@protoc_insertion_point(field_mutable_list:KartData.Products.product)
  return &product_;
}
inline const ::KartData::Product& Products::_internal_product(int index) const {
  return product_.Get(index);
}
inline const ::KartData::Product& Products::product(int index) const {
  // @@protoc_insertion_point(field_get:KartData.Products.product)
  return _internal_product(index);
}
inline ::KartData::Product* Products::_internal_add_product() {
  return product_.Add();
}
inline ::KartData::Product* Products::add_product() {
  ::KartData::Product* _add = _internal_add_product();
  // @@protoc_insertion_point(field_add:KartData.Products.product)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::KartData::Product >&
Products::product() const {
  // @@protoc_insertion_point(field_list:KartData.Products.product)
  return product_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace KartData

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_kart_2eproto
