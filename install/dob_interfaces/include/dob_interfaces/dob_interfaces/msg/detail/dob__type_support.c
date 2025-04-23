// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dob_interfaces/msg/detail/dob__rosidl_typesupport_introspection_c.h"
#include "dob_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dob_interfaces/msg/detail/dob__functions.h"
#include "dob_interfaces/msg/detail/dob__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dob_interfaces__msg__Dob__init(message_memory);
}

void dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_fini_function(void * message_memory)
{
  dob_interfaces__msg__Dob__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_member_array[3] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dob_interfaces__msg__Dob, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dob_interfaces__msg__Dob, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dob_interfaces__msg__Dob, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_members = {
  "dob_interfaces__msg",  // message namespace
  "Dob",  // message name
  3,  // number of fields
  sizeof(dob_interfaces__msg__Dob),
  dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_member_array,  // message members
  dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_init_function,  // function to initialize message memory (memory has to be allocated)
  dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_type_support_handle = {
  0,
  &dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dob_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dob_interfaces, msg, Dob)() {
  if (!dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_type_support_handle.typesupport_identifier) {
    dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dob_interfaces__msg__Dob__rosidl_typesupport_introspection_c__Dob_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
