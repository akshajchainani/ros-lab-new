// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#ifndef DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_H_
#define DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Dob in the package dob_interfaces.
typedef struct dob_interfaces__msg__Dob
{
  int64_t year;
  int64_t month;
  int64_t day;
} dob_interfaces__msg__Dob;

// Struct for a sequence of dob_interfaces__msg__Dob.
typedef struct dob_interfaces__msg__Dob__Sequence
{
  dob_interfaces__msg__Dob * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dob_interfaces__msg__Dob__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOB_INTERFACES__MSG__DETAIL__DOB__STRUCT_H_
