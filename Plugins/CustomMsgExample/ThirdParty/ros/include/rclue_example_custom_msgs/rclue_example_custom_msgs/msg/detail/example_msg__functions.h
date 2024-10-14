// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__FUNCTIONS_H_
#define RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rclue_example_custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rclue_example_custom_msgs/msg/detail/example_msg__struct.h"

/// Initialize msg/ExampleMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rclue_example_custom_msgs__msg__ExampleMsg
 * )) before or use
 * rclue_example_custom_msgs__msg__ExampleMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__init(rclue_example_custom_msgs__msg__ExampleMsg * msg);

/// Finalize msg/ExampleMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
void
rclue_example_custom_msgs__msg__ExampleMsg__fini(rclue_example_custom_msgs__msg__ExampleMsg * msg);

/// Create msg/ExampleMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rclue_example_custom_msgs__msg__ExampleMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
rclue_example_custom_msgs__msg__ExampleMsg *
rclue_example_custom_msgs__msg__ExampleMsg__create();

/// Destroy msg/ExampleMsg message.
/**
 * It calls
 * rclue_example_custom_msgs__msg__ExampleMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
void
rclue_example_custom_msgs__msg__ExampleMsg__destroy(rclue_example_custom_msgs__msg__ExampleMsg * msg);

/// Check for msg/ExampleMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__are_equal(const rclue_example_custom_msgs__msg__ExampleMsg * lhs, const rclue_example_custom_msgs__msg__ExampleMsg * rhs);

/// Copy a msg/ExampleMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__copy(
  const rclue_example_custom_msgs__msg__ExampleMsg * input,
  rclue_example_custom_msgs__msg__ExampleMsg * output);

/// Initialize array of msg/ExampleMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * rclue_example_custom_msgs__msg__ExampleMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__init(rclue_example_custom_msgs__msg__ExampleMsg__Sequence * array, size_t size);

/// Finalize array of msg/ExampleMsg messages.
/**
 * It calls
 * rclue_example_custom_msgs__msg__ExampleMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
void
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__fini(rclue_example_custom_msgs__msg__ExampleMsg__Sequence * array);

/// Create array of msg/ExampleMsg messages.
/**
 * It allocates the memory for the array and calls
 * rclue_example_custom_msgs__msg__ExampleMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
rclue_example_custom_msgs__msg__ExampleMsg__Sequence *
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__create(size_t size);

/// Destroy array of msg/ExampleMsg messages.
/**
 * It calls
 * rclue_example_custom_msgs__msg__ExampleMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
void
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__destroy(rclue_example_custom_msgs__msg__ExampleMsg__Sequence * array);

/// Check for msg/ExampleMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__are_equal(const rclue_example_custom_msgs__msg__ExampleMsg__Sequence * lhs, const rclue_example_custom_msgs__msg__ExampleMsg__Sequence * rhs);

/// Copy an array of msg/ExampleMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclue_example_custom_msgs
bool
rclue_example_custom_msgs__msg__ExampleMsg__Sequence__copy(
  const rclue_example_custom_msgs__msg__ExampleMsg__Sequence * input,
  rclue_example_custom_msgs__msg__ExampleMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RCLUE_EXAMPLE_CUSTOM_MSGS__MSG__DETAIL__EXAMPLE_MSG__FUNCTIONS_H_
