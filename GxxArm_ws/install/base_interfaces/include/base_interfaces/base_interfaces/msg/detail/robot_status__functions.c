// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces__msg__RobotStatus__init(base_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // real_arm_angle1
  // real_arm_angle2
  // real_arm_angle3
  // real_arm_angle4
  // real_arm_angle5
  // real_arm_angle6
  return true;
}

void
base_interfaces__msg__RobotStatus__fini(base_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // real_arm_angle1
  // real_arm_angle2
  // real_arm_angle3
  // real_arm_angle4
  // real_arm_angle5
  // real_arm_angle6
}

bool
base_interfaces__msg__RobotStatus__are_equal(const base_interfaces__msg__RobotStatus * lhs, const base_interfaces__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // real_arm_angle1
  if (lhs->real_arm_angle1 != rhs->real_arm_angle1) {
    return false;
  }
  // real_arm_angle2
  if (lhs->real_arm_angle2 != rhs->real_arm_angle2) {
    return false;
  }
  // real_arm_angle3
  if (lhs->real_arm_angle3 != rhs->real_arm_angle3) {
    return false;
  }
  // real_arm_angle4
  if (lhs->real_arm_angle4 != rhs->real_arm_angle4) {
    return false;
  }
  // real_arm_angle5
  if (lhs->real_arm_angle5 != rhs->real_arm_angle5) {
    return false;
  }
  // real_arm_angle6
  if (lhs->real_arm_angle6 != rhs->real_arm_angle6) {
    return false;
  }
  return true;
}

bool
base_interfaces__msg__RobotStatus__copy(
  const base_interfaces__msg__RobotStatus * input,
  base_interfaces__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // real_arm_angle1
  output->real_arm_angle1 = input->real_arm_angle1;
  // real_arm_angle2
  output->real_arm_angle2 = input->real_arm_angle2;
  // real_arm_angle3
  output->real_arm_angle3 = input->real_arm_angle3;
  // real_arm_angle4
  output->real_arm_angle4 = input->real_arm_angle4;
  // real_arm_angle5
  output->real_arm_angle5 = input->real_arm_angle5;
  // real_arm_angle6
  output->real_arm_angle6 = input->real_arm_angle6;
  return true;
}

base_interfaces__msg__RobotStatus *
base_interfaces__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__RobotStatus * msg = (base_interfaces__msg__RobotStatus *)allocator.allocate(sizeof(base_interfaces__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__msg__RobotStatus));
  bool success = base_interfaces__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__msg__RobotStatus__destroy(base_interfaces__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__msg__RobotStatus__Sequence__init(base_interfaces__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__RobotStatus * data = NULL;

  if (size) {
    data = (base_interfaces__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(base_interfaces__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__msg__RobotStatus__fini(&data[i - 1]);
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
base_interfaces__msg__RobotStatus__Sequence__fini(base_interfaces__msg__RobotStatus__Sequence * array)
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
      base_interfaces__msg__RobotStatus__fini(&array->data[i]);
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

base_interfaces__msg__RobotStatus__Sequence *
base_interfaces__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__RobotStatus__Sequence * array = (base_interfaces__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(base_interfaces__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__msg__RobotStatus__Sequence__destroy(base_interfaces__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__msg__RobotStatus__Sequence__are_equal(const base_interfaces__msg__RobotStatus__Sequence * lhs, const base_interfaces__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__msg__RobotStatus__Sequence__copy(
  const base_interfaces__msg__RobotStatus__Sequence * input,
  base_interfaces__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__msg__RobotStatus * data =
      (base_interfaces__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
