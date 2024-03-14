// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:srv/VisionAngle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__TRAITS_HPP_
#define BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/srv/detail/vision_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisionAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_arm_angle1
  {
    out << "target_arm_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle1, out);
    out << ", ";
  }

  // member: target_arm_angle2
  {
    out << "target_arm_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle2, out);
    out << ", ";
  }

  // member: target_arm_angle3
  {
    out << "target_arm_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle3, out);
    out << ", ";
  }

  // member: target_arm_angle4
  {
    out << "target_arm_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle4, out);
    out << ", ";
  }

  // member: target_arm_angle5
  {
    out << "target_arm_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle5, out);
    out << ", ";
  }

  // member: target_arm_angle6
  {
    out << "target_arm_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_arm_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle1, out);
    out << "\n";
  }

  // member: target_arm_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle2, out);
    out << "\n";
  }

  // member: target_arm_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle3, out);
    out << "\n";
  }

  // member: target_arm_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle4, out);
    out << "\n";
  }

  // member: target_arm_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle5, out);
    out << "\n";
  }

  // member: target_arm_angle6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_arm_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.target_arm_angle6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::VisionAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::VisionAngle_Request & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::VisionAngle_Request>()
{
  return "base_interfaces::srv::VisionAngle_Request";
}

template<>
inline const char * name<base_interfaces::srv::VisionAngle_Request>()
{
  return "base_interfaces/srv/VisionAngle_Request";
}

template<>
struct has_fixed_size<base_interfaces::srv::VisionAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::srv::VisionAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::srv::VisionAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisionAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pit
  {
    out << "pit: ";
    rosidl_generator_traits::value_to_yaml(msg.pit, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pit: ";
    rosidl_generator_traits::value_to_yaml(msg.pit, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::VisionAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::VisionAngle_Response & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::VisionAngle_Response>()
{
  return "base_interfaces::srv::VisionAngle_Response";
}

template<>
inline const char * name<base_interfaces::srv::VisionAngle_Response>()
{
  return "base_interfaces/srv/VisionAngle_Response";
}

template<>
struct has_fixed_size<base_interfaces::srv::VisionAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::srv::VisionAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::srv::VisionAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces::srv::VisionAngle>()
{
  return "base_interfaces::srv::VisionAngle";
}

template<>
inline const char * name<base_interfaces::srv::VisionAngle>()
{
  return "base_interfaces/srv/VisionAngle";
}

template<>
struct has_fixed_size<base_interfaces::srv::VisionAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::srv::VisionAngle_Request>::value &&
    has_fixed_size<base_interfaces::srv::VisionAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::srv::VisionAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::srv::VisionAngle_Request>::value &&
    has_bounded_size<base_interfaces::srv::VisionAngle_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::srv::VisionAngle>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::srv::VisionAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::srv::VisionAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__TRAITS_HPP_
