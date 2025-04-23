// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dob_interfaces:msg/Dob.idl
// generated code does not contain a copyright notice

#ifndef DOB_INTERFACES__MSG__DETAIL__DOB__FUNCTIONS_H_
#define DOB_INTERFACES__MSG__DETAIL__DOB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dob_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dob_interfaces/msg/detail/dob__struct.h"

/// Initialize msg/Dob message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dob_interfaces__msg__Dob
 * )) before or use
 * dob_interfaces__msg__Dob__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__init(dob_interfaces__msg__Dob * msg);

/// Finalize msg/Dob message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
void
dob_interfaces__msg__Dob__fini(dob_interfaces__msg__Dob * msg);

/// Create msg/Dob message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dob_interfaces__msg__Dob__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
dob_interfaces__msg__Dob *
dob_interfaces__msg__Dob__create();

/// Destroy msg/Dob message.
/**
 * It calls
 * dob_interfaces__msg__Dob__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
void
dob_interfaces__msg__Dob__destroy(dob_interfaces__msg__Dob * msg);

/// Check for msg/Dob message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__are_equal(const dob_interfaces__msg__Dob * lhs, const dob_interfaces__msg__Dob * rhs);

/// Copy a msg/Dob message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__copy(
  const dob_interfaces__msg__Dob * input,
  dob_interfaces__msg__Dob * output);

/// Initialize array of msg/Dob messages.
/**
 * It allocates the memory for the number of elements and calls
 * dob_interfaces__msg__Dob__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__Sequence__init(dob_interfaces__msg__Dob__Sequence * array, size_t size);

/// Finalize array of msg/Dob messages.
/**
 * It calls
 * dob_interfaces__msg__Dob__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
void
dob_interfaces__msg__Dob__Sequence__fini(dob_interfaces__msg__Dob__Sequence * array);

/// Create array of msg/Dob messages.
/**
 * It allocates the memory for the array and calls
 * dob_interfaces__msg__Dob__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
dob_interfaces__msg__Dob__Sequence *
dob_interfaces__msg__Dob__Sequence__create(size_t size);

/// Destroy array of msg/Dob messages.
/**
 * It calls
 * dob_interfaces__msg__Dob__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
void
dob_interfaces__msg__Dob__Sequence__destroy(dob_interfaces__msg__Dob__Sequence * array);

/// Check for msg/Dob message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__Sequence__are_equal(const dob_interfaces__msg__Dob__Sequence * lhs, const dob_interfaces__msg__Dob__Sequence * rhs);

/// Copy an array of msg/Dob messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dob_interfaces
bool
dob_interfaces__msg__Dob__Sequence__copy(
  const dob_interfaces__msg__Dob__Sequence * input,
  dob_interfaces__msg__Dob__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOB_INTERFACES__MSG__DETAIL__DOB__FUNCTIONS_H_
