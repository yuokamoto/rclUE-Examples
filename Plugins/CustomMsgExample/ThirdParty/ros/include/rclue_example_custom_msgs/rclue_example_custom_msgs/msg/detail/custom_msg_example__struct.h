// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE__STRUCT_H_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'str_field'
#include "rosidl_runtime_c/string.h"
// Member 'vector_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'entitystate_field'
#include "ue_msgs/msg/detail/entity_state__struct.h"
// Member 'int_array_field'
// Member 'float_array_field'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CustomMsgExample in the package rclue_example_custom_msgs.
typedef struct rclue_example_custom_msgs__msg__CustomMsgExample
{
  rosidl_runtime_c__String str_field;
  int32_t int_field;
  float float_field;
  geometry_msgs__msg__Vector3 vector_field;
  ue_msgs__msg__EntityState entitystate_field;
  rosidl_runtime_c__int32__Sequence int_array_field;
  rosidl_runtime_c__float__Sequence float_array_field;
} rclue_example_custom_msgs__msg__CustomMsgExample;

// Struct for a sequence of rclue_example_custom_msgs__msg__CustomMsgExample.
typedef struct rclue_example_custom_msgs__msg__CustomMsgExample__Sequence
{
  rclue_example_custom_msgs__msg__CustomMsgExample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclue_example_custom_msgs__msg__CustomMsgExample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE__STRUCT_H_
