// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/shape_info__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/shape_info__functions.h"
#include "custom_msgs/msg/detail/shape_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__ShapeInfo__init(message_memory);
}

void ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_fini_function(void * message_memory)
{
  custom_msgs__msg__ShapeInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_member_array[2] = {
  {
    "sides",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__ShapeInfo, sides),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__ShapeInfo, angle_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_members = {
  "custom_msgs__msg",  // message namespace
  "ShapeInfo",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__ShapeInfo),
  ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_member_array,  // message members
  ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_type_support_handle = {
  0,
  &ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, ShapeInfo)() {
  if (!ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_type_support_handle.typesupport_identifier) {
    ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShapeInfo__rosidl_typesupport_introspection_c__ShapeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
