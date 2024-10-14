// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg2.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__STRUCT_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'example_msg'
#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg2 __attribute__((deprecated))
#else
# define DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg2 __declspec(deprecated)
#endif

namespace rclue_example_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExampleMsg2_
{
  using Type = ExampleMsg2_<ContainerAllocator>;

  explicit ExampleMsg2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : example_msg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str_field = "";
      this->int_field = 0l;
      this->float_field = 0.0f;
    }
  }

  explicit ExampleMsg2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str_field(_alloc),
    example_msg(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str_field = "";
      this->int_field = 0l;
      this->float_field = 0.0f;
    }
  }

  // field types and members
  using _str_field_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _str_field_type str_field;
  using _int_field_type =
    int32_t;
  _int_field_type int_field;
  using _float_field_type =
    float;
  _float_field_type float_field;
  using _example_msg_type =
    rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>;
  _example_msg_type example_msg;

  // setters for named parameter idiom
  Type & set__str_field(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->str_field = _arg;
    return *this;
  }
  Type & set__int_field(
    const int32_t & _arg)
  {
    this->int_field = _arg;
    return *this;
  }
  Type & set__float_field(
    const float & _arg)
  {
    this->float_field = _arg;
    return *this;
  }
  Type & set__example_msg(
    const rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> & _arg)
  {
    this->example_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg2
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg2
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleMsg2_ & other) const
  {
    if (this->str_field != other.str_field) {
      return false;
    }
    if (this->int_field != other.int_field) {
      return false;
    }
    if (this->float_field != other.float_field) {
      return false;
    }
    if (this->example_msg != other.example_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleMsg2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleMsg2_

// alias to use template instance with default allocator
using ExampleMsg2 =
  rclue_example_custom_msgs::msg::ExampleMsg2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rclue_example_custom_msgs

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG2__STRUCT_HPP_
