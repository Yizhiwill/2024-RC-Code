// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:srv/ArmAngle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__BUILDER_HPP_
#define BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/srv/detail/arm_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmAngle_Request_yaw
{
public:
  explicit Init_ArmAngle_Request_yaw(::base_interfaces::srv::ArmAngle_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::ArmAngle_Request yaw(::base_interfaces::srv::ArmAngle_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

class Init_ArmAngle_Request_pit
{
public:
  explicit Init_ArmAngle_Request_pit(::base_interfaces::srv::ArmAngle_Request & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Request_yaw pit(::base_interfaces::srv::ArmAngle_Request::_pit_type arg)
  {
    msg_.pit = std::move(arg);
    return Init_ArmAngle_Request_yaw(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

class Init_ArmAngle_Request_roll
{
public:
  explicit Init_ArmAngle_Request_roll(::base_interfaces::srv::ArmAngle_Request & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Request_pit roll(::base_interfaces::srv::ArmAngle_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ArmAngle_Request_pit(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

class Init_ArmAngle_Request_z
{
public:
  explicit Init_ArmAngle_Request_z(::base_interfaces::srv::ArmAngle_Request & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Request_roll z(::base_interfaces::srv::ArmAngle_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ArmAngle_Request_roll(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

class Init_ArmAngle_Request_y
{
public:
  explicit Init_ArmAngle_Request_y(::base_interfaces::srv::ArmAngle_Request & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Request_z y(::base_interfaces::srv::ArmAngle_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ArmAngle_Request_z(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

class Init_ArmAngle_Request_x
{
public:
  Init_ArmAngle_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmAngle_Request_y x(::base_interfaces::srv::ArmAngle_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ArmAngle_Request_y(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::ArmAngle_Request>()
{
  return base_interfaces::srv::builder::Init_ArmAngle_Request_x();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmAngle_Response_target_arm_angle6
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle6(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::ArmAngle_Response target_arm_angle6(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle6_type arg)
  {
    msg_.target_arm_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_target_arm_angle5
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle5(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Response_target_arm_angle6 target_arm_angle5(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle5_type arg)
  {
    msg_.target_arm_angle5 = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle6(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_target_arm_angle4
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle4(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Response_target_arm_angle5 target_arm_angle4(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle4_type arg)
  {
    msg_.target_arm_angle4 = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle5(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_target_arm_angle3
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle3(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Response_target_arm_angle4 target_arm_angle3(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle3_type arg)
  {
    msg_.target_arm_angle3 = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle4(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_target_arm_angle2
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle2(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Response_target_arm_angle3 target_arm_angle2(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle2_type arg)
  {
    msg_.target_arm_angle2 = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle3(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_target_arm_angle1
{
public:
  explicit Init_ArmAngle_Response_target_arm_angle1(::base_interfaces::srv::ArmAngle_Response & msg)
  : msg_(msg)
  {}
  Init_ArmAngle_Response_target_arm_angle2 target_arm_angle1(::base_interfaces::srv::ArmAngle_Response::_target_arm_angle1_type arg)
  {
    msg_.target_arm_angle1 = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle2(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

class Init_ArmAngle_Response_success
{
public:
  Init_ArmAngle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmAngle_Response_target_arm_angle1 success(::base_interfaces::srv::ArmAngle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmAngle_Response_target_arm_angle1(msg_);
  }

private:
  ::base_interfaces::srv::ArmAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::ArmAngle_Response>()
{
  return base_interfaces::srv::builder::Init_ArmAngle_Response_success();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__ARM_ANGLE__BUILDER_HPP_
