// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_prime:action/PrintPrime.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__BUILDER_HPP_
#define ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_prime/action/detail/print_prime__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_Goal_n
{
public:
  Init_PrintPrime_Goal_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_prime::action::PrintPrime_Goal n(::action_prime::action::PrintPrime_Goal::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_Goal>()
{
  return action_prime::action::builder::Init_PrintPrime_Goal_n();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_Result_primes
{
public:
  Init_PrintPrime_Result_primes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_prime::action::PrintPrime_Result primes(::action_prime::action::PrintPrime_Result::_primes_type arg)
  {
    msg_.primes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_Result>()
{
  return action_prime::action::builder::Init_PrintPrime_Result_primes();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_Feedback_current_prime
{
public:
  Init_PrintPrime_Feedback_current_prime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_prime::action::PrintPrime_Feedback current_prime(::action_prime::action::PrintPrime_Feedback::_current_prime_type arg)
  {
    msg_.current_prime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_Feedback>()
{
  return action_prime::action::builder::Init_PrintPrime_Feedback_current_prime();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_SendGoal_Request_goal
{
public:
  explicit Init_PrintPrime_SendGoal_Request_goal(::action_prime::action::PrintPrime_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_prime::action::PrintPrime_SendGoal_Request goal(::action_prime::action::PrintPrime_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_SendGoal_Request msg_;
};

class Init_PrintPrime_SendGoal_Request_goal_id
{
public:
  Init_PrintPrime_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintPrime_SendGoal_Request_goal goal_id(::action_prime::action::PrintPrime_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PrintPrime_SendGoal_Request_goal(msg_);
  }

private:
  ::action_prime::action::PrintPrime_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_SendGoal_Request>()
{
  return action_prime::action::builder::Init_PrintPrime_SendGoal_Request_goal_id();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_SendGoal_Response_stamp
{
public:
  explicit Init_PrintPrime_SendGoal_Response_stamp(::action_prime::action::PrintPrime_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_prime::action::PrintPrime_SendGoal_Response stamp(::action_prime::action::PrintPrime_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_SendGoal_Response msg_;
};

class Init_PrintPrime_SendGoal_Response_accepted
{
public:
  Init_PrintPrime_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintPrime_SendGoal_Response_stamp accepted(::action_prime::action::PrintPrime_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PrintPrime_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_prime::action::PrintPrime_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_SendGoal_Response>()
{
  return action_prime::action::builder::Init_PrintPrime_SendGoal_Response_accepted();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_GetResult_Request_goal_id
{
public:
  Init_PrintPrime_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_prime::action::PrintPrime_GetResult_Request goal_id(::action_prime::action::PrintPrime_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_GetResult_Request>()
{
  return action_prime::action::builder::Init_PrintPrime_GetResult_Request_goal_id();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_GetResult_Response_result
{
public:
  explicit Init_PrintPrime_GetResult_Response_result(::action_prime::action::PrintPrime_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_prime::action::PrintPrime_GetResult_Response result(::action_prime::action::PrintPrime_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_GetResult_Response msg_;
};

class Init_PrintPrime_GetResult_Response_status
{
public:
  Init_PrintPrime_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintPrime_GetResult_Response_result status(::action_prime::action::PrintPrime_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PrintPrime_GetResult_Response_result(msg_);
  }

private:
  ::action_prime::action::PrintPrime_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_GetResult_Response>()
{
  return action_prime::action::builder::Init_PrintPrime_GetResult_Response_status();
}

}  // namespace action_prime


namespace action_prime
{

namespace action
{

namespace builder
{

class Init_PrintPrime_FeedbackMessage_feedback
{
public:
  explicit Init_PrintPrime_FeedbackMessage_feedback(::action_prime::action::PrintPrime_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_prime::action::PrintPrime_FeedbackMessage feedback(::action_prime::action::PrintPrime_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_prime::action::PrintPrime_FeedbackMessage msg_;
};

class Init_PrintPrime_FeedbackMessage_goal_id
{
public:
  Init_PrintPrime_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintPrime_FeedbackMessage_feedback goal_id(::action_prime::action::PrintPrime_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PrintPrime_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_prime::action::PrintPrime_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_prime::action::PrintPrime_FeedbackMessage>()
{
  return action_prime::action::builder::Init_PrintPrime_FeedbackMessage_goal_id();
}

}  // namespace action_prime

#endif  // ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__BUILDER_HPP_
