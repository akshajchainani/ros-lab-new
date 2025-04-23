// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#ifndef DOB_INTERFACES__MSG__DETAIL__DOB__BUILDER_HPP_
#define DOB_INTERFACES__MSG__DETAIL__DOB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dob_interfaces/msg/detail/dob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dob_interfaces
{

namespace msg
{

namespace builder
{

class Init_Dob_day
{
public:
  explicit Init_Dob_day(::dob_interfaces::msg::Dob & msg)
  : msg_(msg)
  {}
  ::dob_interfaces::msg::Dob day(::dob_interfaces::msg::Dob::_day_type arg)
  {
    msg_.day = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dob_interfaces::msg::Dob msg_;
};

class Init_Dob_month
{
public:
  explicit Init_Dob_month(::dob_interfaces::msg::Dob & msg)
  : msg_(msg)
  {}
  Init_Dob_day month(::dob_interfaces::msg::Dob::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Dob_day(msg_);
  }

private:
  ::dob_interfaces::msg::Dob msg_;
};

class Init_Dob_year
{
public:
  Init_Dob_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dob_month year(::dob_interfaces::msg::Dob::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Dob_month(msg_);
  }

private:
  ::dob_interfaces::msg::Dob msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dob_interfaces::msg::Dob>()
{
  return dob_interfaces::msg::builder::Init_Dob_year();
}

}  // namespace dob_interfaces

#endif  // DOB_INTERFACES__MSG__DETAIL__DOB__BUILDER_HPP_
