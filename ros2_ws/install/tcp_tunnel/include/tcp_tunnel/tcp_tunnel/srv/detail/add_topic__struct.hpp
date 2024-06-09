// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tcp_tunnel:srv/AddTopic.idl
// generated code does not contain a copyright notice

#ifndef TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__STRUCT_HPP_
#define TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'topic'
// Member 'tunnel_queue_size'
// Member 'server_namespace'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tcp_tunnel__srv__AddTopic_Request __attribute__((deprecated))
#else
# define DEPRECATED__tcp_tunnel__srv__AddTopic_Request __declspec(deprecated)
#endif

namespace tcp_tunnel
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTopic_Request_
{
  using Type = AddTopic_Request_<ContainerAllocator>;

  explicit AddTopic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_init),
    tunnel_queue_size(_init),
    server_namespace(_init)
  {
    (void)_init;
  }

  explicit AddTopic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc, _init),
    tunnel_queue_size(_alloc, _init),
    server_namespace(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _topic_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _topic_type topic;
  using _tunnel_queue_size_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _tunnel_queue_size_type tunnel_queue_size;
  using _server_namespace_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _server_namespace_type server_namespace;

  // setters for named parameter idiom
  Type & set__topic(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__tunnel_queue_size(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->tunnel_queue_size = _arg;
    return *this;
  }
  Type & set__server_namespace(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->server_namespace = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tcp_tunnel__srv__AddTopic_Request
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tcp_tunnel__srv__AddTopic_Request
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTopic_Request_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    if (this->tunnel_queue_size != other.tunnel_queue_size) {
      return false;
    }
    if (this->server_namespace != other.server_namespace) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTopic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTopic_Request_

// alias to use template instance with default allocator
using AddTopic_Request =
  tcp_tunnel::srv::AddTopic_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tcp_tunnel


#ifndef _WIN32
# define DEPRECATED__tcp_tunnel__srv__AddTopic_Response __attribute__((deprecated))
#else
# define DEPRECATED__tcp_tunnel__srv__AddTopic_Response __declspec(deprecated)
#endif

namespace tcp_tunnel
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTopic_Response_
{
  using Type = AddTopic_Response_<ContainerAllocator>;

  explicit AddTopic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AddTopic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tcp_tunnel__srv__AddTopic_Response
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tcp_tunnel__srv__AddTopic_Response
    std::shared_ptr<tcp_tunnel::srv::AddTopic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTopic_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTopic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTopic_Response_

// alias to use template instance with default allocator
using AddTopic_Response =
  tcp_tunnel::srv::AddTopic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tcp_tunnel

namespace tcp_tunnel
{

namespace srv
{

struct AddTopic
{
  using Request = tcp_tunnel::srv::AddTopic_Request;
  using Response = tcp_tunnel::srv::AddTopic_Response;
};

}  // namespace srv

}  // namespace tcp_tunnel

#endif  // TCP_TUNNEL__SRV__DETAIL__ADD_TOPIC__STRUCT_HPP_
