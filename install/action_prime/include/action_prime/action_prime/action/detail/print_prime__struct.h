// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_prime:action/PrintPrime.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_H_
#define ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_Goal
{
  int32_t n;
} action_prime__action__PrintPrime_Goal;

// Struct for a sequence of action_prime__action__PrintPrime_Goal.
typedef struct action_prime__action__PrintPrime_Goal__Sequence
{
  action_prime__action__PrintPrime_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'primes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_Result
{
  rosidl_runtime_c__int32__Sequence primes;
} action_prime__action__PrintPrime_Result;

// Struct for a sequence of action_prime__action__PrintPrime_Result.
typedef struct action_prime__action__PrintPrime_Result__Sequence
{
  action_prime__action__PrintPrime_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_Feedback
{
  int32_t current_prime;
} action_prime__action__PrintPrime_Feedback;

// Struct for a sequence of action_prime__action__PrintPrime_Feedback.
typedef struct action_prime__action__PrintPrime_Feedback__Sequence
{
  action_prime__action__PrintPrime_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_prime/action/detail/print_prime__struct.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_prime__action__PrintPrime_Goal goal;
} action_prime__action__PrintPrime_SendGoal_Request;

// Struct for a sequence of action_prime__action__PrintPrime_SendGoal_Request.
typedef struct action_prime__action__PrintPrime_SendGoal_Request__Sequence
{
  action_prime__action__PrintPrime_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_prime__action__PrintPrime_SendGoal_Response;

// Struct for a sequence of action_prime__action__PrintPrime_SendGoal_Response.
typedef struct action_prime__action__PrintPrime_SendGoal_Response__Sequence
{
  action_prime__action__PrintPrime_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_prime__action__PrintPrime_GetResult_Request;

// Struct for a sequence of action_prime__action__PrintPrime_GetResult_Request.
typedef struct action_prime__action__PrintPrime_GetResult_Request__Sequence
{
  action_prime__action__PrintPrime_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_prime/action/detail/print_prime__struct.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_GetResult_Response
{
  int8_t status;
  action_prime__action__PrintPrime_Result result;
} action_prime__action__PrintPrime_GetResult_Response;

// Struct for a sequence of action_prime__action__PrintPrime_GetResult_Response.
typedef struct action_prime__action__PrintPrime_GetResult_Response__Sequence
{
  action_prime__action__PrintPrime_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_prime/action/detail/print_prime__struct.h"

/// Struct defined in action/PrintPrime in the package action_prime.
typedef struct action_prime__action__PrintPrime_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_prime__action__PrintPrime_Feedback feedback;
} action_prime__action__PrintPrime_FeedbackMessage;

// Struct for a sequence of action_prime__action__PrintPrime_FeedbackMessage.
typedef struct action_prime__action__PrintPrime_FeedbackMessage__Sequence
{
  action_prime__action__PrintPrime_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_prime__action__PrintPrime_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PRIME__ACTION__DETAIL__PRINT_PRIME__STRUCT_H_
