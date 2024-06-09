// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_H_
#define TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_H_

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
// Member 'client_ip'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'tunnel_queue_size'
#include "std_msgs/msg/detail/u_int64__struct.h"
// Member 'client_port'
#include "std_msgs/msg/detail/u_int16__struct.h"

/// Struct defined in srv/RegisterClient in the package tcp_tunnel.
typedef struct tcp_tunnel__srv__RegisterClient_Request
{
  std_msgs__msg__String topic;
  std_msgs__msg__UInt64 tunnel_queue_size;
  std_msgs__msg__String client_ip;
  std_msgs__msg__UInt16 client_port;
} tcp_tunnel__srv__RegisterClient_Request;

// Struct for a sequence of tcp_tunnel__srv__RegisterClient_Request.
typedef struct tcp_tunnel__srv__RegisterClient_Request__Sequence
{
  tcp_tunnel__srv__RegisterClient_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tcp_tunnel__srv__RegisterClient_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topic_exists'
#include "std_msgs/msg/detail/bool__struct.h"
// Member 'topic_type'
// Member 'reliability_policy'
// Member 'durability_policy'
// Member 'liveliness_policy'
// already included above
// #include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/RegisterClient in the package tcp_tunnel.
typedef struct tcp_tunnel__srv__RegisterClient_Response
{
  std_msgs__msg__Bool topic_exists;
  std_msgs__msg__String topic_type;
  std_msgs__msg__String reliability_policy;
  std_msgs__msg__String durability_policy;
  std_msgs__msg__String liveliness_policy;
} tcp_tunnel__srv__RegisterClient_Response;

// Struct for a sequence of tcp_tunnel__srv__RegisterClient_Response.
typedef struct tcp_tunnel__srv__RegisterClient_Response__Sequence
{
  tcp_tunnel__srv__RegisterClient_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tcp_tunnel__srv__RegisterClient_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_H_
