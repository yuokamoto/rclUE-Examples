// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_

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
// Member 'int_array_field'
// Member 'float_array_field'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ExampleMsg in the package rclue_example_custom_msgs.
typedef struct rclue_example_custom_msgs__msg__ExampleMsg
{
  rosidl_runtime_c__String str_field;
  int32_t int_field;
  float float_field;
  geometry_msgs__msg__Vector3 vector_field;
  rosidl_runtime_c__int32__Sequence int_array_field;
  rosidl_runtime_c__float__Sequence float_array_field;
} rclue_example_custom_msgs__msg__ExampleMsg;

// Struct for a sequence of rclue_example_custom_msgs__msg__ExampleMsg.
typedef struct rclue_example_custom_msgs__msg__ExampleMsg__Sequence
{
  rclue_example_custom_msgs__msg__ExampleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclue_example_custom_msgs__msg__ExampleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
