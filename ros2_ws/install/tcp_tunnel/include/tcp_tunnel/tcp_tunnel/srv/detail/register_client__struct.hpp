// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_HPP_
#define TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'topic'
// Member 'client_ip'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'tunnel_queue_size'
#include "std_msgs/msg/detail/u_int64__struct.hpp"
// Member 'client_port'
#include "std_msgs/msg/detail/u_int16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tcp_tunnel__srv__RegisterClient_Request __attribute__((deprecated))
#else
# define DEPRECATED__tcp_tunnel__srv__RegisterClient_Request __declspec(deprecated)
#endif

namespace tcp_tunnel
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterClient_Request_
{
  using Type = RegisterClient_Request_<ContainerAllocator>;

  explicit RegisterClient_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_init),
    tunnel_queue_size(_init),
    client_ip(_init),
    client_port(_init)
  {
    (void)_init;
  }

  explicit RegisterClient_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc, _init),
    tunnel_queue_size(_alloc, _init),
    client_ip(_alloc, _init),
    client_port(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _topic_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _topic_type topic;
  using _tunnel_queue_size_type =
    std_msgs::msg::UInt64_<ContainerAllocator>;
  _tunnel_queue_size_type tunnel_queue_size;
  using _client_ip_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _client_ip_type client_ip;
  using _client_port_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _client_port_type client_port;

  // setters for named parameter idiom
  Type & set__topic(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__tunnel_queue_size(
    const std_msgs::msg::UInt64_<ContainerAllocator> & _arg)
  {
    this->tunnel_queue_size = _arg;
    return *this;
  }
  Type & set__client_ip(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->client_ip = _arg;
    return *this;
  }
  Type & set__client_port(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->client_port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tcp_tunnel__srv__RegisterClient_Request
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tcp_tunnel__srv__RegisterClient_Request
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterClient_Request_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    if (this->tunnel_queue_size != other.tunnel_queue_size) {
      return false;
    }
    if (this->client_ip != other.client_ip) {
      return false;
    }
    if (this->client_port != other.client_port) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterClient_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterClient_Request_

// alias to use template instance with default allocator
using RegisterClient_Request =
  tcp_tunnel::srv::RegisterClient_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tcp_tunnel


// Include directives for member types
// Member 'topic_exists'
#include "std_msgs/msg/detail/bool__struct.hpp"
// Member 'topic_type'
// Member 'reliability_policy'
// Member 'durability_policy'
// Member 'liveliness_policy'
// already included above
// #include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tcp_tunnel__srv__RegisterClient_Response __attribute__((deprecated))
#else
# define DEPRECATED__tcp_tunnel__srv__RegisterClient_Response __declspec(deprecated)
#endif

namespace tcp_tunnel
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterClient_Response_
{
  using Type = RegisterClient_Response_<ContainerAllocator>;

  explicit RegisterClient_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_exists(_init),
    topic_type(_init),
    reliability_policy(_init),
    durability_policy(_init),
    liveliness_policy(_init)
  {
    (void)_init;
  }

  explicit RegisterClient_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_exists(_alloc, _init),
    topic_type(_alloc, _init),
    reliability_policy(_alloc, _init),
    durability_policy(_alloc, _init),
    liveliness_policy(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _topic_exists_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _topic_exists_type topic_exists;
  using _topic_type_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _topic_type_type topic_type;
  using _reliability_policy_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _reliability_policy_type reliability_policy;
  using _durability_policy_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _durability_policy_type durability_policy;
  using _liveliness_policy_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _liveliness_policy_type liveliness_policy;

  // setters for named parameter idiom
  Type & set__topic_exists(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->topic_exists = _arg;
    return *this;
  }
  Type & set__topic_type(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->topic_type = _arg;
    return *this;
  }
  Type & set__reliability_policy(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->reliability_policy = _arg;
    return *this;
  }
  Type & set__durability_policy(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->durability_policy = _arg;
    return *this;
  }
  Type & set__liveliness_policy(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->liveliness_policy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tcp_tunnel__srv__RegisterClient_Response
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tcp_tunnel__srv__RegisterClient_Response
    std::shared_ptr<tcp_tunnel::srv::RegisterClient_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterClient_Response_ & other) const
  {
    if (this->topic_exists != other.topic_exists) {
      return false;
    }
    if (this->topic_type != other.topic_type) {
      return false;
    }
    if (this->reliability_policy != other.reliability_policy) {
      return false;
    }
    if (this->durability_policy != other.durability_policy) {
      return false;
    }
    if (this->liveliness_policy != other.liveliness_policy) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterClient_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterClient_Response_

// alias to use template instance with default allocator
using RegisterClient_Response =
  tcp_tunnel::srv::RegisterClient_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tcp_tunnel

namespace tcp_tunnel
{

namespace srv
{

struct RegisterClient
{
  using Request = tcp_tunnel::srv::RegisterClient_Request;
  using Response = tcp_tunnel::srv::RegisterClient_Response;
};

}  // namespace srv

}  // namespace tcp_tunnel

#endif  // TCP_TUNNEL__SRV__DETAIL__REGISTER_CLIENT__STRUCT_HPP_
