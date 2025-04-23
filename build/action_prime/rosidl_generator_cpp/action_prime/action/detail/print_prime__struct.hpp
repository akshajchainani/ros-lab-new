// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_prime:action/PrintPrime.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_HPP_
#define ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_Goal __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_Goal_
{
  using Type = PrintPrime_Goal_<ContainerAllocator>;

  explicit PrintPrime_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  explicit PrintPrime_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  // field types and members
  using _n_type =
    int32_t;
  _n_type n;

  // setters for named parameter idiom
  Type & set__n(
    const int32_t & _arg)
  {
    this->n = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_Goal
    std::shared_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_Goal
    std::shared_ptr<action_prime::action::PrintPrime_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_Goal_ & other) const
  {
    if (this->n != other.n) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_Goal_

// alias to use template instance with default allocator
using PrintPrime_Goal =
  action_prime::action::PrintPrime_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime


#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_Result __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_Result_
{
  using Type = PrintPrime_Result_<ContainerAllocator>;

  explicit PrintPrime_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PrintPrime_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _primes_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _primes_type primes;

  // setters for named parameter idiom
  Type & set__primes(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->primes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_Result
    std::shared_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_Result
    std::shared_ptr<action_prime::action::PrintPrime_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_Result_ & other) const
  {
    if (this->primes != other.primes) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_Result_

// alias to use template instance with default allocator
using PrintPrime_Result =
  action_prime::action::PrintPrime_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime


#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_Feedback __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_Feedback_
{
  using Type = PrintPrime_Feedback_<ContainerAllocator>;

  explicit PrintPrime_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_prime = 0l;
    }
  }

  explicit PrintPrime_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_prime = 0l;
    }
  }

  // field types and members
  using _current_prime_type =
    int32_t;
  _current_prime_type current_prime;

  // setters for named parameter idiom
  Type & set__current_prime(
    const int32_t & _arg)
  {
    this->current_prime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_Feedback
    std::shared_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_Feedback
    std::shared_ptr<action_prime::action::PrintPrime_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_Feedback_ & other) const
  {
    if (this->current_prime != other.current_prime) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_Feedback_

// alias to use template instance with default allocator
using PrintPrime_Feedback =
  action_prime::action::PrintPrime_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "action_prime/action/detail/print_prime__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_SendGoal_Request __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_SendGoal_Request_
{
  using Type = PrintPrime_SendGoal_Request_<ContainerAllocator>;

  explicit PrintPrime_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PrintPrime_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_prime::action::PrintPrime_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_prime::action::PrintPrime_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_SendGoal_Request
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_SendGoal_Request
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_SendGoal_Request_

// alias to use template instance with default allocator
using PrintPrime_SendGoal_Request =
  action_prime::action::PrintPrime_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_SendGoal_Response __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_SendGoal_Response_
{
  using Type = PrintPrime_SendGoal_Response_<ContainerAllocator>;

  explicit PrintPrime_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PrintPrime_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_SendGoal_Response
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_SendGoal_Response
    std::shared_ptr<action_prime::action::PrintPrime_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_SendGoal_Response_

// alias to use template instance with default allocator
using PrintPrime_SendGoal_Response =
  action_prime::action::PrintPrime_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime

namespace action_prime
{

namespace action
{

struct PrintPrime_SendGoal
{
  using Request = action_prime::action::PrintPrime_SendGoal_Request;
  using Response = action_prime::action::PrintPrime_SendGoal_Response;
};

}  // namespace action

}  // namespace action_prime


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_GetResult_Request __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_GetResult_Request_
{
  using Type = PrintPrime_GetResult_Request_<ContainerAllocator>;

  explicit PrintPrime_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PrintPrime_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_GetResult_Request
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_GetResult_Request
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_GetResult_Request_

// alias to use template instance with default allocator
using PrintPrime_GetResult_Request =
  action_prime::action::PrintPrime_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime


// Include directives for member types
// Member 'result'
// already included above
// #include "action_prime/action/detail/print_prime__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_GetResult_Response __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_GetResult_Response_
{
  using Type = PrintPrime_GetResult_Response_<ContainerAllocator>;

  explicit PrintPrime_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PrintPrime_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_prime::action::PrintPrime_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_prime::action::PrintPrime_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_GetResult_Response
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_GetResult_Response
    std::shared_ptr<action_prime::action::PrintPrime_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_GetResult_Response_

// alias to use template instance with default allocator
using PrintPrime_GetResult_Response =
  action_prime::action::PrintPrime_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime

namespace action_prime
{

namespace action
{

struct PrintPrime_GetResult
{
  using Request = action_prime::action::PrintPrime_GetResult_Request;
  using Response = action_prime::action::PrintPrime_GetResult_Response;
};

}  // namespace action

}  // namespace action_prime


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_prime/action/detail/print_prime__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_prime__action__PrintPrime_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_prime__action__PrintPrime_FeedbackMessage __declspec(deprecated)
#endif

namespace action_prime
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PrintPrime_FeedbackMessage_
{
  using Type = PrintPrime_FeedbackMessage_<ContainerAllocator>;

  explicit PrintPrime_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PrintPrime_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_prime::action::PrintPrime_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_prime::action::PrintPrime_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_prime__action__PrintPrime_FeedbackMessage
    std::shared_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_prime__action__PrintPrime_FeedbackMessage
    std::shared_ptr<action_prime::action::PrintPrime_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrintPrime_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrintPrime_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrintPrime_FeedbackMessage_

// alias to use template instance with default allocator
using PrintPrime_FeedbackMessage =
  action_prime::action::PrintPrime_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_prime

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_prime
{

namespace action
{

struct PrintPrime
{
  /// The goal message defined in the action definition.
  using Goal = action_prime::action::PrintPrime_Goal;
  /// The result message defined in the action definition.
  using Result = action_prime::action::PrintPrime_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_prime::action::PrintPrime_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_prime::action::PrintPrime_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_prime::action::PrintPrime_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_prime::action::PrintPrime_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PrintPrime PrintPrime;

}  // namespace action

}  // namespace action_prime

#endif  // ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_HPP_
