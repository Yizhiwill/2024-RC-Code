// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotStatus in the package base_interfaces.
typedef struct base_interfaces__msg__RobotStatus
{
  float real_arm_angle1;
  float real_arm_angle2;
  float real_arm_angle3;
  float real_arm_angle4;
  float real_arm_angle5;
  float real_arm_angle6;
} base_interfaces__msg__RobotStatus;

// Struct for a sequence of base_interfaces__msg__RobotStatus.
typedef struct base_interfaces__msg__RobotStatus__Sequence
{
  base_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
