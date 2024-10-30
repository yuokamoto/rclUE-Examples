// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example2__rosidl_typesupport_introspection_c.h"
#include "rclue_example_custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example2__functions.h"
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example2__struct.h"


// Include directives for member types
// Member `str_field2`
#include "rosidl_runtime_c/string_functions.h"
// Member `example_msg`
#include "rclue_example_custom_msgs/msg/custom_msg_example.h"
// Member `example_msg`
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rclue_example_custom_msgs__msg__CustomMsgExample2__init(message_memory);
}

void rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_fini_function(void * message_memory)
{
  rclue_example_custom_msgs__msg__CustomMsgExample2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_member_array[4] = {
  {
    "str_field2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__CustomMsgExample2, str_field2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__CustomMsgExample2, int_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__CustomMsgExample2, float_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "example_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__CustomMsgExample2, example_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_members = {
  "rclue_example_custom_msgs__msg",  // message namespace
  "CustomMsgExample2",  // message name
  4,  // number of fields
  sizeof(rclue_example_custom_msgs__msg__CustomMsgExample2),
  rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_member_array,  // message members
  rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_init_function,  // function to initialize message memory (memory has to be allocated)
  rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_type_support_handle = {
  0,
  &rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rclue_example_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclue_example_custom_msgs, msg, CustomMsgExample2)() {
  rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclue_example_custom_msgs, msg, CustomMsgExample)();
  if (!rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_type_support_handle.typesupport_identifier) {
    rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rclue_example_custom_msgs__msg__CustomMsgExample2__rosidl_typesupport_introspection_c__CustomMsgExample2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
