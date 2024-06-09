// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tcp_tunnel/srv/detail/register_client__struct.h"
#include "tcp_tunnel/srv/detail/register_client__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int16__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tcp_tunnel__srv__register_client__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tcp_tunnel.srv._register_client.RegisterClient_Request", full_classname_dest, 54) == 0);
  }
  tcp_tunnel__srv__RegisterClient_Request * ros_message = _ros_message;
  {  // topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->topic)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tunnel_queue_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "tunnel_queue_size");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int64__convert_from_py(field, &ros_message->tunnel_queue_size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // client_ip
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_ip");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->client_ip)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // client_port
    PyObject * field = PyObject_GetAttrString(_pymsg, "client_port");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int16__convert_from_py(field, &ros_message->client_port)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tcp_tunnel__srv__register_client__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RegisterClient_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tcp_tunnel.srv._register_client");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegisterClient_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tcp_tunnel__srv__RegisterClient_Request * ros_message = (tcp_tunnel__srv__RegisterClient_Request *)raw_ros_message;
  {  // topic
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->topic);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tunnel_queue_size
    PyObject * field = NULL;
    field = std_msgs__msg__u_int64__convert_to_py(&ros_message->tunnel_queue_size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tunnel_queue_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_ip
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->client_ip);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_ip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // client_port
    PyObject * field = NULL;
    field = std_msgs__msg__u_int16__convert_to_py(&ros_message->client_port);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "client_port", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tcp_tunnel/srv/detail/register_client__struct.h"
// already included above
// #include "tcp_tunnel/srv/detail/register_client__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__bool__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__bool__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tcp_tunnel__srv__register_client__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tcp_tunnel.srv._register_client.RegisterClient_Response", full_classname_dest, 55) == 0);
  }
  tcp_tunnel__srv__RegisterClient_Response * ros_message = _ros_message;
  {  // topic_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_exists");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__bool__convert_from_py(field, &ros_message->topic_exists)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // topic_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_type");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->topic_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reliability_policy
    PyObject * field = PyObject_GetAttrString(_pymsg, "reliability_policy");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->reliability_policy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // durability_policy
    PyObject * field = PyObject_GetAttrString(_pymsg, "durability_policy");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->durability_policy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // liveliness_policy
    PyObject * field = PyObject_GetAttrString(_pymsg, "liveliness_policy");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->liveliness_policy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tcp_tunnel__srv__register_client__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RegisterClient_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tcp_tunnel.srv._register_client");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegisterClient_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tcp_tunnel__srv__RegisterClient_Response * ros_message = (tcp_tunnel__srv__RegisterClient_Response *)raw_ros_message;
  {  // topic_exists
    PyObject * field = NULL;
    field = std_msgs__msg__bool__convert_to_py(&ros_message->topic_exists);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // topic_type
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->topic_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reliability_policy
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->reliability_policy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reliability_policy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // durability_policy
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->durability_policy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "durability_policy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // liveliness_policy
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->liveliness_policy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "liveliness_policy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
