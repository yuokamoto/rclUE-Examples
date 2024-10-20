// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample2.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__STRUCT_H_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'str_field2'
#include "rosidl_runtime_c/string.h"
// Member 'example_msg'
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example__struct.h"

/// Struct defined in msg/CustomMsgExample2 in the package rclue_example_custom_msgs.
typedef struct rclue_example_custom_msgs__msg__CustomMsgExample2
{
  rosidl_runtime_c__String str_field2;
  int32_t int_field;
  float float_field;
  rclue_example_custom_msgs__msg__CustomMsgExample example_msg;
} rclue_example_custom_msgs__msg__CustomMsgExample2;

// Struct for a sequence of rclue_example_custom_msgs__msg__CustomMsgExample2.
typedef struct rclue_example_custom_msgs__msg__CustomMsgExample2__Sequence
{
  rclue_example_custom_msgs__msg__CustomMsgExample2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclue_example_custom_msgs__msg__CustomMsgExample2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__STRUCT_H_
