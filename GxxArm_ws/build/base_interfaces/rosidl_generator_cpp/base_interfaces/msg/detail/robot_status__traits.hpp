// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: real_arm_angle1
  {
    out << "real_arm_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle1, out);
    out << ", ";
  }

  // member: real_arm_angle2
  {
    out << "real_arm_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle2, out);
    out << ", ";
  }

  // member: real_arm_angle3
  {
    out << "real_arm_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle3, out);
    out << ", ";
  }

  // member: real_arm_angle4
  {
    out << "real_arm_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle4, out);
    out << ", ";
  }

  // member: real_arm_angle5
  {
    out << "real_arm_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle5, out);
    out << ", ";
  }

  // member: real_arm_angle6
  {
    out << "real_arm_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: real_arm_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle1, out);
    out << "\n";
  }

  // member: real_arm_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle2, out);
    out << "\n";
  }

  // member: real_arm_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle3, out);
    out << "\n";
  }

  // member: real_arm_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle4, out);
    out << "\n";
  }

  // member: real_arm_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle5, out);
    out << "\n";
  }

  // member: real_arm_angle6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_arm_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.real_arm_angle6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::msg::RobotStatus & msg)
{
  return base_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::msg::RobotStatus>()
{
  return "base_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<base_interfaces::msg::RobotStatus>()
{
  return "base_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<base_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
