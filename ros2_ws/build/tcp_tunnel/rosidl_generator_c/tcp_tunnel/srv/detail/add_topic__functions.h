// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tcp_tunnel:srv/AddTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__FUNCTIONS_H_
#define TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tcp_tunnel/msg/rosidl_generator_c__visibility_control.h"

#include "tcp_tunnel/srv/detail/add_topic__struct.h"

/// Initialize srv/AddTopic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tcp_tunnel__srv__AddTopic_Request
 * )) before or use
 * tcp_tunnel__srv__AddTopic_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__init(tcp_tunnel__srv__AddTopic_Request * msg);

/// Finalize srv/AddTopic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Request__fini(tcp_tunnel__srv__AddTopic_Request * msg);

/// Create srv/AddTopic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tcp_tunnel__srv__AddTopic_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
tcp_tunnel__srv__AddTopic_Request *
tcp_tunnel__srv__AddTopic_Request__create();

/// Destroy srv/AddTopic message.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Request__destroy(tcp_tunnel__srv__AddTopic_Request * msg);

/// Check for srv/AddTopic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__are_equal(const tcp_tunnel__srv__AddTopic_Request * lhs, const tcp_tunnel__srv__AddTopic_Request * rhs);

/// Copy a srv/AddTopic message.
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
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__copy(
  const tcp_tunnel__srv__AddTopic_Request * input,
  tcp_tunnel__srv__AddTopic_Request * output);

/// Initialize array of srv/AddTopic messages.
/**
 * It allocates the memory for the number of elements and calls
 * tcp_tunnel__srv__AddTopic_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__Sequence__init(tcp_tunnel__srv__AddTopic_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddTopic messages.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Request__Sequence__fini(tcp_tunnel__srv__AddTopic_Request__Sequence * array);

/// Create array of srv/AddTopic messages.
/**
 * It allocates the memory for the array and calls
 * tcp_tunnel__srv__AddTopic_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
tcp_tunnel__srv__AddTopic_Request__Sequence *
tcp_tunnel__srv__AddTopic_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddTopic messages.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Request__Sequence__destroy(tcp_tunnel__srv__AddTopic_Request__Sequence * array);

/// Check for srv/AddTopic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__Sequence__are_equal(const tcp_tunnel__srv__AddTopic_Request__Sequence * lhs, const tcp_tunnel__srv__AddTopic_Request__Sequence * rhs);

/// Copy an array of srv/AddTopic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Request__Sequence__copy(
  const tcp_tunnel__srv__AddTopic_Request__Sequence * input,
  tcp_tunnel__srv__AddTopic_Request__Sequence * output);

/// Initialize srv/AddTopic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tcp_tunnel__srv__AddTopic_Response
 * )) before or use
 * tcp_tunnel__srv__AddTopic_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__init(tcp_tunnel__srv__AddTopic_Response * msg);

/// Finalize srv/AddTopic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Response__fini(tcp_tunnel__srv__AddTopic_Response * msg);

/// Create srv/AddTopic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tcp_tunnel__srv__AddTopic_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
tcp_tunnel__srv__AddTopic_Response *
tcp_tunnel__srv__AddTopic_Response__create();

/// Destroy srv/AddTopic message.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Response__destroy(tcp_tunnel__srv__AddTopic_Response * msg);

/// Check for srv/AddTopic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__are_equal(const tcp_tunnel__srv__AddTopic_Response * lhs, const tcp_tunnel__srv__AddTopic_Response * rhs);

/// Copy a srv/AddTopic message.
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
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__copy(
  const tcp_tunnel__srv__AddTopic_Response * input,
  tcp_tunnel__srv__AddTopic_Response * output);

/// Initialize array of srv/AddTopic messages.
/**
 * It allocates the memory for the number of elements and calls
 * tcp_tunnel__srv__AddTopic_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__Sequence__init(tcp_tunnel__srv__AddTopic_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddTopic messages.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Response__Sequence__fini(tcp_tunnel__srv__AddTopic_Response__Sequence * array);

/// Create array of srv/AddTopic messages.
/**
 * It allocates the memory for the array and calls
 * tcp_tunnel__srv__AddTopic_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
tcp_tunnel__srv__AddTopic_Response__Sequence *
tcp_tunnel__srv__AddTopic_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddTopic messages.
/**
 * It calls
 * tcp_tunnel__srv__AddTopic_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
void
tcp_tunnel__srv__AddTopic_Response__Sequence__destroy(tcp_tunnel__srv__AddTopic_Response__Sequence * array);

/// Check for srv/AddTopic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__Sequence__are_equal(const tcp_tunnel__srv__AddTopic_Response__Sequence * lhs, const tcp_tunnel__srv__AddTopic_Response__Sequence * rhs);

/// Copy an array of srv/AddTopic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tcp_tunnel
bool
tcp_tunnel__srv__AddTopic_Response__Sequence__copy(
  const tcp_tunnel__srv__AddTopic_Response__Sequence * input,
  tcp_tunnel__srv__AddTopic_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__FUNCTIONS_H_