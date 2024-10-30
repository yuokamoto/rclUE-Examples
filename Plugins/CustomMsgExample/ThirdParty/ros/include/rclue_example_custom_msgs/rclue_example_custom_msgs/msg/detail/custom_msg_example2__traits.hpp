// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample2.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__TRAITS_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rclue_example_custom_msgs/msg/detail/custom_msg_example2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'example_msg'
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example__traits.hpp"

namespace rclue_example_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMsgExample2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: str_field2
  {
    out << "str_field2: ";
    rosidl_generator_traits::value_to_yaml(msg.str_field2, out);
    out << ", ";
  }

  // member: int_field
  {
    out << "int_field: ";
    rosidl_generator_traits::value_to_yaml(msg.int_field, out);
    out << ", ";
  }

  // member: float_field
  {
    out << "float_field: ";
    rosidl_generator_traits::value_to_yaml(msg.float_field, out);
    out << ", ";
  }

  // member: example_msg
  {
    out << "example_msg: ";
    to_flow_style_yaml(msg.example_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMsgExample2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: str_field2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str_field2: ";
    rosidl_generator_traits::value_to_yaml(msg.str_field2, out);
    out << "\n";
  }

  // member: int_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_field: ";
    rosidl_generator_traits::value_to_yaml(msg.int_field, out);
    out << "\n";
  }

  // member: float_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_field: ";
    rosidl_generator_traits::value_to_yaml(msg.float_field, out);
    out << "\n";
  }

  // member: example_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "example_msg:\n";
    to_block_style_yaml(msg.example_msg, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMsgExample2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rclue_example_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rclue_example_custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rclue_example_custom_msgs::msg::CustomMsgExample2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  rclue_example_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rclue_example_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rclue_example_custom_msgs::msg::CustomMsgExample2 & msg)
{
  return rclue_example_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rclue_example_custom_msgs::msg::CustomMsgExample2>()
{
  return "rclue_example_custom_msgs::msg::CustomMsgExample2";
}

template<>
inline const char * name<rclue_example_custom_msgs::msg::CustomMsgExample2>()
{
  return "rclue_example_custom_msgs/msg/CustomMsgExample2";
}

template<>
struct has_fixed_size<rclue_example_custom_msgs::msg::CustomMsgExample2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclue_example_custom_msgs::msg::CustomMsgExample2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclue_example_custom_msgs::msg::CustomMsgExample2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__TRAITS_HPP_
