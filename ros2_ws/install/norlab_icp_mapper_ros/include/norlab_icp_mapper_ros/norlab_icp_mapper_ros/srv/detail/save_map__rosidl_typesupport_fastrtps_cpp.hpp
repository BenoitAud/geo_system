// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from norlab_icp_mapper_ros:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef NORLAB_ICP_MAPPER_ROS__SRV__DETAIL__SAVE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NORLAB_ICP_MAPPER_ROS__SRV__DETAIL__SAVE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "norlab_icp_mapper_ros/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "norlab_icp_mapper_ros/srv/detail/save_map__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace norlab_icp_mapper_ros
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
cdr_serialize(
  const norlab_icp_mapper_ros::srv::SaveMap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  norlab_icp_mapper_ros::srv::SaveMap_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
get_serialized_size(
  const norlab_icp_mapper_ros::srv::SaveMap_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
max_serialized_size_SaveMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace norlab_icp_mapper_ros

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, norlab_icp_mapper_ros, srv, SaveMap_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "norlab_icp_mapper_ros/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "norlab_icp_mapper_ros/srv/detail/save_map__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace norlab_icp_mapper_ros
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
cdr_serialize(
  const norlab_icp_mapper_ros::srv::SaveMap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  norlab_icp_mapper_ros::srv::SaveMap_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
get_serialized_size(
  const norlab_icp_mapper_ros::srv::SaveMap_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
max_serialized_size_SaveMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace norlab_icp_mapper_ros

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, norlab_icp_mapper_ros, srv, SaveMap_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "norlab_icp_mapper_ros/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_norlab_icp_mapper_ros
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, norlab_icp_mapper_ros, srv, SaveMap)();

#ifdef __cplusplus
}
#endif

#endif  // NORLAB_ICP_MAPPER_ROS__SRV__DETAIL__SAVE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_