// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces:srv/ArmAngle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces/srv/detail/arm_angle__rosidl_typesupport_introspection_c.h"
#include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces/srv/detail/arm_angle__functions.h"
#include "base_interfaces/srv/detail/arm_angle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces__srv__ArmAngle_Request__init(message_memory);
}

void base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_fini_function(void * message_memory)
{
  base_interfaces__srv__ArmAngle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, pit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Request, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_members = {
  "base_interfaces__srv",  // message namespace
  "ArmAngle_Request",  // message name
  6,  // number of fields
  sizeof(base_interfaces__srv__ArmAngle_Request),
  base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_member_array,  // message members
  base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_type_support_handle = {
  0,
  &base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Request)() {
  if (!base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces__srv__ArmAngle_Request__rosidl_typesupport_introspection_c__ArmAngle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces/srv/detail/arm_angle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces/srv/detail/arm_angle__functions.h"
// already included above
// #include "base_interfaces/srv/detail/arm_angle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces__srv__ArmAngle_Response__init(message_memory);
}

void base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_fini_function(void * message_memory)
{
  base_interfaces__srv__ArmAngle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_member_array[7] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_arm_angle6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__ArmAngle_Response, target_arm_angle6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_members = {
  "base_interfaces__srv",  // message namespace
  "ArmAngle_Response",  // message name
  7,  // number of fields
  sizeof(base_interfaces__srv__ArmAngle_Response),
  base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_member_array,  // message members
  base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_type_support_handle = {
  0,
  &base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Response)() {
  if (!base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces__srv__ArmAngle_Response__rosidl_typesupport_introspection_c__ArmAngle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces/srv/detail/arm_angle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_members = {
  "base_interfaces__srv",  // service namespace
  "ArmAngle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_Request_message_type_support_handle,
  NULL  // response message
  // base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_type_support_handle = {
  0,
  &base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle)() {
  if (!base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, ArmAngle_Response)()->data;
  }

  return &base_interfaces__srv__detail__arm_angle__rosidl_typesupport_introspection_c__ArmAngle_service_type_support_handle;
}
