// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclue_example_custom_msgs:msg/CustomMsgExample.idl
// generated code does not contain a copyright notice
#include "rclue_example_custom_msgs/msg/detail/custom_msg_example__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `str_field`
#include "rosidl_runtime_c/string_functions.h"
// Member `vector_field`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `entitystate_field`
#include "ue_msgs/msg/detail/entity_state__functions.h"
// Member `int_array_field`
// Member `float_array_field`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rclue_example_custom_msgs__msg__CustomMsgExample__init(rclue_example_custom_msgs__msg__CustomMsgExample * msg)
{
  if (!msg) {
    return false;
  }
  // str_field
  if (!rosidl_runtime_c__String__init(&msg->str_field)) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
    return false;
  }
  // int_field
  // float_field
  // vector_field
  if (!geometry_msgs__msg__Vector3__init(&msg->vector_field)) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
    return false;
  }
  // entitystate_field
  if (!ue_msgs__msg__EntityState__init(&msg->entitystate_field)) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
    return false;
  }
  // int_array_field
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->int_array_field, 0)) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
    return false;
  }
  // float_array_field
  if (!rosidl_runtime_c__float__Sequence__init(&msg->float_array_field, 0)) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
    return false;
  }
  return true;
}

void
rclue_example_custom_msgs__msg__CustomMsgExample__fini(rclue_example_custom_msgs__msg__CustomMsgExample * msg)
{
  if (!msg) {
    return;
  }
  // str_field
  rosidl_runtime_c__String__fini(&msg->str_field);
  // int_field
  // float_field
  // vector_field
  geometry_msgs__msg__Vector3__fini(&msg->vector_field);
  // entitystate_field
  ue_msgs__msg__EntityState__fini(&msg->entitystate_field);
  // int_array_field
  rosidl_runtime_c__int32__Sequence__fini(&msg->int_array_field);
  // float_array_field
  rosidl_runtime_c__float__Sequence__fini(&msg->float_array_field);
}

bool
rclue_example_custom_msgs__msg__CustomMsgExample__are_equal(const rclue_example_custom_msgs__msg__CustomMsgExample * lhs, const rclue_example_custom_msgs__msg__CustomMsgExample * rhs)
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
  // vector_field
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vector_field), &(rhs->vector_field)))
  {
    return false;
  }
  // entitystate_field
  if (!ue_msgs__msg__EntityState__are_equal(
      &(lhs->entitystate_field), &(rhs->entitystate_field)))
  {
    return false;
  }
  // int_array_field
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->int_array_field), &(rhs->int_array_field)))
  {
    return false;
  }
  // float_array_field
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->float_array_field), &(rhs->float_array_field)))
  {
    return false;
  }
  return true;
}

bool
rclue_example_custom_msgs__msg__CustomMsgExample__copy(
  const rclue_example_custom_msgs__msg__CustomMsgExample * input,
  rclue_example_custom_msgs__msg__CustomMsgExample * output)
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
  // vector_field
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vector_field), &(output->vector_field)))
  {
    return false;
  }
  // entitystate_field
  if (!ue_msgs__msg__EntityState__copy(
      &(input->entitystate_field), &(output->entitystate_field)))
  {
    return false;
  }
  // int_array_field
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->int_array_field), &(output->int_array_field)))
  {
    return false;
  }
  // float_array_field
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->float_array_field), &(output->float_array_field)))
  {
    return false;
  }
  return true;
}

rclue_example_custom_msgs__msg__CustomMsgExample *
rclue_example_custom_msgs__msg__CustomMsgExample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__CustomMsgExample * msg = (rclue_example_custom_msgs__msg__CustomMsgExample *)allocator.allocate(sizeof(rclue_example_custom_msgs__msg__CustomMsgExample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclue_example_custom_msgs__msg__CustomMsgExample));
  bool success = rclue_example_custom_msgs__msg__CustomMsgExample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclue_example_custom_msgs__msg__CustomMsgExample__destroy(rclue_example_custom_msgs__msg__CustomMsgExample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclue_example_custom_msgs__msg__CustomMsgExample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__init(rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__CustomMsgExample * data = NULL;

  if (size) {
    data = (rclue_example_custom_msgs__msg__CustomMsgExample *)allocator.zero_allocate(size, sizeof(rclue_example_custom_msgs__msg__CustomMsgExample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclue_example_custom_msgs__msg__CustomMsgExample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclue_example_custom_msgs__msg__CustomMsgExample__fini(&data[i - 1]);
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
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__fini(rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * array)
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
      rclue_example_custom_msgs__msg__CustomMsgExample__fini(&array->data[i]);
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

rclue_example_custom_msgs__msg__CustomMsgExample__Sequence *
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * array = (rclue_example_custom_msgs__msg__CustomMsgExample__Sequence *)allocator.allocate(sizeof(rclue_example_custom_msgs__msg__CustomMsgExample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__destroy(rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__are_equal(const rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * lhs, const rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rclue_example_custom_msgs__msg__CustomMsgExample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rclue_example_custom_msgs__msg__CustomMsgExample__Sequence__copy(
  const rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * input,
  rclue_example_custom_msgs__msg__CustomMsgExample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rclue_example_custom_msgs__msg__CustomMsgExample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rclue_example_custom_msgs__msg__CustomMsgExample * data =
      (rclue_example_custom_msgs__msg__CustomMsgExample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rclue_example_custom_msgs__msg__CustomMsgExample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rclue_example_custom_msgs__msg__CustomMsgExample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rclue_example_custom_msgs__msg__CustomMsgExample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
