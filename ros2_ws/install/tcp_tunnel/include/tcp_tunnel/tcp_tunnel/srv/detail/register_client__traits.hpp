// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__TRAITS_HPP_
#define TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tcp_tunnel/srv/detail/register_client__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'topic'
// Member 'client_ip'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'tunnel_queue_size'
#include "std_msgs/msg/detail/u_int64__traits.hpp"
// Member 'client_port'
#include "std_msgs/msg/detail/u_int16__traits.hpp"

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterClient_Request & msg,
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

  // member: client_ip
  {
    out << "client_ip: ";
    to_flow_style_yaml(msg.client_ip, out);
    out << ", ";
  }

  // member: client_port
  {
    out << "client_port: ";
    to_flow_style_yaml(msg.client_port, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterClient_Request & msg,
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

  // member: client_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_ip:\n";
    to_block_style_yaml(msg.client_ip, out, indentation + 2);
  }

  // member: client_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_port:\n";
    to_block_style_yaml(msg.client_port, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterClient_Request & msg, bool use_flow_style = false)
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
  const tcp_tunnel::srv::RegisterClient_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::RegisterClient_Request & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::RegisterClient_Request>()
{
  return "tcp_tunnel::srv::RegisterClient_Request";
}

template<>
inline const char * name<tcp_tunnel::srv::RegisterClient_Request>()
{
  return "tcp_tunnel/srv/RegisterClient_Request";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RegisterClient_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value && has_fixed_size<std_msgs::msg::UInt16>::value && has_fixed_size<std_msgs::msg::UInt64>::value> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::RegisterClient_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value && has_bounded_size<std_msgs::msg::UInt16>::value && has_bounded_size<std_msgs::msg::UInt64>::value> {};

template<>
struct is_message<tcp_tunnel::srv::RegisterClient_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'topic_exists'
#include "std_msgs/msg/detail/bool__traits.hpp"
// Member 'topic_type'
// Member 'reliability_policy'
// Member 'durability_policy'
// Member 'liveliness_policy'
// already included above
// #include "std_msgs/msg/detail/string__traits.hpp"

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterClient_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_exists
  {
    out << "topic_exists: ";
    to_flow_style_yaml(msg.topic_exists, out);
    out << ", ";
  }

  // member: topic_type
  {
    out << "topic_type: ";
    to_flow_style_yaml(msg.topic_type, out);
    out << ", ";
  }

  // member: reliability_policy
  {
    out << "reliability_policy: ";
    to_flow_style_yaml(msg.reliability_policy, out);
    out << ", ";
  }

  // member: durability_policy
  {
    out << "durability_policy: ";
    to_flow_style_yaml(msg.durability_policy, out);
    out << ", ";
  }

  // member: liveliness_policy
  {
    out << "liveliness_policy: ";
    to_flow_style_yaml(msg.liveliness_policy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterClient_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_exists:\n";
    to_block_style_yaml(msg.topic_exists, out, indentation + 2);
  }

  // member: topic_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_type:\n";
    to_block_style_yaml(msg.topic_type, out, indentation + 2);
  }

  // member: reliability_policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reliability_policy:\n";
    to_block_style_yaml(msg.reliability_policy, out, indentation + 2);
  }

  // member: durability_policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "durability_policy:\n";
    to_block_style_yaml(msg.durability_policy, out, indentation + 2);
  }

  // member: liveliness_policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "liveliness_policy:\n";
    to_block_style_yaml(msg.liveliness_policy, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterClient_Response & msg, bool use_flow_style = false)
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
  const tcp_tunnel::srv::RegisterClient_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::RegisterClient_Response & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::RegisterClient_Response>()
{
  return "tcp_tunnel::srv::RegisterClient_Response";
}

template<>
inline const char * name<tcp_tunnel::srv::RegisterClient_Response>()
{
  return "tcp_tunnel/srv/RegisterClient_Response";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RegisterClient_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::RegisterClient_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<tcp_tunnel::srv::RegisterClient_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tcp_tunnel::srv::RegisterClient>()
{
  return "tcp_tunnel::srv::RegisterClient";
}

template<>
inline const char * name<tcp_tunnel::srv::RegisterClient>()
{
  return "tcp_tunnel/srv/RegisterClient";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RegisterClient>
  : std::integral_constant<
    bool,
    has_fixed_size<tcp_tunnel::srv::RegisterClient_Request>::value &&
    has_fixed_size<tcp_tunnel::srv::RegisterClient_Response>::value
  >
{
};

template<>
struct has_bounded_size<tcp_tunnel::srv::RegisterClient>
  : std::integral_constant<
    bool,
    has_bounded_size<tcp_tunnel::srv::RegisterClient_Request>::value &&
    has_bounded_size<tcp_tunnel::srv::RegisterClient_Response>::value
  >
{
};

template<>
struct is_service<tcp_tunnel::srv::RegisterClient>
  : std::true_type
{
};

template<>
struct is_service_request<tcp_tunnel::srv::RegisterClient_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tcp_tunnel::srv::RegisterClient_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__TRAITS_HPP_
