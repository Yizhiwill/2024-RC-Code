// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces/msg/detail/robot_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "base_interfaces/msg/detail/robot_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace base_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces
cdr_serialize(
  const base_interfaces::msg::RobotStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: real_arm_angle1
  cdr << ros_message.real_arm_angle1;
  // Member: real_arm_angle2
  cdr << ros_message.real_arm_angle2;
  // Member: real_arm_angle3
  cdr << ros_message.real_arm_angle3;
  // Member: real_arm_angle4
  cdr << ros_message.real_arm_angle4;
  // Member: real_arm_angle5
  cdr << ros_message.real_arm_angle5;
  // Member: real_arm_angle6
  cdr << ros_message.real_arm_angle6;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces::msg::RobotStatus & ros_message)
{
  // Member: real_arm_angle1
  cdr >> ros_message.real_arm_angle1;

  // Member: real_arm_angle2
  cdr >> ros_message.real_arm_angle2;

  // Member: real_arm_angle3
  cdr >> ros_message.real_arm_angle3;

  // Member: real_arm_angle4
  cdr >> ros_message.real_arm_angle4;

  // Member: real_arm_angle5
  cdr >> ros_message.real_arm_angle5;

  // Member: real_arm_angle6
  cdr >> ros_message.real_arm_angle6;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces
get_serialized_size(
  const base_interfaces::msg::RobotStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: real_arm_angle1
  {
    size_t item_size = sizeof(ros_message.real_arm_angle1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_arm_angle2
  {
    size_t item_size = sizeof(ros_message.real_arm_angle2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_arm_angle3
  {
    size_t item_size = sizeof(ros_message.real_arm_angle3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_arm_angle4
  {
    size_t item_size = sizeof(ros_message.real_arm_angle4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_arm_angle5
  {
    size_t item_size = sizeof(ros_message.real_arm_angle5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_arm_angle6
  {
    size_t item_size = sizeof(ros_message.real_arm_angle6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfaces
max_serialized_size_RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: real_arm_angle1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: real_arm_angle2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: real_arm_angle3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: real_arm_angle4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: real_arm_angle5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: real_arm_angle6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces::msg::RobotStatus;
    is_plain =
      (
      offsetof(DataType, real_arm_angle6) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const base_interfaces::msg::RobotStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<base_interfaces::msg::RobotStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const base_interfaces::msg::RobotStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotStatus__callbacks = {
  "base_interfaces::msg",
  "RobotStatus",
  _RobotStatus__cdr_serialize,
  _RobotStatus__cdr_deserialize,
  _RobotStatus__get_serialized_size,
  _RobotStatus__max_serialized_size
};

static rosidl_message_type_support_t _RobotStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace base_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_base_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces::msg::RobotStatus>()
{
  return &base_interfaces::msg::typesupport_fastrtps_cpp::_RobotStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces, msg, RobotStatus)() {
  return &base_interfaces::msg::typesupport_fastrtps_cpp::_RobotStatus__handle;
}

#ifdef __cplusplus
}
#endif
