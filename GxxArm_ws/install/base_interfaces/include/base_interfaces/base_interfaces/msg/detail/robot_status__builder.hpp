// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_real_arm_angle6
{
public:
  explicit Init_RobotStatus_real_arm_angle6(::base_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::base_interfaces::msg::RobotStatus real_arm_angle6(::base_interfaces::msg::RobotStatus::_real_arm_angle6_type arg)
  {
    msg_.real_arm_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_real_arm_angle5
{
public:
  explicit Init_RobotStatus_real_arm_angle5(::base_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_real_arm_angle6 real_arm_angle5(::base_interfaces::msg::RobotStatus::_real_arm_angle5_type arg)
  {
    msg_.real_arm_angle5 = std::move(arg);
    return Init_RobotStatus_real_arm_angle6(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_real_arm_angle4
{
public:
  explicit Init_RobotStatus_real_arm_angle4(::base_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_real_arm_angle5 real_arm_angle4(::base_interfaces::msg::RobotStatus::_real_arm_angle4_type arg)
  {
    msg_.real_arm_angle4 = std::move(arg);
    return Init_RobotStatus_real_arm_angle5(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_real_arm_angle3
{
public:
  explicit Init_RobotStatus_real_arm_angle3(::base_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_real_arm_angle4 real_arm_angle3(::base_interfaces::msg::RobotStatus::_real_arm_angle3_type arg)
  {
    msg_.real_arm_angle3 = std::move(arg);
    return Init_RobotStatus_real_arm_angle4(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_real_arm_angle2
{
public:
  explicit Init_RobotStatus_real_arm_angle2(::base_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_real_arm_angle3 real_arm_angle2(::base_interfaces::msg::RobotStatus::_real_arm_angle2_type arg)
  {
    msg_.real_arm_angle2 = std::move(arg);
    return Init_RobotStatus_real_arm_angle3(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_real_arm_angle1
{
public:
  Init_RobotStatus_real_arm_angle1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_real_arm_angle2 real_arm_angle1(::base_interfaces::msg::RobotStatus::_real_arm_angle1_type arg)
  {
    msg_.real_arm_angle1 = std::move(arg);
    return Init_RobotStatus_real_arm_angle2(msg_);
  }

private:
  ::base_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::msg::RobotStatus>()
{
  return base_interfaces::msg::builder::Init_RobotStatus_real_arm_angle1();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
