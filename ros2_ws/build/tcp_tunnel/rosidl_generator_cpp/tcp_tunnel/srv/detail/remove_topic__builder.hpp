// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tcp_tunnel:srv/RemoveTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__BUILDER_HPP_
#define TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tcp_tunnel/srv/detail/remove_topic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tcp_tunnel
{

namespace srv
{

namespace builder
{

class Init_RemoveTopic_Request_topic
{
public:
  Init_RemoveTopic_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tcp_tunnel::srv::RemoveTopic_Request topic(::tcp_tunnel::srv::RemoveTopic_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tcp_tunnel::srv::RemoveTopic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tcp_tunnel::srv::RemoveTopic_Request>()
{
  return tcp_tunnel::srv::builder::Init_RemoveTopic_Request_topic();
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
auto build<::tcp_tunnel::srv::RemoveTopic_Response>()
{
  return ::tcp_tunnel::srv::RemoveTopic_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tcp_tunnel

#endif  // TCP_TUNNEL__SRV__DETAIL__REMOVE_TOPIC__BUILDER_HPP_
