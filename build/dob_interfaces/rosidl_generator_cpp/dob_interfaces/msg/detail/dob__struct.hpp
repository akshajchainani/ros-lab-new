// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#ifndef DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_HPP_
#define DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dob_interfaces__msg__Dob __attribute__((deprecated))
#else
# define DEPRECATED__dob_interfaces__msg__Dob __declspec(deprecated)
#endif

namespace dob_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dob_
{
  using Type = Dob_<ContainerAllocator>;

  explicit Dob_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0ll;
      this->month = 0ll;
      this->day = 0ll;
    }
  }

  explicit Dob_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0ll;
      this->month = 0ll;
      this->day = 0ll;
    }
  }

  // field types and members
  using _year_type =
    int64_t;
  _year_type year;
  using _month_type =
    int64_t;
  _month_type month;
  using _day_type =
    int64_t;
  _day_type day;

  // setters for named parameter idiom
  Type & set__year(
    const int64_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__month(
    const int64_t & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__day(
    const int64_t & _arg)
  {
    this->day = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dob_interfaces::msg::Dob_<ContainerAllocator> *;
  using ConstRawPtr =
    const dob_interfaces::msg::Dob_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dob_interfaces::msg::Dob_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dob_interfaces::msg::Dob_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dob_interfaces::msg::Dob_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dob_interfaces::msg::Dob_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dob_interfaces::msg::Dob_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dob_interfaces::msg::Dob_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dob_interfaces::msg::Dob_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dob_interfaces::msg::Dob_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dob_interfaces__msg__Dob
    std::shared_ptr<dob_interfaces::msg::Dob_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dob_interfaces__msg__Dob
    std::shared_ptr<dob_interfaces::msg::Dob_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dob_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dob_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dob_

// alias to use template instance with default allocator
using Dob =
  dob_interfaces::msg::Dob_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dob_interfaces

#endif  // DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_HPP_
