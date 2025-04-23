// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#ifndef DOB_INTERFACES__MSG__DETAIL__DOB__TRAITS_HPP_
#define DOB_INTERFACES__MSG__DETAIL__DOB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dob_interfaces/msg/detail/dob__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dob_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dob & msg,
  std::ostream & out)
{
  out << "{";
  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << ", ";
  }

  // member: month
  {
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << ", ";
  }

  // member: day
  {
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dob & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << "\n";
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dob & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dob_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dob_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dob_interfaces::msg::Dob & msg,
  std::ostream & out, size_t indentation = 0)
{
  dob_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dob_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dob_interfaces::msg::Dob & msg)
{
  return dob_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dob_interfaces::msg::Dob>()
{
  return "dob_interfaces::msg::Dob";
}

template<>
inline const char * name<dob_interfaces::msg::Dob>()
{
  return "dob_interfaces/msg/Dob";
}

template<>
struct has_fixed_size<dob_interfaces::msg::Dob>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dob_interfaces::msg::Dob>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dob_interfaces::msg::Dob>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOB_INTERFACES__MSG__DETAIL__DOB__TRAITS_HPP_
