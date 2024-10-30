// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample2.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__BUILDER_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclue_example_custom_msgs/msg/detail/custom_msg_example2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclue_example_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomMsgExample2_example_msg
{
public:
  explicit Init_CustomMsgExample2_example_msg(::rclue_example_custom_msgs::msg::CustomMsgExample2 & msg)
  : msg_(msg)
  {}
  ::rclue_example_custom_msgs::msg::CustomMsgExample2 example_msg(::rclue_example_custom_msgs::msg::CustomMsgExample2::_example_msg_type arg)
  {
    msg_.example_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::CustomMsgExample2 msg_;
};

class Init_CustomMsgExample2_float_field
{
public:
  explicit Init_CustomMsgExample2_float_field(::rclue_example_custom_msgs::msg::CustomMsgExample2 & msg)
  : msg_(msg)
  {}
  Init_CustomMsgExample2_example_msg float_field(::rclue_example_custom_msgs::msg::CustomMsgExample2::_float_field_type arg)
  {
    msg_.float_field = std::move(arg);
    return Init_CustomMsgExample2_example_msg(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::CustomMsgExample2 msg_;
};

class Init_CustomMsgExample2_int_field
{
public:
  explicit Init_CustomMsgExample2_int_field(::rclue_example_custom_msgs::msg::CustomMsgExample2 & msg)
  : msg_(msg)
  {}
  Init_CustomMsgExample2_float_field int_field(::rclue_example_custom_msgs::msg::CustomMsgExample2::_int_field_type arg)
  {
    msg_.int_field = std::move(arg);
    return Init_CustomMsgExample2_float_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::CustomMsgExample2 msg_;
};

class Init_CustomMsgExample2_str_field2
{
public:
  Init_CustomMsgExample2_str_field2()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMsgExample2_int_field str_field2(::rclue_example_custom_msgs::msg::CustomMsgExample2::_str_field2_type arg)
  {
    msg_.str_field2 = std::move(arg);
    return Init_CustomMsgExample2_int_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::CustomMsgExample2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclue_example_custom_msgs::msg::CustomMsgExample2>()
{
  return rclue_example_custom_msgs::msg::builder::Init_CustomMsgExample2_str_field2();
}

}  // namespace rclue_example_custom_msgs

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__CUSTOM_MSG_EXAMPLE2__BUILDER_HPP_
