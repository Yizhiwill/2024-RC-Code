// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:srv/ArmAngle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__STRUCT_H_
#define BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ArmAngle in the package base_interfaces.
typedef struct base_interfaces__srv__ArmAngle_Request
{
  double x;
  double y;
  double z;
  double roll;
  double pit;
  double yaw;
} base_interfaces__srv__ArmAngle_Request;

// Struct for a sequence of base_interfaces__srv__ArmAngle_Request.
typedef struct base_interfaces__srv__ArmAngle_Request__Sequence
{
  base_interfaces__srv__ArmAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__ArmAngle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArmAngle in the package base_interfaces.
typedef struct base_interfaces__srv__ArmAngle_Response
{
  bool success;
  double target_arm_angle1;
  double target_arm_angle2;
  double target_arm_angle3;
  double target_arm_angle4;
  double target_arm_angle5;
  double target_arm_angle6;
} base_interfaces__srv__ArmAngle_Response;

// Struct for a sequence of base_interfaces__srv__ArmAngle_Response.
typedef struct base_interfaces__srv__ArmAngle_Response__Sequence
{
  base_interfaces__srv__ArmAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__ArmAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__STRUCT_H_