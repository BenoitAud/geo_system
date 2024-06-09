// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tcp_tunnel:srv/AddTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__TRAITS_HPP_
#define TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tcp_tunnel/srv/detail/add_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'topic'
// Member 'tunnel_queue_size'
// Member 'server_namespace'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTopic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic
  {
    out << "topic: ";
    to_flow_style_yaml(msg.topic, out);
    out << ", ";
  }

  // member: tunnel_queue_size
  {
    out << "tunnel_queue_size: ";
    to_flow_style_yaml(msg.tunnel_queue_size, out);
    out << ", ";
  }

  // member: server_namespace
  {
    out << "server_namespace: ";
    to_flow_style_yaml(msg.server_namespace, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTopic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic:\n";
    to_block_style_yaml(msg.topic, out, indentation + 2);
  }

  // member: tunnel_queue_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tunnel_queue_size:\n";
    to_block_style_yaml(msg.tunnel_queue_size, out, indentation + 2);
  }

  // member: server_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_namespace:\n";
    to_block_style_yaml(msg.server_namespace, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTopic_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tcp_tunnel

namespace rosidl_generator_traits
{

[[deprecated("use tcp_tunnel::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tcp_tunnel::srv::AddTopic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::AddTopic_Request & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::AddTopic_Request>()
{
  return "tcp_tunnel::srv::AddTopic_Request";
}

template<>
inline const char * name<tcp_tunnel::srv::AddTopic_Request>()
{
  return "tcp_tunnel/srv/AddTopic_Request";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::AddTopic_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::AddTopic_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<tcp_tunnel::srv::AddTopic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTopic_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTopic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTopic_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tcp_tunnel

namespace rosidl_generator_traits
{

[[deprecated("use tcp_tunnel::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tcp_tunnel::srv::AddTopic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::AddTopic_Response & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::AddTopic_Response>()
{
  return "tcp_tunnel::srv::AddTopic_Response";
}

template<>
inline const char * name<tcp_tunnel::srv::AddTopic_Response>()
{
  return "tcp_tunnel/srv/AddTopic_Response";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::AddTopic_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::AddTopic_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tcp_tunnel::srv::AddTopic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tcp_tunnel::srv::AddTopic>()
{
  return "tcp_tunnel::srv::AddTopic";
}

template<>
inline const char * name<tcp_tunnel::srv::AddTopic>()
{
  return "tcp_tunnel/srv/AddTopic";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::AddTopic>
  : std::integral_constant<
    bool,
    has_fixed_size<tcp_tunnel::srv::AddTopic_Request>::value &&
    has_fixed_size<tcp_tunnel::srv::AddTopic_Response>::value
  >
{
};

template<>
struct has_bounded_size<tcp_tunnel::srv::AddTopic>
  : std::integral_constant<
    bool,
    has_bounded_size<tcp_tunnel::srv::AddTopic_Request>::value &&
    has_bounded_size<tcp_tunnel::srv::AddTopic_Response>::value
  >
{
};

template<>
struct is_service<tcp_tunnel::srv::AddTopic>
  : std::true_type
{
};

template<>
struct is_service_request<tcp_tunnel::srv::AddTopic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tcp_tunnel::srv::AddTopic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__TRAITS_HPP_
