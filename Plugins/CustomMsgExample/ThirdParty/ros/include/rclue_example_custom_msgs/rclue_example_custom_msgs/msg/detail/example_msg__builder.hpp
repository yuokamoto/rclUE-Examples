// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclue_example_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ExampleMsg_float_array_field
{
public:
  explicit Init_ExampleMsg_float_array_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  ::rclue_example_custom_msgs::msg::ExampleMsg float_array_field(::rclue_example_custom_msgs::msg::ExampleMsg::_float_array_field_type arg)
  {
    msg_.float_array_field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_int_array_field
{
public:
  explicit Init_ExampleMsg_int_array_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_float_array_field int_array_field(::rclue_example_custom_msgs::msg::ExampleMsg::_int_array_field_type arg)
  {
    msg_.int_array_field = std::move(arg);
    return Init_ExampleMsg_float_array_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_hitresult_field
{
public:
  explicit Init_ExampleMsg_hitresult_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_int_array_field hitresult_field(::rclue_example_custom_msgs::msg::ExampleMsg::_hitresult_field_type arg)
  {
    msg_.hitresult_field = std::move(arg);
    return Init_ExampleMsg_int_array_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_vector_field
{
public:
  explicit Init_ExampleMsg_vector_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_hitresult_field vector_field(::rclue_example_custom_msgs::msg::ExampleMsg::_vector_field_type arg)
  {
    msg_.vector_field = std::move(arg);
    return Init_ExampleMsg_hitresult_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_float_field
{
public:
  explicit Init_ExampleMsg_float_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_vector_field float_field(::rclue_example_custom_msgs::msg::ExampleMsg::_float_field_type arg)
  {
    msg_.float_field = std::move(arg);
    return Init_ExampleMsg_vector_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_int_field
{
public:
  explicit Init_ExampleMsg_int_field(::rclue_example_custom_msgs::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_float_field int_field(::rclue_example_custom_msgs::msg::ExampleMsg::_int_field_type arg)
  {
    msg_.int_field = std::move(arg);
    return Init_ExampleMsg_float_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_str_field
{
public:
  Init_ExampleMsg_str_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleMsg_int_field str_field(::rclue_example_custom_msgs::msg::ExampleMsg::_str_field_type arg)
  {
    msg_.str_field = std::move(arg);
    return Init_ExampleMsg_int_field(msg_);
  }

private:
  ::rclue_example_custom_msgs::msg::ExampleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclue_example_custom_msgs::msg::ExampleMsg>()
{
  return rclue_example_custom_msgs::msg::builder::Init_ExampleMsg_str_field();
}

}  // namespace rclue_example_custom_msgs

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
