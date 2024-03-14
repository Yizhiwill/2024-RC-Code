// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
#define BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotPose in the package base_interfaces.
typedef struct base_interfaces__msg__RobotPose
{
  float temp_arm_angle1;
  float temp_arm_angle2;
  float temp_arm_angle3;
  float temp_arm_angle4;
  float temp_arm_angle5;
  float temp_arm_angle6;
} base_interfaces__msg__RobotPose;

// Struct for a sequence of base_interfaces__msg__RobotPose.
typedef struct base_interfaces__msg__RobotPose__Sequence
{
  base_interfaces__msg__RobotPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__msg__RobotPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
