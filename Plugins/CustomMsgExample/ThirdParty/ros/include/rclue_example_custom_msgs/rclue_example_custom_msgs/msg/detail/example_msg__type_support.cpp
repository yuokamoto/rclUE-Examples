// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rclue_example_custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExampleMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rclue_example_custom_msgs::msg::ExampleMsg(_init);
}

void ExampleMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rclue_example_custom_msgs::msg::ExampleMsg *>(message_memory);
  typed_message->~ExampleMsg();
}

size_t size_function__ExampleMsg__int_array_field(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExampleMsg__int_array_field(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ExampleMsg__int_array_field(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExampleMsg__int_array_field(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ExampleMsg__int_array_field(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ExampleMsg__int_array_field(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ExampleMsg__int_array_field(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__ExampleMsg__int_array_field(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExampleMsg__float_array_field(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExampleMsg__float_array_field(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ExampleMsg__float_array_field(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExampleMsg__float_array_field(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ExampleMsg__float_array_field(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ExampleMsg__float_array_field(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ExampleMsg__float_array_field(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ExampleMsg__float_array_field(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExampleMsg_message_member_array[6] = {
  {
    "str_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, str_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, int_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, float_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vector_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, vector_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int_array_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, int_array_field),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExampleMsg__int_array_field,  // size() function pointer
    get_const_function__ExampleMsg__int_array_field,  // get_const(index) function pointer
    get_function__ExampleMsg__int_array_field,  // get(index) function pointer
    fetch_function__ExampleMsg__int_array_field,  // fetch(index, &value) function pointer
    assign_function__ExampleMsg__int_array_field,  // assign(index, value) function pointer
    resize_function__ExampleMsg__int_array_field  // resize(index) function pointer
  },
  {
    "float_array_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclue_example_custom_msgs::msg::ExampleMsg, float_array_field),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExampleMsg__float_array_field,  // size() function pointer
    get_const_function__ExampleMsg__float_array_field,  // get_const(index) function pointer
    get_function__ExampleMsg__float_array_field,  // get(index) function pointer
    fetch_function__ExampleMsg__float_array_field,  // fetch(index, &value) function pointer
    assign_function__ExampleMsg__float_array_field,  // assign(index, value) function pointer
    resize_function__ExampleMsg__float_array_field  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExampleMsg_message_members = {
  "rclue_example_custom_msgs::msg",  // message namespace
  "ExampleMsg",  // message name
  6,  // number of fields
  sizeof(rclue_example_custom_msgs::msg::ExampleMsg),
  ExampleMsg_message_member_array,  // message members
  ExampleMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ExampleMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExampleMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExampleMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rclue_example_custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rclue_example_custom_msgs::msg::ExampleMsg>()
{
  return &::rclue_example_custom_msgs::msg::rosidl_typesupport_introspection_cpp::ExampleMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rclue_example_custom_msgs, msg, ExampleMsg)() {
  return &::rclue_example_custom_msgs::msg::rosidl_typesupport_introspection_cpp::ExampleMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
