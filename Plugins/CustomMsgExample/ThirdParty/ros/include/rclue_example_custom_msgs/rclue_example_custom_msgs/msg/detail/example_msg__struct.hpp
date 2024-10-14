// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vector_field'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg __attribute__((deprecated))
#else
# define DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg __declspec(deprecated)
#endif

namespace rclue_example_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExampleMsg_
{
  using Type = ExampleMsg_<ContainerAllocator>;

  explicit ExampleMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vector_field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str_field = "";
      this->int_field = 0l;
      this->float_field = 0.0f;
    }
  }

  explicit ExampleMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str_field(_alloc),
    vector_field(_alloc, _init)
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
  using _vector_field_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vector_field_type vector_field;
  using _int_array_field_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _int_array_field_type int_array_field;
  using _float_array_field_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float_array_field_type float_array_field;

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
  Type & set__vector_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vector_field = _arg;
    return *this;
  }
  Type & set__int_array_field(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->int_array_field = _arg;
    return *this;
  }
  Type & set__float_array_field(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float_array_field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclue_example_custom_msgs__msg__ExampleMsg
    std::shared_ptr<rclue_example_custom_msgs::msg::ExampleMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleMsg_ & other) const
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
    if (this->vector_field != other.vector_field) {
      return false;
    }
    if (this->int_array_field != other.int_array_field) {
      return false;
    }
    if (this->float_array_field != other.float_array_field) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleMsg_

// alias to use template instance with default allocator
using ExampleMsg =
  rclue_example_custom_msgs::msg::ExampleMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rclue_example_custom_msgs

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__STRUCT_HPP_
