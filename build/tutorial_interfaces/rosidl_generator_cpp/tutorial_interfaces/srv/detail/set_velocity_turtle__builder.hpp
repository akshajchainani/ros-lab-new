// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/SetVelocityTurtle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SET_VELOCITY_TURTLE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SET_VELOCITY_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/set_velocity_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetVelocityTurtle_Request_angle
{
public:
  explicit Init_SetVelocityTurtle_Request_angle(::tutorial_interfaces::srv::SetVelocityTurtle_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SetVelocityTurtle_Request angle(::tutorial_interfaces::srv::SetVelocityTurtle_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SetVelocityTurtle_Request msg_;
};

class Init_SetVelocityTurtle_Request_velocity
{
public:
  Init_SetVelocityTurtle_Request_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVelocityTurtle_Request_angle velocity(::tutorial_interfaces::srv::SetVelocityTurtle_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetVelocityTurtle_Request_angle(msg_);
  }

private:
  ::tutorial_interfaces::srv::SetVelocityTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SetVelocityTurtle_Request>()
{
  return tutorial_interfaces::srv::builder::Init_SetVelocityTurtle_Request_velocity();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetVelocityTurtle_Response_msg
{
public:
  Init_SetVelocityTurtle_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::SetVelocityTurtle_Response msg(::tutorial_interfaces::srv::SetVelocityTurtle_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SetVelocityTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SetVelocityTurtle_Response>()
{
  return tutorial_interfaces::srv::builder::Init_SetVelocityTurtle_Response_msg();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SET_VELOCITY_TURTLE__BUILDER_HPP_
