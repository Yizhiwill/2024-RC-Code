// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:srv/VisionAngle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__BUILDER_HPP_
#define BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/srv/detail/vision_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_VisionAngle_Request_target_arm_angle6
{
public:
  explicit Init_VisionAngle_Request_target_arm_angle6(::base_interfaces::srv::VisionAngle_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::VisionAngle_Request target_arm_angle6(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle6_type arg)
  {
    msg_.target_arm_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

class Init_VisionAngle_Request_target_arm_angle5
{
public:
  explicit Init_VisionAngle_Request_target_arm_angle5(::base_interfaces::srv::VisionAngle_Request & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Request_target_arm_angle6 target_arm_angle5(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle5_type arg)
  {
    msg_.target_arm_angle5 = std::move(arg);
    return Init_VisionAngle_Request_target_arm_angle6(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

class Init_VisionAngle_Request_target_arm_angle4
{
public:
  explicit Init_VisionAngle_Request_target_arm_angle4(::base_interfaces::srv::VisionAngle_Request & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Request_target_arm_angle5 target_arm_angle4(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle4_type arg)
  {
    msg_.target_arm_angle4 = std::move(arg);
    return Init_VisionAngle_Request_target_arm_angle5(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

class Init_VisionAngle_Request_target_arm_angle3
{
public:
  explicit Init_VisionAngle_Request_target_arm_angle3(::base_interfaces::srv::VisionAngle_Request & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Request_target_arm_angle4 target_arm_angle3(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle3_type arg)
  {
    msg_.target_arm_angle3 = std::move(arg);
    return Init_VisionAngle_Request_target_arm_angle4(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

class Init_VisionAngle_Request_target_arm_angle2
{
public:
  explicit Init_VisionAngle_Request_target_arm_angle2(::base_interfaces::srv::VisionAngle_Request & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Request_target_arm_angle3 target_arm_angle2(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle2_type arg)
  {
    msg_.target_arm_angle2 = std::move(arg);
    return Init_VisionAngle_Request_target_arm_angle3(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

class Init_VisionAngle_Request_target_arm_angle1
{
public:
  Init_VisionAngle_Request_target_arm_angle1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionAngle_Request_target_arm_angle2 target_arm_angle1(::base_interfaces::srv::VisionAngle_Request::_target_arm_angle1_type arg)
  {
    msg_.target_arm_angle1 = std::move(arg);
    return Init_VisionAngle_Request_target_arm_angle2(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::VisionAngle_Request>()
{
  return base_interfaces::srv::builder::Init_VisionAngle_Request_target_arm_angle1();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_VisionAngle_Response_yaw
{
public:
  explicit Init_VisionAngle_Response_yaw(::base_interfaces::srv::VisionAngle_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::VisionAngle_Response yaw(::base_interfaces::srv::VisionAngle_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

class Init_VisionAngle_Response_pit
{
public:
  explicit Init_VisionAngle_Response_pit(::base_interfaces::srv::VisionAngle_Response & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Response_yaw pit(::base_interfaces::srv::VisionAngle_Response::_pit_type arg)
  {
    msg_.pit = std::move(arg);
    return Init_VisionAngle_Response_yaw(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

class Init_VisionAngle_Response_roll
{
public:
  explicit Init_VisionAngle_Response_roll(::base_interfaces::srv::VisionAngle_Response & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Response_pit roll(::base_interfaces::srv::VisionAngle_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_VisionAngle_Response_pit(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

class Init_VisionAngle_Response_z
{
public:
  explicit Init_VisionAngle_Response_z(::base_interfaces::srv::VisionAngle_Response & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Response_roll z(::base_interfaces::srv::VisionAngle_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VisionAngle_Response_roll(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

class Init_VisionAngle_Response_y
{
public:
  explicit Init_VisionAngle_Response_y(::base_interfaces::srv::VisionAngle_Response & msg)
  : msg_(msg)
  {}
  Init_VisionAngle_Response_z y(::base_interfaces::srv::VisionAngle_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VisionAngle_Response_z(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

class Init_VisionAngle_Response_x
{
public:
  Init_VisionAngle_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionAngle_Response_y x(::base_interfaces::srv::VisionAngle_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VisionAngle_Response_y(msg_);
  }

private:
  ::base_interfaces::srv::VisionAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::VisionAngle_Response>()
{
  return base_interfaces::srv::builder::Init_VisionAngle_Response_x();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__BUILDER_HPP_
