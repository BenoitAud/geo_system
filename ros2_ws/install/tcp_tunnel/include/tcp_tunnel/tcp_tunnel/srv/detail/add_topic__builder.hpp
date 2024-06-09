// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tcp_tunnel:srv/AddTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__BUILDER_HPP_
#define TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tcp_tunnel/srv/detail/add_topic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tcp_tunnel
{

namespace srv
{

namespace builder
{

class Init_AddTopic_Request_server_namespace
{
public:
  explicit Init_AddTopic_Request_server_namespace(::tcp_tunnel::srv::AddTopic_Request & msg)
  : msg_(msg)
  {}
  ::tcp_tunnel::srv::AddTopic_Request server_namespace(::tcp_tunnel::srv::AddTopic_Request::_server_namespace_type arg)
  {
    msg_.server_namespace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tcp_tunnel::srv::AddTopic_Request msg_;
};

class Init_AddTopic_Request_tunnel_queue_size
{
public:
  explicit Init_AddTopic_Request_tunnel_queue_size(::tcp_tunnel::srv::AddTopic_Request & msg)
  : msg_(msg)
  {}
  Init_AddTopic_Request_server_namespace tunnel_queue_size(::tcp_tunnel::srv::AddTopic_Request::_tunnel_queue_size_type arg)
  {
    msg_.tunnel_queue_size = std::move(arg);
    return Init_AddTopic_Request_server_namespace(msg_);
  }

private:
  ::tcp_tunnel::srv::AddTopic_Request msg_;
};

class Init_AddTopic_Request_topic
{
public:
  Init_AddTopic_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTopic_Request_tunnel_queue_size topic(::tcp_tunnel::srv::AddTopic_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_AddTopic_Request_tunnel_queue_size(msg_);
  }

private:
  ::tcp_tunnel::srv::AddTopic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tcp_tunnel::srv::AddTopic_Request>()
{
  return tcp_tunnel::srv::builder::Init_AddTopic_Request_topic();
}

}  // namespace tcp_tunnel


namespace tcp_tunnel
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tcp_tunnel::srv::AddTopic_Response>()
{
  return ::tcp_tunnel::srv::AddTopic_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tcp_tunnel

#endif  // TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__BUILDER_HPP_
