// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ShapeInfo in the package custom_msgs.
typedef struct custom_msgs__msg__ShapeInfo
{
  int16_t sides;
  int32_t angle_sum;
} custom_msgs__msg__ShapeInfo;

// Struct for a sequence of custom_msgs__msg__ShapeInfo.
typedef struct custom_msgs__msg__ShapeInfo__Sequence
{
  custom_msgs__msg__ShapeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ShapeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_H_
