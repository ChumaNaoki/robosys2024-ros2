// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ShapeInfo __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ShapeInfo __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShapeInfo_
{
  using Type = ShapeInfo_<ContainerAllocator>;

  explicit ShapeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sides = 0;
      this->angle_sum = 0l;
    }
  }

  explicit ShapeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sides = 0;
      this->angle_sum = 0l;
    }
  }

  // field types and members
  using _sides_type =
    int16_t;
  _sides_type sides;
  using _angle_sum_type =
    int32_t;
  _angle_sum_type angle_sum;

  // setters for named parameter idiom
  Type & set__sides(
    const int16_t & _arg)
  {
    this->sides = _arg;
    return *this;
  }
  Type & set__angle_sum(
    const int32_t & _arg)
  {
    this->angle_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ShapeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ShapeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ShapeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ShapeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ShapeInfo
    std::shared_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ShapeInfo
    std::shared_ptr<custom_msgs::msg::ShapeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShapeInfo_ & other) const
  {
    if (this->sides != other.sides) {
      return false;
    }
    if (this->angle_sum != other.angle_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShapeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShapeInfo_

// alias to use template instance with default allocator
using ShapeInfo =
  custom_msgs::msg::ShapeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__STRUCT_HPP_
