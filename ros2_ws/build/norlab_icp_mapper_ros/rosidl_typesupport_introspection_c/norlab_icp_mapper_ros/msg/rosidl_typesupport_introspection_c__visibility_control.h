// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef NORLAB_ICP_MAPPER_ROS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define NORLAB_ICP_MAPPER_ROS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_norlab_icp_mapper_ros __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_norlab_icp_mapper_ros __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_norlab_icp_mapper_ros
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_norlab_icp_mapper_ros ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_norlab_icp_mapper_ros ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_norlab_icp_mapper_ros
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_icp_mapper_ros __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_norlab_icp_mapper_ros
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_norlab_icp_mapper_ros __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_norlab_icp_mapper_ros
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // NORLAB_ICP_MAPPER_ROS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_