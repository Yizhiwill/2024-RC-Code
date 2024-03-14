// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces:srv/VisionAngle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__STRUCT_HPP_
#define BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__VisionAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__VisionAngle_Request __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionAngle_Request_
{
  using Type = VisionAngle_Request_<ContainerAllocator>;

  explicit VisionAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_arm_angle1 = 0.0;
      this->target_arm_angle2 = 0.0;
      this->target_arm_angle3 = 0.0;
      this->target_arm_angle4 = 0.0;
      this->target_arm_angle5 = 0.0;
      this->target_arm_angle6 = 0.0;
    }
  }

  explicit VisionAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_arm_angle1 = 0.0;
      this->target_arm_angle2 = 0.0;
      this->target_arm_angle3 = 0.0;
      this->target_arm_angle4 = 0.0;
      this->target_arm_angle5 = 0.0;
      this->target_arm_angle6 = 0.0;
    }
  }

  // field types and members
  using _target_arm_angle1_type =
    double;
  _target_arm_angle1_type target_arm_angle1;
  using _target_arm_angle2_type =
    double;
  _target_arm_angle2_type target_arm_angle2;
  using _target_arm_angle3_type =
    double;
  _target_arm_angle3_type target_arm_angle3;
  using _target_arm_angle4_type =
    double;
  _target_arm_angle4_type target_arm_angle4;
  using _target_arm_angle5_type =
    double;
  _target_arm_angle5_type target_arm_angle5;
  using _target_arm_angle6_type =
    double;
  _target_arm_angle6_type target_arm_angle6;

  // setters for named parameter idiom
  Type & set__target_arm_angle1(
    const double & _arg)
  {
    this->target_arm_angle1 = _arg;
    return *this;
  }
  Type & set__target_arm_angle2(
    const double & _arg)
  {
    this->target_arm_angle2 = _arg;
    return *this;
  }
  Type & set__target_arm_angle3(
    const double & _arg)
  {
    this->target_arm_angle3 = _arg;
    return *this;
  }
  Type & set__target_arm_angle4(
    const double & _arg)
  {
    this->target_arm_angle4 = _arg;
    return *this;
  }
  Type & set__target_arm_angle5(
    const double & _arg)
  {
    this->target_arm_angle5 = _arg;
    return *this;
  }
  Type & set__target_arm_angle6(
    const double & _arg)
  {
    this->target_arm_angle6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__VisionAngle_Request
    std::shared_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__VisionAngle_Request
    std::shared_ptr<base_interfaces::srv::VisionAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionAngle_Request_ & other) const
  {
    if (this->target_arm_angle1 != other.target_arm_angle1) {
      return false;
    }
    if (this->target_arm_angle2 != other.target_arm_angle2) {
      return false;
    }
    if (this->target_arm_angle3 != other.target_arm_angle3) {
      return false;
    }
    if (this->target_arm_angle4 != other.target_arm_angle4) {
      return false;
    }
    if (this->target_arm_angle5 != other.target_arm_angle5) {
      return false;
    }
    if (this->target_arm_angle6 != other.target_arm_angle6) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionAngle_Request_

// alias to use template instance with default allocator
using VisionAngle_Request =
  base_interfaces::srv::VisionAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__VisionAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__VisionAngle_Response __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionAngle_Response_
{
  using Type = VisionAngle_Response_<ContainerAllocator>;

  explicit VisionAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pit = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit VisionAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pit = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _roll_type =
    double;
  _roll_type roll;
  using _pit_type =
    double;
  _pit_type pit;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pit(
    const double & _arg)
  {
    this->pit = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__VisionAngle_Response
    std::shared_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__VisionAngle_Response
    std::shared_ptr<base_interfaces::srv::VisionAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionAngle_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pit != other.pit) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionAngle_Response_

// alias to use template instance with default allocator
using VisionAngle_Response =
  base_interfaces::srv::VisionAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces

namespace base_interfaces
{

namespace srv
{

struct VisionAngle
{
  using Request = base_interfaces::srv::VisionAngle_Request;
  using Response = base_interfaces::srv::VisionAngle_Response;
};

}  // namespace srv

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__VISION_ANGLE__STRUCT_HPP_
