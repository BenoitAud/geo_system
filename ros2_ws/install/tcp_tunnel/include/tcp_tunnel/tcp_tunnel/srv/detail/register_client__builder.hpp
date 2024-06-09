// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__BUILDER_HPP_
#define TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tcp_tunnel/srv/detail/register_client__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tcp_tunnel
{

namespace srv
{

namespace builder
{

class Init_RegisterClient_Request_client_port
{
public:
  explicit Init_RegisterClient_Request_client_port(::tcp_tunnel::srv::RegisterClient_Request & msg)
  : msg_(msg)
  {}
  ::tcp_tunnel::srv::RegisterClient_Request client_port(::tcp_tunnel::srv::RegisterClient_Request::_client_port_type arg)
  {
    msg_.client_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Request msg_;
};

class Init_RegisterClient_Request_client_ip
{
public:
  explicit Init_RegisterClient_Request_client_ip(::tcp_tunnel::srv::RegisterClient_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterClient_Request_client_port client_ip(::tcp_tunnel::srv::RegisterClient_Request::_client_ip_type arg)
  {
    msg_.client_ip = std::move(arg);
    return Init_RegisterClient_Request_client_port(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Request msg_;
};

class Init_RegisterClient_Request_tunnel_queue_size
{
public:
  explicit Init_RegisterClient_Request_tunnel_queue_size(::tcp_tunnel::srv::RegisterClient_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterClient_Request_client_ip tunnel_queue_size(::tcp_tunnel::srv::RegisterClient_Request::_tunnel_queue_size_type arg)
  {
    msg_.tunnel_queue_size = std::move(arg);
    return Init_RegisterClient_Request_client_ip(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Request msg_;
};

class Init_RegisterClient_Request_topic
{
public:
  Init_RegisterClient_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterClient_Request_tunnel_queue_size topic(::tcp_tunnel::srv::RegisterClient_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_RegisterClient_Request_tunnel_queue_size(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tcp_tunnel::srv::RegisterClient_Request>()
{
  return tcp_tunnel::srv::builder::Init_RegisterClient_Request_topic();
}

}  // namespace tcp_tunnel


namespace tcp_tunnel
{

namespace srv
{

namespace builder
{

class Init_RegisterClient_Response_liveliness_policy
{
public:
  explicit Init_RegisterClient_Response_liveliness_policy(::tcp_tunnel::srv::RegisterClient_Response & msg)
  : msg_(msg)
  {}
  ::tcp_tunnel::srv::RegisterClient_Response liveliness_policy(::tcp_tunnel::srv::RegisterClient_Response::_liveliness_policy_type arg)
  {
    msg_.liveliness_policy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Response msg_;
};

class Init_RegisterClient_Response_durability_policy
{
public:
  explicit Init_RegisterClient_Response_durability_policy(::tcp_tunnel::srv::RegisterClient_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterClient_Response_liveliness_policy durability_policy(::tcp_tunnel::srv::RegisterClient_Response::_durability_policy_type arg)
  {
    msg_.durability_policy = std::move(arg);
    return Init_RegisterClient_Response_liveliness_policy(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Response msg_;
};

class Init_RegisterClient_Response_reliability_policy
{
public:
  explicit Init_RegisterClient_Response_reliability_policy(::tcp_tunnel::srv::RegisterClient_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterClient_Response_durability_policy reliability_policy(::tcp_tunnel::srv::RegisterClient_Response::_reliability_policy_type arg)
  {
    msg_.reliability_policy = std::move(arg);
    return Init_RegisterClient_Response_durability_policy(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Response msg_;
};

class Init_RegisterClient_Response_topic_type
{
public:
  explicit Init_RegisterClient_Response_topic_type(::tcp_tunnel::srv::RegisterClient_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterClient_Response_reliability_policy topic_type(::tcp_tunnel::srv::RegisterClient_Response::_topic_type_type arg)
  {
    msg_.topic_type = std::move(arg);
    return Init_RegisterClient_Response_reliability_policy(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Response msg_;
};

class Init_RegisterClient_Response_topic_exists
{
public:
  Init_RegisterClient_Response_topic_exists()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterClient_Response_topic_type topic_exists(::tcp_tunnel::srv::RegisterClient_Response::_topic_exists_type arg)
  {
    msg_.topic_exists = std::move(arg);
    return Init_RegisterClient_Response_topic_type(msg_);
  }

private:
  ::tcp_tunnel::srv::RegisterClient_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tcp_tunnel::srv::RegisterClient_Response>()
{
  return tcp_tunnel::srv::builder::Init_RegisterClient_Response_topic_exists();
}

}  // namespace tcp_tunnel

#endif  // TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__BUILDER_HPP_
