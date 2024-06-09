#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tcp_tunnel::tcp_tunnel__rosidl_typesupport_introspection_cpp" for configuration "Release"
set_property(TARGET tcp_tunnel::tcp_tunnel__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tcp_tunnel::tcp_tunnel__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtcp_tunnel__rosidl_typesupport_introspection_cpp.so"
  IMPORTED_SONAME_RELEASE "libtcp_tunnel__rosidl_typesupport_introspection_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tcp_tunnel::tcp_tunnel__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_tcp_tunnel::tcp_tunnel__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/libtcp_tunnel__rosidl_typesupport_introspection_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
