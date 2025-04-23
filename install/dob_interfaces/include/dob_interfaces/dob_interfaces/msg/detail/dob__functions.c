// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice
#include "dob_interfaces/msg/detail/dob__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dob_interfaces__msg__Dob__init(dob_interfaces__msg__Dob * msg)
{
  if (!msg) {
    return false;
  }
  // year
  // month
  // day
  return true;
}

void
dob_interfaces__msg__Dob__fini(dob_interfaces__msg__Dob * msg)
{
  if (!msg) {
    return;
  }
  // year
  // month
  // day
}

bool
dob_interfaces__msg__Dob__are_equal(const dob_interfaces__msg__Dob * lhs, const dob_interfaces__msg__Dob * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  return true;
}

bool
dob_interfaces__msg__Dob__copy(
  const dob_interfaces__msg__Dob * input,
  dob_interfaces__msg__Dob * output)
{
  if (!input || !output) {
    return false;
  }
  // year
  output->year = input->year;
  // month
  output->month = input->month;
  // day
  output->day = input->day;
  return true;
}

dob_interfaces__msg__Dob *
dob_interfaces__msg__Dob__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dob_interfaces__msg__Dob * msg = (dob_interfaces__msg__Dob *)allocator.allocate(sizeof(dob_interfaces__msg__Dob), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dob_interfaces__msg__Dob));
  bool success = dob_interfaces__msg__Dob__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dob_interfaces__msg__Dob__destroy(dob_interfaces__msg__Dob * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dob_interfaces__msg__Dob__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dob_interfaces__msg__Dob__Sequence__init(dob_interfaces__msg__Dob__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dob_interfaces__msg__Dob * data = NULL;

  if (size) {
    data = (dob_interfaces__msg__Dob *)allocator.zero_allocate(size, sizeof(dob_interfaces__msg__Dob), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dob_interfaces__msg__Dob__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dob_interfaces__msg__Dob__fini(&data[i - 1]);
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
dob_interfaces__msg__Dob__Sequence__fini(dob_interfaces__msg__Dob__Sequence * array)
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
      dob_interfaces__msg__Dob__fini(&array->data[i]);
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

dob_interfaces__msg__Dob__Sequence *
dob_interfaces__msg__Dob__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dob_interfaces__msg__Dob__Sequence * array = (dob_interfaces__msg__Dob__Sequence *)allocator.allocate(sizeof(dob_interfaces__msg__Dob__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dob_interfaces__msg__Dob__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dob_interfaces__msg__Dob__Sequence__destroy(dob_interfaces__msg__Dob__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dob_interfaces__msg__Dob__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dob_interfaces__msg__Dob__Sequence__are_equal(const dob_interfaces__msg__Dob__Sequence * lhs, const dob_interfaces__msg__Dob__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dob_interfaces__msg__Dob__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dob_interfaces__msg__Dob__Sequence__copy(
  const dob_interfaces__msg__Dob__Sequence * input,
  dob_interfaces__msg__Dob__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dob_interfaces__msg__Dob);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dob_interfaces__msg__Dob * data =
      (dob_interfaces__msg__Dob *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dob_interfaces__msg__Dob__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dob_interfaces__msg__Dob__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dob_interfaces__msg__Dob__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
