// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Twist.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Twist.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lunabotics {

namespace {

const ::google::protobuf::Descriptor* Twist_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Twist_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Twist_2eproto() {
  protobuf_AddDesc_Twist_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Twist.proto");
  GOOGLE_CHECK(file != NULL);
  Twist_descriptor_ = file->message_type(0);
  static const int Twist_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Twist, linear_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Twist, angular_),
  };
  Twist_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Twist_descriptor_,
      Twist::default_instance_,
      Twist_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Twist, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Twist, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Twist));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Twist_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Twist_descriptor_, &Twist::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Twist_2eproto() {
  delete Twist::default_instance_;
  delete Twist_reflection_;
}

void protobuf_AddDesc_Twist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Twist.proto\022\nlunabotics\"(\n\005Twist\022\016\n\006li"
    "near\030\001 \002(\002\022\017\n\007angular\030\002 \002(\002", 67);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Twist.proto", &protobuf_RegisterTypes);
  Twist::default_instance_ = new Twist();
  Twist::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Twist_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Twist_2eproto {
  StaticDescriptorInitializer_Twist_2eproto() {
    protobuf_AddDesc_Twist_2eproto();
  }
} static_descriptor_initializer_Twist_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Twist::kLinearFieldNumber;
const int Twist::kAngularFieldNumber;
#endif  // !_MSC_VER

Twist::Twist()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Twist::InitAsDefaultInstance() {
}

Twist::Twist(const Twist& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Twist::SharedCtor() {
  _cached_size_ = 0;
  linear_ = 0;
  angular_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Twist::~Twist() {
  SharedDtor();
}

void Twist::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Twist::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Twist::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Twist_descriptor_;
}

const Twist& Twist::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Twist_2eproto();
  return *default_instance_;
}

Twist* Twist::default_instance_ = NULL;

Twist* Twist::New() const {
  return new Twist;
}

void Twist::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    linear_ = 0;
    angular_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Twist::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float linear = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &linear_)));
          set_has_linear();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_angular;
        break;
      }

      // required float angular = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_angular:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &angular_)));
          set_has_angular();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Twist::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required float linear = 1;
  if (has_linear()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->linear(), output);
  }

  // required float angular = 2;
  if (has_angular()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->angular(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Twist::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required float linear = 1;
  if (has_linear()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->linear(), target);
  }

  // required float angular = 2;
  if (has_angular()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->angular(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Twist::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required float linear = 1;
    if (has_linear()) {
      total_size += 1 + 4;
    }

    // required float angular = 2;
    if (has_angular()) {
      total_size += 1 + 4;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Twist::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Twist* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Twist*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Twist::MergeFrom(const Twist& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_linear()) {
      set_linear(from.linear());
    }
    if (from.has_angular()) {
      set_angular(from.angular());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Twist::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Twist::CopyFrom(const Twist& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Twist::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Twist::Swap(Twist* other) {
  if (other != this) {
    std::swap(linear_, other->linear_);
    std::swap(angular_, other->angular_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Twist::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Twist_descriptor_;
  metadata.reflection = Twist_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lunabotics

// @@protoc_insertion_point(global_scope)
