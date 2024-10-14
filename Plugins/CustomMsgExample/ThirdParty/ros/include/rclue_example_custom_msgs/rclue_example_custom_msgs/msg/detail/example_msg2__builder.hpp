// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg2.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__BUILDER_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclue_example_custom_msgs/msg/detail/example_msg2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclue_example_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ExampleMsg2_example_msg
{
public:
  explicit Init_ExampleMsg2_example_msg(::rclue_example_custom_msgs::msg::ExampleMsg2 & msg)
  : msg_(msg)
  {}
  ::rclue_example_custom_msgs::msg::ExampleMsg2 example_msg(::rclue_example_custom_msgs::msg::ExampleMsg2::_example_msg_type arg)
  {
    msg_.example_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg2 msg_;
};

class Init_ExampleMsg2_float_field
{
public:
  explicit Init_ExampleMsg2_float_field(::rclue_example_custom_msgs::msg::ExampleMsg2 & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg2_example_msg float_field(::rclue_example_custom_msgs::msg::ExampleMsg2::_float_field_type arg)
  {
    msg_.float_field = std::move(arg);
    return Init_ExampleMsg2_example_msg(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg2 msg_;
};

class Init_ExampleMsg2_int_field
{
public:
  explicit Init_ExampleMsg2_int_field(::rclue_example_custom_msgs::msg::ExampleMsg2 & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg2_float_field int_field(::rclue_example_custom_msgs::msg::ExampleMsg2::_int_field_type arg)
  {
    msg_.int_field = std::move(arg);
    return Init_ExampleMsg2_float_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg2 msg_;
};

class Init_ExampleMsg2_str_field
{
public:
  Init_ExampleMsg2_str_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleMsg2_int_field str_field(::rclue_example_custom_msgs::msg::ExampleMsg2::_str_field_type arg)
  {
    msg_.str_field = std::move(arg);
    return Init_ExampleMsg2_int_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclue_example_custom_msgs::msg::ExampleMsg2>()
{
  return rclue_example_custom_msgs::msg::builder::Init_ExampleMsg2_str_field();
}

}  // namespace rclue_example_custom_msgs

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__BUILDER_HPP_
