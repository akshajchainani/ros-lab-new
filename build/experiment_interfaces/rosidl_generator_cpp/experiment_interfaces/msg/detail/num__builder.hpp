// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from experiment_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "experiment_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace experiment_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::experiment_interfaces::msg::Num num(::experiment_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::msg::Num>()
{
  return experiment_interfaces::msg::builder::Init_Num_num();
}

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
