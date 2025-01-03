// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ShapeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__BUILDER_HPP_

#include "custom_msgs/msg/detail/shape_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ShapeInfo_angle_sum
{
public:
  explicit Init_ShapeInfo_angle_sum(::custom_msgs::msg::ShapeInfo & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ShapeInfo angle_sum(::custom_msgs::msg::ShapeInfo::_angle_sum_type arg)
  {
    msg_.angle_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ShapeInfo msg_;
};

class Init_ShapeInfo_sides
{
public:
  Init_ShapeInfo_sides()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShapeInfo_angle_sum sides(::custom_msgs::msg::ShapeInfo::_sides_type arg)
  {
    msg_.sides = std::move(arg);
    return Init_ShapeInfo_angle_sum(msg_);
  }

private:
  ::custom_msgs::msg::ShapeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ShapeInfo>()
{
  return custom_msgs::msg::builder::Init_ShapeInfo_sides();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SHAPE_INFO__BUILDER_HPP_
