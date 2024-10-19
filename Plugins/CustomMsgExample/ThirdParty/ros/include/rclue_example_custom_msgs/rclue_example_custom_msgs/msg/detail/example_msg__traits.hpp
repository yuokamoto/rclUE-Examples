// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vector_field'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'hitresult_field'
#include "ue_msgs/msg/detail/hit_result__traits.hpp"

namespace rclue_example_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExampleMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: str_field
  {
    out << "str_field: ";
    rosidl_generator_traits::value_to_yaml(msg.str_field, out);
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

  // member: vector_field
  {
    out << "vector_field: ";
    to_flow_style_yaml(msg.vector_field, out);
    out << ", ";
  }

  // member: hitresult_field
  {
    out << "hitresult_field: ";
    to_flow_style_yaml(msg.hitresult_field, out);
    out << ", ";
  }

  // member: int_array_field
  {
    if (msg.int_array_field.size() == 0) {
      out << "int_array_field: []";
    } else {
      out << "int_array_field: [";
      size_t pending_items = msg.int_array_field.size();
      for (auto item : msg.int_array_field) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float_array_field
  {
    if (msg.float_array_field.size() == 0) {
      out << "float_array_field: []";
    } else {
      out << "float_array_field: [";
      size_t pending_items = msg.float_array_field.size();
      for (auto item : msg.float_array_field) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: str_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str_field: ";
    rosidl_generator_traits::value_to_yaml(msg.str_field, out);
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

  // member: vector_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vector_field:\n";
    to_block_style_yaml(msg.vector_field, out, indentation + 2);
  }

  // member: hitresult_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hitresult_field:\n";
    to_block_style_yaml(msg.hitresult_field, out, indentation + 2);
  }

  // member: int_array_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int_array_field.size() == 0) {
      out << "int_array_field: []\n";
    } else {
      out << "int_array_field:\n";
      for (auto item : msg.int_array_field) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float_array_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_array_field.size() == 0) {
      out << "float_array_field: []\n";
    } else {
      out << "float_array_field:\n";
      for (auto item : msg.float_array_field) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleMsg & msg, bool use_flow_style = false)
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
  const rclue_example_custom_msgs::msg::ExampleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rclue_example_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rclue_example_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rclue_example_custom_msgs::msg::ExampleMsg & msg)
{
  return rclue_example_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rclue_example_custom_msgs::msg::ExampleMsg>()
{
  return "rclue_example_custom_msgs::msg::ExampleMsg";
}

template<>
inline const char * name<rclue_example_custom_msgs::msg::ExampleMsg>()
{
  return "rclue_example_custom_msgs/msg/ExampleMsg";
}

template<>
struct has_fixed_size<rclue_example_custom_msgs::msg::ExampleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclue_example_custom_msgs::msg::ExampleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclue_example_custom_msgs::msg::ExampleMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
