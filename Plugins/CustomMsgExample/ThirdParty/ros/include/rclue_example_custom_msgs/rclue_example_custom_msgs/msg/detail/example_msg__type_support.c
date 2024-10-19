// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rclue_example_custom_msgs/msg/detail/example_msg__rosidl_typesupport_introspection_c.h"
#include "rclue_example_custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rclue_example_custom_msgs/msg/detail/example_msg__functions.h"
#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.h"


// Include directives for member types
// Member `str_field`
#include "rosidl_runtime_c/string_functions.h"
// Member `vector_field`
#include "geometry_msgs/msg/vector3.h"
// Member `vector_field`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `hitresult_field`
#include "ue_msgs/msg/hit_result.h"
// Member `hitresult_field`
#include "ue_msgs/msg/detail/hit_result__rosidl_typesupport_introspection_c.h"
// Member `int_array_field`
// Member `float_array_field`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rclue_example_custom_msgs__msg__ExampleMsg__init(message_memory);
}

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_fini_function(void * message_memory)
{
  rclue_example_custom_msgs__msg__ExampleMsg__fini(message_memory);
}

size_t rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__size_function__ExampleMsg__int_array_field(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__int_array_field(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__int_array_field(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__fetch_function__ExampleMsg__int_array_field(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__int_array_field(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__assign_function__ExampleMsg__int_array_field(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__int_array_field(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__resize_function__ExampleMsg__int_array_field(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__size_function__ExampleMsg__float_array_field(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__float_array_field(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__float_array_field(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__fetch_function__ExampleMsg__float_array_field(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__float_array_field(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__assign_function__ExampleMsg__float_array_field(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__float_array_field(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__resize_function__ExampleMsg__float_array_field(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array[7] = {
  {
    "str_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, str_field),  // bytes offset in struct
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
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, int_field),  // bytes offset in struct
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
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, float_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vector_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, vector_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hitresult_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, hitresult_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_array_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, int_array_field),  // bytes offset in struct
    NULL,  // default value
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__size_function__ExampleMsg__int_array_field,  // size() function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__int_array_field,  // get_const(index) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__int_array_field,  // get(index) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__fetch_function__ExampleMsg__int_array_field,  // fetch(index, &value) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__assign_function__ExampleMsg__int_array_field,  // assign(index, value) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__resize_function__ExampleMsg__int_array_field  // resize(index) function pointer
  },
  {
    "float_array_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs__msg__ExampleMsg, float_array_field),  // bytes offset in struct
    NULL,  // default value
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__size_function__ExampleMsg__float_array_field,  // size() function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_const_function__ExampleMsg__float_array_field,  // get_const(index) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__get_function__ExampleMsg__float_array_field,  // get(index) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__fetch_function__ExampleMsg__float_array_field,  // fetch(index, &value) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__assign_function__ExampleMsg__float_array_field,  // assign(index, value) function pointer
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__resize_function__ExampleMsg__float_array_field  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_members = {
  "rclue_example_custom_msgs__msg",  // message namespace
  "ExampleMsg",  // message name
  7,  // number of fields
  sizeof(rclue_example_custom_msgs__msg__ExampleMsg),
  rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array,  // message members
  rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle = {
  0,
  &rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rclue_example_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclue_example_custom_msgs, msg, ExampleMsg)() {
  rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, HitResult)();
  if (!rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle.typesupport_identifier) {
    rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rclue_example_custom_msgs__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
