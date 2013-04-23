// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AllWheelState.proto

#ifndef PROTOBUF_AllWheelState_2eproto__INCLUDED
#define PROTOBUF_AllWheelState_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace lunabotics {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_AllWheelState_2eproto();
void protobuf_AssignDesc_AllWheelState_2eproto();
void protobuf_ShutdownFile_AllWheelState_2eproto();

class AllWheelState;
class AllWheelState_Wheels;

// ===================================================================

class AllWheelState_Wheels : public ::google::protobuf::Message {
 public:
  AllWheelState_Wheels();
  virtual ~AllWheelState_Wheels();

  AllWheelState_Wheels(const AllWheelState_Wheels& from);

  inline AllWheelState_Wheels& operator=(const AllWheelState_Wheels& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AllWheelState_Wheels& default_instance();

  void Swap(AllWheelState_Wheels* other);

  // implements Message ----------------------------------------------

  AllWheelState_Wheels* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllWheelState_Wheels& from);
  void MergeFrom(const AllWheelState_Wheels& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float left_front = 1;
  inline bool has_left_front() const;
  inline void clear_left_front();
  static const int kLeftFrontFieldNumber = 1;
  inline float left_front() const;
  inline void set_left_front(float value);

  // required float right_front = 2;
  inline bool has_right_front() const;
  inline void clear_right_front();
  static const int kRightFrontFieldNumber = 2;
  inline float right_front() const;
  inline void set_right_front(float value);

  // required float left_rear = 3;
  inline bool has_left_rear() const;
  inline void clear_left_rear();
  static const int kLeftRearFieldNumber = 3;
  inline float left_rear() const;
  inline void set_left_rear(float value);

  // required float right_rear = 4;
  inline bool has_right_rear() const;
  inline void clear_right_rear();
  static const int kRightRearFieldNumber = 4;
  inline float right_rear() const;
  inline void set_right_rear(float value);

  // @@protoc_insertion_point(class_scope:lunabotics.AllWheelState.Wheels)
 private:
  inline void set_has_left_front();
  inline void clear_has_left_front();
  inline void set_has_right_front();
  inline void clear_has_right_front();
  inline void set_has_left_rear();
  inline void clear_has_left_rear();
  inline void set_has_right_rear();
  inline void clear_has_right_rear();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float left_front_;
  float right_front_;
  float left_rear_;
  float right_rear_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_AllWheelState_2eproto();
  friend void protobuf_AssignDesc_AllWheelState_2eproto();
  friend void protobuf_ShutdownFile_AllWheelState_2eproto();

  void InitAsDefaultInstance();
  static AllWheelState_Wheels* default_instance_;
};
// -------------------------------------------------------------------

class AllWheelState : public ::google::protobuf::Message {
 public:
  AllWheelState();
  virtual ~AllWheelState();

  AllWheelState(const AllWheelState& from);

  inline AllWheelState& operator=(const AllWheelState& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AllWheelState& default_instance();

  void Swap(AllWheelState* other);

  // implements Message ----------------------------------------------

  AllWheelState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllWheelState& from);
  void MergeFrom(const AllWheelState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef AllWheelState_Wheels Wheels;

  // accessors -------------------------------------------------------

  // required .lunabotics.AllWheelState.Wheels steering = 1;
  inline bool has_steering() const;
  inline void clear_steering();
  static const int kSteeringFieldNumber = 1;
  inline const ::lunabotics::AllWheelState_Wheels& steering() const;
  inline ::lunabotics::AllWheelState_Wheels* mutable_steering();
  inline ::lunabotics::AllWheelState_Wheels* release_steering();
  inline void set_allocated_steering(::lunabotics::AllWheelState_Wheels* steering);

  // required .lunabotics.AllWheelState.Wheels driving = 2;
  inline bool has_driving() const;
  inline void clear_driving();
  static const int kDrivingFieldNumber = 2;
  inline const ::lunabotics::AllWheelState_Wheels& driving() const;
  inline ::lunabotics::AllWheelState_Wheels* mutable_driving();
  inline ::lunabotics::AllWheelState_Wheels* release_driving();
  inline void set_allocated_driving(::lunabotics::AllWheelState_Wheels* driving);

  // @@protoc_insertion_point(class_scope:lunabotics.AllWheelState)
 private:
  inline void set_has_steering();
  inline void clear_has_steering();
  inline void set_has_driving();
  inline void clear_has_driving();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::lunabotics::AllWheelState_Wheels* steering_;
  ::lunabotics::AllWheelState_Wheels* driving_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_AllWheelState_2eproto();
  friend void protobuf_AssignDesc_AllWheelState_2eproto();
  friend void protobuf_ShutdownFile_AllWheelState_2eproto();

  void InitAsDefaultInstance();
  static AllWheelState* default_instance_;
};
// ===================================================================


// ===================================================================

// AllWheelState_Wheels

// required float left_front = 1;
inline bool AllWheelState_Wheels::has_left_front() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AllWheelState_Wheels::set_has_left_front() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AllWheelState_Wheels::clear_has_left_front() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AllWheelState_Wheels::clear_left_front() {
  left_front_ = 0;
  clear_has_left_front();
}
inline float AllWheelState_Wheels::left_front() const {
  return left_front_;
}
inline void AllWheelState_Wheels::set_left_front(float value) {
  set_has_left_front();
  left_front_ = value;
}

// required float right_front = 2;
inline bool AllWheelState_Wheels::has_right_front() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AllWheelState_Wheels::set_has_right_front() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AllWheelState_Wheels::clear_has_right_front() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AllWheelState_Wheels::clear_right_front() {
  right_front_ = 0;
  clear_has_right_front();
}
inline float AllWheelState_Wheels::right_front() const {
  return right_front_;
}
inline void AllWheelState_Wheels::set_right_front(float value) {
  set_has_right_front();
  right_front_ = value;
}

// required float left_rear = 3;
inline bool AllWheelState_Wheels::has_left_rear() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AllWheelState_Wheels::set_has_left_rear() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AllWheelState_Wheels::clear_has_left_rear() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AllWheelState_Wheels::clear_left_rear() {
  left_rear_ = 0;
  clear_has_left_rear();
}
inline float AllWheelState_Wheels::left_rear() const {
  return left_rear_;
}
inline void AllWheelState_Wheels::set_left_rear(float value) {
  set_has_left_rear();
  left_rear_ = value;
}

// required float right_rear = 4;
inline bool AllWheelState_Wheels::has_right_rear() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AllWheelState_Wheels::set_has_right_rear() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AllWheelState_Wheels::clear_has_right_rear() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AllWheelState_Wheels::clear_right_rear() {
  right_rear_ = 0;
  clear_has_right_rear();
}
inline float AllWheelState_Wheels::right_rear() const {
  return right_rear_;
}
inline void AllWheelState_Wheels::set_right_rear(float value) {
  set_has_right_rear();
  right_rear_ = value;
}

// -------------------------------------------------------------------

// AllWheelState

// required .lunabotics.AllWheelState.Wheels steering = 1;
inline bool AllWheelState::has_steering() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AllWheelState::set_has_steering() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AllWheelState::clear_has_steering() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AllWheelState::clear_steering() {
  if (steering_ != NULL) steering_->::lunabotics::AllWheelState_Wheels::Clear();
  clear_has_steering();
}
inline const ::lunabotics::AllWheelState_Wheels& AllWheelState::steering() const {
  return steering_ != NULL ? *steering_ : *default_instance_->steering_;
}
inline ::lunabotics::AllWheelState_Wheels* AllWheelState::mutable_steering() {
  set_has_steering();
  if (steering_ == NULL) steering_ = new ::lunabotics::AllWheelState_Wheels;
  return steering_;
}
inline ::lunabotics::AllWheelState_Wheels* AllWheelState::release_steering() {
  clear_has_steering();
  ::lunabotics::AllWheelState_Wheels* temp = steering_;
  steering_ = NULL;
  return temp;
}
inline void AllWheelState::set_allocated_steering(::lunabotics::AllWheelState_Wheels* steering) {
  delete steering_;
  steering_ = steering;
  if (steering) {
    set_has_steering();
  } else {
    clear_has_steering();
  }
}

// required .lunabotics.AllWheelState.Wheels driving = 2;
inline bool AllWheelState::has_driving() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AllWheelState::set_has_driving() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AllWheelState::clear_has_driving() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AllWheelState::clear_driving() {
  if (driving_ != NULL) driving_->::lunabotics::AllWheelState_Wheels::Clear();
  clear_has_driving();
}
inline const ::lunabotics::AllWheelState_Wheels& AllWheelState::driving() const {
  return driving_ != NULL ? *driving_ : *default_instance_->driving_;
}
inline ::lunabotics::AllWheelState_Wheels* AllWheelState::mutable_driving() {
  set_has_driving();
  if (driving_ == NULL) driving_ = new ::lunabotics::AllWheelState_Wheels;
  return driving_;
}
inline ::lunabotics::AllWheelState_Wheels* AllWheelState::release_driving() {
  clear_has_driving();
  ::lunabotics::AllWheelState_Wheels* temp = driving_;
  driving_ = NULL;
  return temp;
}
inline void AllWheelState::set_allocated_driving(::lunabotics::AllWheelState_Wheels* driving) {
  delete driving_;
  driving_ = driving;
  if (driving) {
    set_has_driving();
  } else {
    clear_has_driving();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lunabotics

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AllWheelState_2eproto__INCLUDED
