#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tcp_tunnel::tcp_tunnel__rosidl_generator_c" for configuration "Release"
set_property(TARGET tcp_tunnel::tcp_tunnel__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tcp_tunnel::tcp_tunnel__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtcp_tunnel__rosidl_generator_c.so"
  IMPORTED_SONAME_RELEASE "libtcp_tunnel__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tcp_tunnel::tcp_tunnel__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_tcp_tunnel::tcp_tunnel__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libtcp_tunnel__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)