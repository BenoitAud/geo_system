// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tcp_tunnel:srv/RemoveTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__TRAITS_HPP_
#define TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tcp_tunnel/srv/detail/remove_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'topic'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const RemoveTopic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic
  {
    out << "topic: ";
    to_flow_style_yaml(msg.topic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoveTopic_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoveTopic_Request & msg, bool use_flow_style = false)
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
  const tcp_tunnel::srv::RemoveTopic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::RemoveTopic_Request & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::RemoveTopic_Request>()
{
  return "tcp_tunnel::srv::RemoveTopic_Request";
}

template<>
inline const char * name<tcp_tunnel::srv::RemoveTopic_Request>()
{
  return "tcp_tunnel/srv/RemoveTopic_Request";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RemoveTopic_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::RemoveTopic_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<tcp_tunnel::srv::RemoveTopic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tcp_tunnel
{

namespace srv
{

inline void to_flow_style_yaml(
  const RemoveTopic_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoveTopic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoveTopic_Response & msg, bool use_flow_style = false)
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
  const tcp_tunnel::srv::RemoveTopic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tcp_tunnel::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tcp_tunnel::srv::to_yaml() instead")]]
inline std::string to_yaml(const tcp_tunnel::srv::RemoveTopic_Response & msg)
{
  return tcp_tunnel::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tcp_tunnel::srv::RemoveTopic_Response>()
{
  return "tcp_tunnel::srv::RemoveTopic_Response";
}

template<>
inline const char * name<tcp_tunnel::srv::RemoveTopic_Response>()
{
  return "tcp_tunnel/srv/RemoveTopic_Response";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RemoveTopic_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tcp_tunnel::srv::RemoveTopic_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tcp_tunnel::srv::RemoveTopic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tcp_tunnel::srv::RemoveTopic>()
{
  return "tcp_tunnel::srv::RemoveTopic";
}

template<>
inline const char * name<tcp_tunnel::srv::RemoveTopic>()
{
  return "tcp_tunnel/srv/RemoveTopic";
}

template<>
struct has_fixed_size<tcp_tunnel::srv::RemoveTopic>
  : std::integral_constant<
    bool,
    has_fixed_size<tcp_tunnel::srv::RemoveTopic_Request>::value &&
    has_fixed_size<tcp_tunnel::srv::RemoveTopic_Response>::value
  >
{
};

template<>
struct has_bounded_size<tcp_tunnel::srv::RemoveTopic>
  : std::integral_constant<
    bool,
    has_bounded_size<tcp_tunnel::srv::RemoveTopic_Request>::value &&
    has_bounded_size<tcp_tunnel::srv::RemoveTopic_Response>::value
  >
{
};

template<>
struct is_service<tcp_tunnel::srv::RemoveTopic>
  : std::true_type
{
};

template<>
struct is_service_request<tcp_tunnel::srv::RemoveTopic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tcp_tunnel::srv::RemoveTopic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__TRAITS_HPP_
