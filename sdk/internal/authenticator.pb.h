// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authenticator.proto

#ifndef PROTOBUF_authenticator_2eproto__INCLUDED
#define PROTOBUF_authenticator_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_authenticator_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCredentialsImpl();
void InitDefaultsCredentials();
void InitDefaultsAuthenticateRequestImpl();
void InitDefaultsAuthenticateRequest();
void InitDefaultsAuthenticateResponseImpl();
void InitDefaultsAuthenticateResponse();
inline void InitDefaults() {
  InitDefaultsCredentials();
  InitDefaultsAuthenticateRequest();
  InitDefaultsAuthenticateResponse();
}
}  // namespace protobuf_authenticator_2eproto
namespace dbauth {
namespace authenticator {
namespace messages {
class AuthenticateRequest;
class AuthenticateRequestDefaultTypeInternal;
extern AuthenticateRequestDefaultTypeInternal _AuthenticateRequest_default_instance_;
class AuthenticateResponse;
class AuthenticateResponseDefaultTypeInternal;
extern AuthenticateResponseDefaultTypeInternal _AuthenticateResponse_default_instance_;
class Credentials;
class CredentialsDefaultTypeInternal;
extern CredentialsDefaultTypeInternal _Credentials_default_instance_;
}  // namespace messages
}  // namespace authenticator
}  // namespace dbauth
namespace dbauth {
namespace authenticator {
namespace messages {

enum AuthenticateResponse_Status {
  AuthenticateResponse_Status_ERROR = 0,
  AuthenticateResponse_Status_SUCCESS = 1,
  AuthenticateResponse_Status_AuthenticateResponse_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AuthenticateResponse_Status_AuthenticateResponse_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AuthenticateResponse_Status_IsValid(int value);
const AuthenticateResponse_Status AuthenticateResponse_Status_Status_MIN = AuthenticateResponse_Status_ERROR;
const AuthenticateResponse_Status AuthenticateResponse_Status_Status_MAX = AuthenticateResponse_Status_SUCCESS;
const int AuthenticateResponse_Status_Status_ARRAYSIZE = AuthenticateResponse_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* AuthenticateResponse_Status_descriptor();
inline const ::std::string& AuthenticateResponse_Status_Name(AuthenticateResponse_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    AuthenticateResponse_Status_descriptor(), value);
}
inline bool AuthenticateResponse_Status_Parse(
    const ::std::string& name, AuthenticateResponse_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AuthenticateResponse_Status>(
    AuthenticateResponse_Status_descriptor(), name, value);
}
// ===================================================================

class Credentials : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.messages.Credentials) */ {
 public:
  Credentials();
  virtual ~Credentials();

  Credentials(const Credentials& from);

  inline Credentials& operator=(const Credentials& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Credentials(Credentials&& from) noexcept
    : Credentials() {
    *this = ::std::move(from);
  }

  inline Credentials& operator=(Credentials&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Credentials& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Credentials* internal_default_instance() {
    return reinterpret_cast<const Credentials*>(
               &_Credentials_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Credentials* other);
  friend void swap(Credentials& a, Credentials& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Credentials* New() const PROTOBUF_FINAL { return New(NULL); }

  Credentials* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Credentials& from);
  void MergeFrom(const Credentials& from);
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
  void InternalSwap(Credentials* other);
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

  // string user = 1;
  void clear_user();
  static const int kUserFieldNumber = 1;
  const ::std::string& user() const;
  void set_user(const ::std::string& value);
  #if LANG_CXX11
  void set_user(::std::string&& value);
  #endif
  void set_user(const char* value);
  void set_user(const char* value, size_t size);
  ::std::string* mutable_user();
  ::std::string* release_user();
  void set_allocated_user(::std::string* user);

  // string hashedPassword = 2;
  void clear_hashedpassword();
  static const int kHashedPasswordFieldNumber = 2;
  const ::std::string& hashedpassword() const;
  void set_hashedpassword(const ::std::string& value);
  #if LANG_CXX11
  void set_hashedpassword(::std::string&& value);
  #endif
  void set_hashedpassword(const char* value);
  void set_hashedpassword(const char* value, size_t size);
  ::std::string* mutable_hashedpassword();
  ::std::string* release_hashedpassword();
  void set_allocated_hashedpassword(::std::string* hashedpassword);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.messages.Credentials)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr user_;
  ::google::protobuf::internal::ArenaStringPtr hashedpassword_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsCredentialsImpl();
};
// -------------------------------------------------------------------

class AuthenticateRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.messages.AuthenticateRequest) */ {
 public:
  AuthenticateRequest();
  virtual ~AuthenticateRequest();

  AuthenticateRequest(const AuthenticateRequest& from);

  inline AuthenticateRequest& operator=(const AuthenticateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuthenticateRequest(AuthenticateRequest&& from) noexcept
    : AuthenticateRequest() {
    *this = ::std::move(from);
  }

  inline AuthenticateRequest& operator=(AuthenticateRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthenticateRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthenticateRequest* internal_default_instance() {
    return reinterpret_cast<const AuthenticateRequest*>(
               &_AuthenticateRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(AuthenticateRequest* other);
  friend void swap(AuthenticateRequest& a, AuthenticateRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuthenticateRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  AuthenticateRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AuthenticateRequest& from);
  void MergeFrom(const AuthenticateRequest& from);
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
  void InternalSwap(AuthenticateRequest* other);
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

  // string identity = 1;
  void clear_identity();
  static const int kIdentityFieldNumber = 1;
  const ::std::string& identity() const;
  void set_identity(const ::std::string& value);
  #if LANG_CXX11
  void set_identity(::std::string&& value);
  #endif
  void set_identity(const char* value);
  void set_identity(const char* value, size_t size);
  ::std::string* mutable_identity();
  ::std::string* release_identity();
  void set_allocated_identity(::std::string* identity);

  // string salt = 2;
  void clear_salt();
  static const int kSaltFieldNumber = 2;
  const ::std::string& salt() const;
  void set_salt(const ::std::string& value);
  #if LANG_CXX11
  void set_salt(::std::string&& value);
  #endif
  void set_salt(const char* value);
  void set_salt(const char* value, size_t size);
  ::std::string* mutable_salt();
  ::std::string* release_salt();
  void set_allocated_salt(::std::string* salt);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.messages.AuthenticateRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr identity_;
  ::google::protobuf::internal::ArenaStringPtr salt_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsAuthenticateRequestImpl();
};
// -------------------------------------------------------------------

class AuthenticateResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.messages.AuthenticateResponse) */ {
 public:
  AuthenticateResponse();
  virtual ~AuthenticateResponse();

  AuthenticateResponse(const AuthenticateResponse& from);

  inline AuthenticateResponse& operator=(const AuthenticateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuthenticateResponse(AuthenticateResponse&& from) noexcept
    : AuthenticateResponse() {
    *this = ::std::move(from);
  }

  inline AuthenticateResponse& operator=(AuthenticateResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthenticateResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthenticateResponse* internal_default_instance() {
    return reinterpret_cast<const AuthenticateResponse*>(
               &_AuthenticateResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(AuthenticateResponse* other);
  friend void swap(AuthenticateResponse& a, AuthenticateResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuthenticateResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  AuthenticateResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AuthenticateResponse& from);
  void MergeFrom(const AuthenticateResponse& from);
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
  void InternalSwap(AuthenticateResponse* other);
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

  typedef AuthenticateResponse_Status Status;
  static const Status ERROR =
    AuthenticateResponse_Status_ERROR;
  static const Status SUCCESS =
    AuthenticateResponse_Status_SUCCESS;
  static inline bool Status_IsValid(int value) {
    return AuthenticateResponse_Status_IsValid(value);
  }
  static const Status Status_MIN =
    AuthenticateResponse_Status_Status_MIN;
  static const Status Status_MAX =
    AuthenticateResponse_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    AuthenticateResponse_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return AuthenticateResponse_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return AuthenticateResponse_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return AuthenticateResponse_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // .dbauth.authenticator.messages.Credentials credentials = 3;
  bool has_credentials() const;
  void clear_credentials();
  static const int kCredentialsFieldNumber = 3;
  const ::dbauth::authenticator::messages::Credentials& credentials() const;
  ::dbauth::authenticator::messages::Credentials* release_credentials();
  ::dbauth::authenticator::messages::Credentials* mutable_credentials();
  void set_allocated_credentials(::dbauth::authenticator::messages::Credentials* credentials);

  // .dbauth.authenticator.messages.AuthenticateResponse.Status status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::dbauth::authenticator::messages::AuthenticateResponse_Status status() const;
  void set_status(::dbauth::authenticator::messages::AuthenticateResponse_Status value);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.messages.AuthenticateResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::dbauth::authenticator::messages::Credentials* credentials_;
  int status_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsAuthenticateResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Credentials

// string user = 1;
inline void Credentials::clear_user() {
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Credentials::user() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.Credentials.user)
  return user_.GetNoArena();
}
inline void Credentials::set_user(const ::std::string& value) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.Credentials.user)
}
#if LANG_CXX11
inline void Credentials::set_user(::std::string&& value) {
  
  user_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.messages.Credentials.user)
}
#endif
inline void Credentials::set_user(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.messages.Credentials.user)
}
inline void Credentials::set_user(const char* value, size_t size) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.messages.Credentials.user)
}
inline ::std::string* Credentials::mutable_user() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.Credentials.user)
  return user_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Credentials::release_user() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.Credentials.user)
  
  return user_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_allocated_user(::std::string* user) {
  if (user != NULL) {
    
  } else {
    
  }
  user_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.Credentials.user)
}

// string hashedPassword = 2;
inline void Credentials::clear_hashedpassword() {
  hashedpassword_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Credentials::hashedpassword() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.Credentials.hashedPassword)
  return hashedpassword_.GetNoArena();
}
inline void Credentials::set_hashedpassword(const ::std::string& value) {
  
  hashedpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.Credentials.hashedPassword)
}
#if LANG_CXX11
inline void Credentials::set_hashedpassword(::std::string&& value) {
  
  hashedpassword_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.messages.Credentials.hashedPassword)
}
#endif
inline void Credentials::set_hashedpassword(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  hashedpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.messages.Credentials.hashedPassword)
}
inline void Credentials::set_hashedpassword(const char* value, size_t size) {
  
  hashedpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.messages.Credentials.hashedPassword)
}
inline ::std::string* Credentials::mutable_hashedpassword() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.Credentials.hashedPassword)
  return hashedpassword_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Credentials::release_hashedpassword() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.Credentials.hashedPassword)
  
  return hashedpassword_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_allocated_hashedpassword(::std::string* hashedpassword) {
  if (hashedpassword != NULL) {
    
  } else {
    
  }
  hashedpassword_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hashedpassword);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.Credentials.hashedPassword)
}

// -------------------------------------------------------------------

// AuthenticateRequest

// string identity = 1;
inline void AuthenticateRequest::clear_identity() {
  identity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthenticateRequest::identity() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.AuthenticateRequest.identity)
  return identity_.GetNoArena();
}
inline void AuthenticateRequest::set_identity(const ::std::string& value) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.AuthenticateRequest.identity)
}
#if LANG_CXX11
inline void AuthenticateRequest::set_identity(::std::string&& value) {
  
  identity_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.messages.AuthenticateRequest.identity)
}
#endif
inline void AuthenticateRequest::set_identity(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.messages.AuthenticateRequest.identity)
}
inline void AuthenticateRequest::set_identity(const char* value, size_t size) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.messages.AuthenticateRequest.identity)
}
inline ::std::string* AuthenticateRequest::mutable_identity() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.AuthenticateRequest.identity)
  return identity_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthenticateRequest::release_identity() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.AuthenticateRequest.identity)
  
  return identity_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthenticateRequest::set_allocated_identity(::std::string* identity) {
  if (identity != NULL) {
    
  } else {
    
  }
  identity_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identity);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.AuthenticateRequest.identity)
}

// string salt = 2;
inline void AuthenticateRequest::clear_salt() {
  salt_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthenticateRequest::salt() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.AuthenticateRequest.salt)
  return salt_.GetNoArena();
}
inline void AuthenticateRequest::set_salt(const ::std::string& value) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.AuthenticateRequest.salt)
}
#if LANG_CXX11
inline void AuthenticateRequest::set_salt(::std::string&& value) {
  
  salt_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.messages.AuthenticateRequest.salt)
}
#endif
inline void AuthenticateRequest::set_salt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.messages.AuthenticateRequest.salt)
}
inline void AuthenticateRequest::set_salt(const char* value, size_t size) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.messages.AuthenticateRequest.salt)
}
inline ::std::string* AuthenticateRequest::mutable_salt() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.AuthenticateRequest.salt)
  return salt_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthenticateRequest::release_salt() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.AuthenticateRequest.salt)
  
  return salt_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthenticateRequest::set_allocated_salt(::std::string* salt) {
  if (salt != NULL) {
    
  } else {
    
  }
  salt_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), salt);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.AuthenticateRequest.salt)
}

// -------------------------------------------------------------------

// AuthenticateResponse

// .dbauth.authenticator.messages.AuthenticateResponse.Status status = 1;
inline void AuthenticateResponse::clear_status() {
  status_ = 0;
}
inline ::dbauth::authenticator::messages::AuthenticateResponse_Status AuthenticateResponse::status() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.AuthenticateResponse.status)
  return static_cast< ::dbauth::authenticator::messages::AuthenticateResponse_Status >(status_);
}
inline void AuthenticateResponse::set_status(::dbauth::authenticator::messages::AuthenticateResponse_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.AuthenticateResponse.status)
}

// string message = 2;
inline void AuthenticateResponse::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthenticateResponse::message() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.AuthenticateResponse.message)
  return message_.GetNoArena();
}
inline void AuthenticateResponse::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.messages.AuthenticateResponse.message)
}
#if LANG_CXX11
inline void AuthenticateResponse::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.messages.AuthenticateResponse.message)
}
#endif
inline void AuthenticateResponse::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.messages.AuthenticateResponse.message)
}
inline void AuthenticateResponse::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.messages.AuthenticateResponse.message)
}
inline ::std::string* AuthenticateResponse::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.AuthenticateResponse.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthenticateResponse::release_message() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.AuthenticateResponse.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthenticateResponse::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.AuthenticateResponse.message)
}

// .dbauth.authenticator.messages.Credentials credentials = 3;
inline bool AuthenticateResponse::has_credentials() const {
  return this != internal_default_instance() && credentials_ != NULL;
}
inline void AuthenticateResponse::clear_credentials() {
  if (GetArenaNoVirtual() == NULL && credentials_ != NULL) {
    delete credentials_;
  }
  credentials_ = NULL;
}
inline const ::dbauth::authenticator::messages::Credentials& AuthenticateResponse::credentials() const {
  const ::dbauth::authenticator::messages::Credentials* p = credentials_;
  // @@protoc_insertion_point(field_get:dbauth.authenticator.messages.AuthenticateResponse.credentials)
  return p != NULL ? *p : *reinterpret_cast<const ::dbauth::authenticator::messages::Credentials*>(
      &::dbauth::authenticator::messages::_Credentials_default_instance_);
}
inline ::dbauth::authenticator::messages::Credentials* AuthenticateResponse::release_credentials() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.messages.AuthenticateResponse.credentials)
  
  ::dbauth::authenticator::messages::Credentials* temp = credentials_;
  credentials_ = NULL;
  return temp;
}
inline ::dbauth::authenticator::messages::Credentials* AuthenticateResponse::mutable_credentials() {
  
  if (credentials_ == NULL) {
    credentials_ = new ::dbauth::authenticator::messages::Credentials;
  }
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.messages.AuthenticateResponse.credentials)
  return credentials_;
}
inline void AuthenticateResponse::set_allocated_credentials(::dbauth::authenticator::messages::Credentials* credentials) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete credentials_;
  }
  if (credentials) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      credentials = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, credentials, submessage_arena);
    }
    
  } else {
    
  }
  credentials_ = credentials;
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.messages.AuthenticateResponse.credentials)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace authenticator
}  // namespace dbauth

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::dbauth::authenticator::messages::AuthenticateResponse_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::dbauth::authenticator::messages::AuthenticateResponse_Status>() {
  return ::dbauth::authenticator::messages::AuthenticateResponse_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_authenticator_2eproto__INCLUDED
