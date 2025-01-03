// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/shape_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/shape_info__struct.h"
#include "custom_msgs/msg/detail/shape_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ShapeInfo__ros_msg_type = custom_msgs__msg__ShapeInfo;

static bool _ShapeInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShapeInfo__ros_msg_type * ros_message = static_cast<const _ShapeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: sides
  {
    cdr << ros_message->sides;
  }

  // Field name: angle_sum
  {
    cdr << ros_message->angle_sum;
  }

  return true;
}

static bool _ShapeInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShapeInfo__ros_msg_type * ros_message = static_cast<_ShapeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: sides
  {
    cdr >> ros_message->sides;
  }

  // Field name: angle_sum
  {
    cdr >> ros_message->angle_sum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__ShapeInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShapeInfo__ros_msg_type * ros_message = static_cast<const _ShapeInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sides
  {
    size_t item_size = sizeof(ros_message->sides);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_sum
  {
    size_t item_size = sizeof(ros_message->angle_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ShapeInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__ShapeInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__ShapeInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sides
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: angle_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ShapeInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__ShapeInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ShapeInfo = {
  "custom_msgs::msg",
  "ShapeInfo",
  _ShapeInfo__cdr_serialize,
  _ShapeInfo__cdr_deserialize,
  _ShapeInfo__get_serialized_size,
  _ShapeInfo__max_serialized_size
};

static rosidl_message_type_support_t _ShapeInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShapeInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, ShapeInfo)() {
  return &_ShapeInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
