// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:srv/ArmAngle.idl
// generated code does not contain a copyright notice
#include "base_interfaces/srv/detail/arm_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
base_interfaces__srv__ArmAngle_Request__init(base_interfaces__srv__ArmAngle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pit
  // yaw
  return true;
}

void
base_interfaces__srv__ArmAngle_Request__fini(base_interfaces__srv__ArmAngle_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pit
  // yaw
}

bool
base_interfaces__srv__ArmAngle_Request__are_equal(const base_interfaces__srv__ArmAngle_Request * lhs, const base_interfaces__srv__ArmAngle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pit
  if (lhs->pit != rhs->pit) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
base_interfaces__srv__ArmAngle_Request__copy(
  const base_interfaces__srv__ArmAngle_Request * input,
  base_interfaces__srv__ArmAngle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pit
  output->pit = input->pit;
  // yaw
  output->yaw = input->yaw;
  return true;
}

base_interfaces__srv__ArmAngle_Request *
base_interfaces__srv__ArmAngle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Request * msg = (base_interfaces__srv__ArmAngle_Request *)allocator.allocate(sizeof(base_interfaces__srv__ArmAngle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__srv__ArmAngle_Request));
  bool success = base_interfaces__srv__ArmAngle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__srv__ArmAngle_Request__destroy(base_interfaces__srv__ArmAngle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__srv__ArmAngle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__srv__ArmAngle_Request__Sequence__init(base_interfaces__srv__ArmAngle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Request * data = NULL;

  if (size) {
    data = (base_interfaces__srv__ArmAngle_Request *)allocator.zero_allocate(size, sizeof(base_interfaces__srv__ArmAngle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__srv__ArmAngle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__srv__ArmAngle_Request__fini(&data[i - 1]);
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
base_interfaces__srv__ArmAngle_Request__Sequence__fini(base_interfaces__srv__ArmAngle_Request__Sequence * array)
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
      base_interfaces__srv__ArmAngle_Request__fini(&array->data[i]);
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

base_interfaces__srv__ArmAngle_Request__Sequence *
base_interfaces__srv__ArmAngle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Request__Sequence * array = (base_interfaces__srv__ArmAngle_Request__Sequence *)allocator.allocate(sizeof(base_interfaces__srv__ArmAngle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__srv__ArmAngle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__srv__ArmAngle_Request__Sequence__destroy(base_interfaces__srv__ArmAngle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__srv__ArmAngle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__srv__ArmAngle_Request__Sequence__are_equal(const base_interfaces__srv__ArmAngle_Request__Sequence * lhs, const base_interfaces__srv__ArmAngle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__srv__ArmAngle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__srv__ArmAngle_Request__Sequence__copy(
  const base_interfaces__srv__ArmAngle_Request__Sequence * input,
  base_interfaces__srv__ArmAngle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__srv__ArmAngle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__srv__ArmAngle_Request * data =
      (base_interfaces__srv__ArmAngle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__srv__ArmAngle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__srv__ArmAngle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__srv__ArmAngle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
base_interfaces__srv__ArmAngle_Response__init(base_interfaces__srv__ArmAngle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // target_arm_angle1
  // target_arm_angle2
  // target_arm_angle3
  // target_arm_angle4
  // target_arm_angle5
  // target_arm_angle6
  return true;
}

void
base_interfaces__srv__ArmAngle_Response__fini(base_interfaces__srv__ArmAngle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // target_arm_angle1
  // target_arm_angle2
  // target_arm_angle3
  // target_arm_angle4
  // target_arm_angle5
  // target_arm_angle6
}

bool
base_interfaces__srv__ArmAngle_Response__are_equal(const base_interfaces__srv__ArmAngle_Response * lhs, const base_interfaces__srv__ArmAngle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // target_arm_angle1
  if (lhs->target_arm_angle1 != rhs->target_arm_angle1) {
    return false;
  }
  // target_arm_angle2
  if (lhs->target_arm_angle2 != rhs->target_arm_angle2) {
    return false;
  }
  // target_arm_angle3
  if (lhs->target_arm_angle3 != rhs->target_arm_angle3) {
    return false;
  }
  // target_arm_angle4
  if (lhs->target_arm_angle4 != rhs->target_arm_angle4) {
    return false;
  }
  // target_arm_angle5
  if (lhs->target_arm_angle5 != rhs->target_arm_angle5) {
    return false;
  }
  // target_arm_angle6
  if (lhs->target_arm_angle6 != rhs->target_arm_angle6) {
    return false;
  }
  return true;
}

bool
base_interfaces__srv__ArmAngle_Response__copy(
  const base_interfaces__srv__ArmAngle_Response * input,
  base_interfaces__srv__ArmAngle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // target_arm_angle1
  output->target_arm_angle1 = input->target_arm_angle1;
  // target_arm_angle2
  output->target_arm_angle2 = input->target_arm_angle2;
  // target_arm_angle3
  output->target_arm_angle3 = input->target_arm_angle3;
  // target_arm_angle4
  output->target_arm_angle4 = input->target_arm_angle4;
  // target_arm_angle5
  output->target_arm_angle5 = input->target_arm_angle5;
  // target_arm_angle6
  output->target_arm_angle6 = input->target_arm_angle6;
  return true;
}

base_interfaces__srv__ArmAngle_Response *
base_interfaces__srv__ArmAngle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Response * msg = (base_interfaces__srv__ArmAngle_Response *)allocator.allocate(sizeof(base_interfaces__srv__ArmAngle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__srv__ArmAngle_Response));
  bool success = base_interfaces__srv__ArmAngle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__srv__ArmAngle_Response__destroy(base_interfaces__srv__ArmAngle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__srv__ArmAngle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__srv__ArmAngle_Response__Sequence__init(base_interfaces__srv__ArmAngle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Response * data = NULL;

  if (size) {
    data = (base_interfaces__srv__ArmAngle_Response *)allocator.zero_allocate(size, sizeof(base_interfaces__srv__ArmAngle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__srv__ArmAngle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__srv__ArmAngle_Response__fini(&data[i - 1]);
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
base_interfaces__srv__ArmAngle_Response__Sequence__fini(base_interfaces__srv__ArmAngle_Response__Sequence * array)
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
      base_interfaces__srv__ArmAngle_Response__fini(&array->data[i]);
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

base_interfaces__srv__ArmAngle_Response__Sequence *
base_interfaces__srv__ArmAngle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__ArmAngle_Response__Sequence * array = (base_interfaces__srv__ArmAngle_Response__Sequence *)allocator.allocate(sizeof(base_interfaces__srv__ArmAngle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__srv__ArmAngle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__srv__ArmAngle_Response__Sequence__destroy(base_interfaces__srv__ArmAngle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__srv__ArmAngle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__srv__ArmAngle_Response__Sequence__are_equal(const base_interfaces__srv__ArmAngle_Response__Sequence * lhs, const base_interfaces__srv__ArmAngle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__srv__ArmAngle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__srv__ArmAngle_Response__Sequence__copy(
  const base_interfaces__srv__ArmAngle_Response__Sequence * input,
  base_interfaces__srv__ArmAngle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__srv__ArmAngle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__srv__ArmAngle_Response * data =
      (base_interfaces__srv__ArmAngle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__srv__ArmAngle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__srv__ArmAngle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__srv__ArmAngle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
