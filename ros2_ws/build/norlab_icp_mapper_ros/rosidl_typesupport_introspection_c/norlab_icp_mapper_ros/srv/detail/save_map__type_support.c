// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from norlab_icp_mapper_ros:srv/SaveMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "norlab_icp_mapper_ros/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
#include "norlab_icp_mapper_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "norlab_icp_mapper_ros/srv/detail/save_map__functions.h"
#include "norlab_icp_mapper_ros/srv/detail/save_map__struct.h"


// Include directives for member types
// Member `map_file_name`
#include "std_msgs/msg/string.h"
// Member `map_file_name`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  norlab_icp_mapper_ros__srv__SaveMap_Request__init(message_memory);
}

void norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_fini_function(void * message_memory)
{
  norlab_icp_mapper_ros__srv__SaveMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_member_array[1] = {
  {
    "map_file_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_icp_mapper_ros__srv__SaveMap_Request, map_file_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_members = {
  "norlab_icp_mapper_ros__srv",  // message namespace
  "SaveMap_Request",  // message name
  1,  // number of fields
  sizeof(norlab_icp_mapper_ros__srv__SaveMap_Request),
  norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_member_array,  // message members
  norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle = {
  0,
  &norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Request)() {
  norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle.typesupport_identifier) {
    norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &norlab_icp_mapper_ros__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "norlab_icp_mapper_ros/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "norlab_icp_mapper_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "norlab_icp_mapper_ros/srv/detail/save_map__functions.h"
// already included above
// #include "norlab_icp_mapper_ros/srv/detail/save_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  norlab_icp_mapper_ros__srv__SaveMap_Response__init(message_memory);
}

void norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_fini_function(void * message_memory)
{
  norlab_icp_mapper_ros__srv__SaveMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_icp_mapper_ros__srv__SaveMap_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_members = {
  "norlab_icp_mapper_ros__srv",  // message namespace
  "SaveMap_Response",  // message name
  1,  // number of fields
  sizeof(norlab_icp_mapper_ros__srv__SaveMap_Response),
  norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_member_array,  // message members
  norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle = {
  0,
  &norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Response)() {
  if (!norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle.typesupport_identifier) {
    norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &norlab_icp_mapper_ros__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "norlab_icp_mapper_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "norlab_icp_mapper_ros/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_members = {
  "norlab_icp_mapper_ros__srv",  // service namespace
  "SaveMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle,
  NULL  // response message
  // norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle = {
  0,
  &norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap)() {
  if (!norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.typesupport_identifier) {
    norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_icp_mapper_ros, srv, SaveMap_Response)()->data;
  }

  return &norlab_icp_mapper_ros__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle;
}