// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclue_example_custom_msgs:msg/ExampleMsg2.idl
// generated code does not contain a copyright notice
#include "rclue_example_custom_msgs/msg/detail/example_msg2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `str_field`
#include "rosidl_runtime_c/string_functions.h"
// Member `example_msg`
#include "rclue_example_custom_msgs/msg/detail/example_msg__functions.h"

bool
rclue_example_custom_msgs__msg__ExampleMsg2__init(rclue_example_custom_msgs__msg__ExampleMsg2 * msg)
{
  if (!msg) {
    return false;
  }
  // str_field
  if (!rosidl_runtime_c__String__init(&msg->str_field)) {
    rclue_example_custom_msgs__msg__ExampleMsg2__fini(msg);
    return false;
  }
  // int_field
  // float_field
  // example_msg
  if (!rclue_example_custom_msgs__msg__ExampleMsg__init(&msg->example_msg)) {
    rclue_example_custom_msgs__msg__ExampleMsg2__fini(msg);
    return false;
  }
  return true;
}

void
rclue_example_custom_msgs__msg__ExampleMsg2__fini(rclue_example_custom_msgs__msg__ExampleMsg2 * msg)
{
  if (!msg) {
    return;
  }
  // str_field
  rosidl_runtime_c__String__fini(&msg->str_field);
  // int_field
  // float_field
  // example_msg
  rclue_example_custom_msgs__msg__ExampleMsg__fini(&msg->example_msg);
}

bool
rclue_example_custom_msgs__msg__ExampleMsg2__are_equal(const rclue_example_custom_msgs__msg__ExampleMsg2 * lhs, const rclue_example_custom_msgs__msg__ExampleMsg2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // str_field
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->str_field), &(rhs->str_field)))
  {
    return false;
  }
  // int_field
  if (lhs->int_field != rhs->int_field) {
    return false;
  }
  // float_field
  if (lhs->float_field != rhs->float_field) {
    return false;
  }
  // example_msg
  if (!rclue_example_custom_msgs__msg__ExampleMsg__are_equal(
      &(lhs->example_msg), &(rhs->example_msg)))
  {
    return false;
  }
  return true;
}

bool
rclue_example_custom_msgs__msg__ExampleMsg2__copy(
  const rclue_example_custom_msgs__msg__ExampleMsg2 * input,
  rclue_example_custom_msgs__msg__ExampleMsg2 * output)
{
  if (!input || !output) {
    return false;
  }
  // str_field
  if (!rosidl_runtime_c__String__copy(
      &(input->str_field), &(output->str_field)))
  {
    return false;
  }
  // int_field
  output->int_field = input->int_field;
  // float_field
  output->float_field = input->float_field;
  // example_msg
  if (!rclue_example_custom_msgs__msg__ExampleMsg__copy(
      &(input->example_msg), &(output->example_msg)))
  {
    return false;
  }
  return true;
}

rclue_example_custom_msgs__msg__ExampleMsg2 *
rclue_example_custom_msgs__msg__ExampleMsg2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__ExampleMsg2 * msg = (rclue_example_custom_msgs__msg__ExampleMsg2 *)allocator.allocate(sizeof(rclue_example_custom_msgs__msg__ExampleMsg2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclue_example_custom_msgs__msg__ExampleMsg2));
  bool success = rclue_example_custom_msgs__msg__ExampleMsg2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclue_example_custom_msgs__msg__ExampleMsg2__destroy(rclue_example_custom_msgs__msg__ExampleMsg2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclue_example_custom_msgs__msg__ExampleMsg2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__init(rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__ExampleMsg2 * data = NULL;

  if (size) {
    data = (rclue_example_custom_msgs__msg__ExampleMsg2 *)allocator.zero_allocate(size, sizeof(rclue_example_custom_msgs__msg__ExampleMsg2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclue_example_custom_msgs__msg__ExampleMsg2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclue_example_custom_msgs__msg__ExampleMsg2__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__fini(rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rclue_example_custom_msgs__msg__ExampleMsg2__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rclue_example_custom_msgs__msg__ExampleMsg2__Sequence *
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * array = (rclue_example_custom_msgs__msg__ExampleMsg2__Sequence *)allocator.allocate(sizeof(rclue_example_custom_msgs__msg__ExampleMsg2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__destroy(rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__are_equal(const rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * lhs, const rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rclue_example_custom_msgs__msg__ExampleMsg2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rclue_example_custom_msgs__msg__ExampleMsg2__Sequence__copy(
  const rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * input,
  rclue_example_custom_msgs__msg__ExampleMsg2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rclue_example_custom_msgs__msg__ExampleMsg2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rclue_example_custom_msgs__msg__ExampleMsg2 * data =
      (rclue_example_custom_msgs__msg__ExampleMsg2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rclue_example_custom_msgs__msg__ExampleMsg2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rclue_example_custom_msgs__msg__ExampleMsg2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rclue_example_custom_msgs__msg__ExampleMsg2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
