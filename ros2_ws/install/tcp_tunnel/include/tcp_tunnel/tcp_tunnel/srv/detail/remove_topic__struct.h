// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tcp_tunnel:srv/RemoveTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__STRUCT_H_
#define TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/RemoveTopic in the package tcp_tunnel.
typedef struct tcp_tunnel__srv__RemoveTopic_Request
{
  std_msgs__msg__String topic;
} tcp_tunnel__srv__RemoveTopic_Request;

// Struct for a sequence of tcp_tunnel__srv__RemoveTopic_Request.
typedef struct tcp_tunnel__srv__RemoveTopic_Request__Sequence
{
  tcp_tunnel__srv__RemoveTopic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tcp_tunnel__srv__RemoveTopic_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RemoveTopic in the package tcp_tunnel.
typedef struct tcp_tunnel__srv__RemoveTopic_Response
{
  uint8_t structure_needs_at_least_one_member;
} tcp_tunnel__srv__RemoveTopic_Response;

// Struct for a sequence of tcp_tunnel__srv__RemoveTopic_Response.
typedef struct tcp_tunnel__srv__RemoveTopic_Response__Sequence
{
  tcp_tunnel__srv__RemoveTopic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tcp_tunnel__srv__RemoveTopic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__STRUCT_H_
