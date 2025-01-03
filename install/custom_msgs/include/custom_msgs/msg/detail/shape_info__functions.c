// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/shape_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__ShapeInfo__init(custom_msgs__msg__ShapeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // sides
  // angle_sum
  return true;
}

void
custom_msgs__msg__ShapeInfo__fini(custom_msgs__msg__ShapeInfo * msg)
{
  if (!msg) {
    return;
  }
  // sides
  // angle_sum
}

bool
custom_msgs__msg__ShapeInfo__are_equal(const custom_msgs__msg__ShapeInfo * lhs, const custom_msgs__msg__ShapeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sides
  if (lhs->sides != rhs->sides) {
    return false;
  }
  // angle_sum
  if (lhs->angle_sum != rhs->angle_sum) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ShapeInfo__copy(
  const custom_msgs__msg__ShapeInfo * input,
  custom_msgs__msg__ShapeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // sides
  output->sides = input->sides;
  // angle_sum
  output->angle_sum = input->angle_sum;
  return true;
}

custom_msgs__msg__ShapeInfo *
custom_msgs__msg__ShapeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ShapeInfo * msg = (custom_msgs__msg__ShapeInfo *)allocator.allocate(sizeof(custom_msgs__msg__ShapeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ShapeInfo));
  bool success = custom_msgs__msg__ShapeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ShapeInfo__destroy(custom_msgs__msg__ShapeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ShapeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ShapeInfo__Sequence__init(custom_msgs__msg__ShapeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ShapeInfo * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ShapeInfo *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ShapeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ShapeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ShapeInfo__fini(&data[i - 1]);
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
custom_msgs__msg__ShapeInfo__Sequence__fini(custom_msgs__msg__ShapeInfo__Sequence * array)
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
      custom_msgs__msg__ShapeInfo__fini(&array->data[i]);
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

custom_msgs__msg__ShapeInfo__Sequence *
custom_msgs__msg__ShapeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ShapeInfo__Sequence * array = (custom_msgs__msg__ShapeInfo__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ShapeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ShapeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ShapeInfo__Sequence__destroy(custom_msgs__msg__ShapeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ShapeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ShapeInfo__Sequence__are_equal(const custom_msgs__msg__ShapeInfo__Sequence * lhs, const custom_msgs__msg__ShapeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ShapeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ShapeInfo__Sequence__copy(
  const custom_msgs__msg__ShapeInfo__Sequence * input,
  custom_msgs__msg__ShapeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ShapeInfo);
    custom_msgs__msg__ShapeInfo * data =
      (custom_msgs__msg__ShapeInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ShapeInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ShapeInfo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ShapeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}