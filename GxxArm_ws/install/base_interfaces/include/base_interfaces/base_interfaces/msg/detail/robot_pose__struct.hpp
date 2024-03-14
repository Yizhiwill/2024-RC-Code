// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_
#define BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces__msg__RobotPose __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__msg__RobotPose __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPose_
{
  using Type = RobotPose_<ContainerAllocator>;

  explicit RobotPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_arm_angle1 = 0.0f;
      this->temp_arm_angle2 = 0.0f;
      this->temp_arm_angle3 = 0.0f;
      this->temp_arm_angle4 = 0.0f;
      this->temp_arm_angle5 = 0.0f;
      this->temp_arm_angle6 = 0.0f;
    }
  }

  explicit RobotPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_arm_angle1 = 0.0f;
      this->temp_arm_angle2 = 0.0f;
      this->temp_arm_angle3 = 0.0f;
      this->temp_arm_angle4 = 0.0f;
      this->temp_arm_angle5 = 0.0f;
      this->temp_arm_angle6 = 0.0f;
    }
  }

  // field types and members
  using _temp_arm_angle1_type =
    float;
  _temp_arm_angle1_type temp_arm_angle1;
  using _temp_arm_angle2_type =
    float;
  _temp_arm_angle2_type temp_arm_angle2;
  using _temp_arm_angle3_type =
    float;
  _temp_arm_angle3_type temp_arm_angle3;
  using _temp_arm_angle4_type =
    float;
  _temp_arm_angle4_type temp_arm_angle4;
  using _temp_arm_angle5_type =
    float;
  _temp_arm_angle5_type temp_arm_angle5;
  using _temp_arm_angle6_type =
    float;
  _temp_arm_angle6_type temp_arm_angle6;

  // setters for named parameter idiom
  Type & set__temp_arm_angle1(
    const float & _arg)
  {
    this->temp_arm_angle1 = _arg;
    return *this;
  }
  Type & set__temp_arm_angle2(
    const float & _arg)
  {
    this->temp_arm_angle2 = _arg;
    return *this;
  }
  Type & set__temp_arm_angle3(
    const float & _arg)
  {
    this->temp_arm_angle3 = _arg;
    return *this;
  }
  Type & set__temp_arm_angle4(
    const float & _arg)
  {
    this->temp_arm_angle4 = _arg;
    return *this;
  }
  Type & set__temp_arm_angle5(
    const float & _arg)
  {
    this->temp_arm_angle5 = _arg;
    return *this;
  }
  Type & set__temp_arm_angle6(
    const float & _arg)
  {
    this->temp_arm_angle6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::msg::RobotPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::msg::RobotPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::msg::RobotPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::msg::RobotPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__msg__RobotPose
    std::shared_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__msg__RobotPose
    std::shared_ptr<base_interfaces::msg::RobotPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPose_ & other) const
  {
    if (this->temp_arm_angle1 != other.temp_arm_angle1) {
      return false;
    }
    if (this->temp_arm_angle2 != other.temp_arm_angle2) {
      return false;
    }
    if (this->temp_arm_angle3 != other.temp_arm_angle3) {
      return false;
    }
    if (this->temp_arm_angle4 != other.temp_arm_angle4) {
      return false;
    }
    if (this->temp_arm_angle5 != other.temp_arm_angle5) {
      return false;
    }
    if (this->temp_arm_angle6 != other.temp_arm_angle6) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPose_

// alias to use template instance with default allocator
using RobotPose =
  base_interfaces::msg::RobotPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_
