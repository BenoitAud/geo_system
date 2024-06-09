// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tcp_tunnel:srv/RegisterClient.idl
// generated code does not contain a copyright notice
#include "tcp_tunnel/srv/detail/register_client__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `topic`
// Member `client_ip`
#include "std_msgs/msg/detail/string__functions.h"
// Member `tunnel_queue_size`
#include "std_msgs/msg/detail/u_int64__functions.h"
// Member `client_port`
#include "std_msgs/msg/detail/u_int16__functions.h"

bool
tcp_tunnel__srv__RegisterClient_Request__init(tcp_tunnel__srv__RegisterClient_Request * msg)
{
  if (!msg) {
    return false;
  }
  // topic
  if (!std_msgs__msg__String__init(&msg->topic)) {
    tcp_tunnel__srv__RegisterClient_Request__fini(msg);
    return false;
  }
  // tunnel_queue_size
  if (!std_msgs__msg__UInt64__init(&msg->tunnel_queue_size)) {
    tcp_tunnel__srv__RegisterClient_Request__fini(msg);
    return false;
  }
  // client_ip
  if (!std_msgs__msg__String__init(&msg->client_ip)) {
    tcp_tunnel__srv__RegisterClient_Request__fini(msg);
    return false;
  }
  // client_port
  if (!std_msgs__msg__UInt16__init(&msg->client_port)) {
    tcp_tunnel__srv__RegisterClient_Request__fini(msg);
    return false;
  }
  return true;
}

void
tcp_tunnel__srv__RegisterClient_Request__fini(tcp_tunnel__srv__RegisterClient_Request * msg)
{
  if (!msg) {
    return;
  }
  // topic
  std_msgs__msg__String__fini(&msg->topic);
  // tunnel_queue_size
  std_msgs__msg__UInt64__fini(&msg->tunnel_queue_size);
  // client_ip
  std_msgs__msg__String__fini(&msg->client_ip);
  // client_port
  std_msgs__msg__UInt16__fini(&msg->client_port);
}

bool
tcp_tunnel__srv__RegisterClient_Request__are_equal(const tcp_tunnel__srv__RegisterClient_Request * lhs, const tcp_tunnel__srv__RegisterClient_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic
  if (!std_msgs__msg__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // tunnel_queue_size
  if (!std_msgs__msg__UInt64__are_equal(
      &(lhs->tunnel_queue_size), &(rhs->tunnel_queue_size)))
  {
    return false;
  }
  // client_ip
  if (!std_msgs__msg__String__are_equal(
      &(lhs->client_ip), &(rhs->client_ip)))
  {
    return false;
  }
  // client_port
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->client_port), &(rhs->client_port)))
  {
    return false;
  }
  return true;
}

bool
tcp_tunnel__srv__RegisterClient_Request__copy(
  const tcp_tunnel__srv__RegisterClient_Request * input,
  tcp_tunnel__srv__RegisterClient_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // topic
  if (!std_msgs__msg__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // tunnel_queue_size
  if (!std_msgs__msg__UInt64__copy(
      &(input->tunnel_queue_size), &(output->tunnel_queue_size)))
  {
    return false;
  }
  // client_ip
  if (!std_msgs__msg__String__copy(
      &(input->client_ip), &(output->client_ip)))
  {
    return false;
  }
  // client_port
  if (!std_msgs__msg__UInt16__copy(
      &(input->client_port), &(output->client_port)))
  {
    return false;
  }
  return true;
}

tcp_tunnel__srv__RegisterClient_Request *
tcp_tunnel__srv__RegisterClient_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Request * msg = (tcp_tunnel__srv__RegisterClient_Request *)allocator.allocate(sizeof(tcp_tunnel__srv__RegisterClient_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tcp_tunnel__srv__RegisterClient_Request));
  bool success = tcp_tunnel__srv__RegisterClient_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tcp_tunnel__srv__RegisterClient_Request__destroy(tcp_tunnel__srv__RegisterClient_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tcp_tunnel__srv__RegisterClient_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tcp_tunnel__srv__RegisterClient_Request__Sequence__init(tcp_tunnel__srv__RegisterClient_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Request * data = NULL;

  if (size) {
    data = (tcp_tunnel__srv__RegisterClient_Request *)allocator.zero_allocate(size, sizeof(tcp_tunnel__srv__RegisterClient_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tcp_tunnel__srv__RegisterClient_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tcp_tunnel__srv__RegisterClient_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tcp_tunnel__srv__RegisterClient_Request__Sequence__fini(tcp_tunnel__srv__RegisterClient_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tcp_tunnel__srv__RegisterClient_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tcp_tunnel__srv__RegisterClient_Request__Sequence *
tcp_tunnel__srv__RegisterClient_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Request__Sequence * array = (tcp_tunnel__srv__RegisterClient_Request__Sequence *)allocator.allocate(sizeof(tcp_tunnel__srv__RegisterClient_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tcp_tunnel__srv__RegisterClient_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tcp_tunnel__srv__RegisterClient_Request__Sequence__destroy(tcp_tunnel__srv__RegisterClient_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tcp_tunnel__srv__RegisterClient_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tcp_tunnel__srv__RegisterClient_Request__Sequence__are_equal(const tcp_tunnel__srv__RegisterClient_Request__Sequence * lhs, const tcp_tunnel__srv__RegisterClient_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tcp_tunnel__srv__RegisterClient_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tcp_tunnel__srv__RegisterClient_Request__Sequence__copy(
  const tcp_tunnel__srv__RegisterClient_Request__Sequence * input,
  tcp_tunnel__srv__RegisterClient_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tcp_tunnel__srv__RegisterClient_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tcp_tunnel__srv__RegisterClient_Request * data =
      (tcp_tunnel__srv__RegisterClient_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tcp_tunnel__srv__RegisterClient_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tcp_tunnel__srv__RegisterClient_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tcp_tunnel__srv__RegisterClient_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `topic_exists`
#include "std_msgs/msg/detail/bool__functions.h"
// Member `topic_type`
// Member `reliability_policy`
// Member `durability_policy`
// Member `liveliness_policy`
// already included above
// #include "std_msgs/msg/detail/string__functions.h"

bool
tcp_tunnel__srv__RegisterClient_Response__init(tcp_tunnel__srv__RegisterClient_Response * msg)
{
  if (!msg) {
    return false;
  }
  // topic_exists
  if (!std_msgs__msg__Bool__init(&msg->topic_exists)) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
    return false;
  }
  // topic_type
  if (!std_msgs__msg__String__init(&msg->topic_type)) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
    return false;
  }
  // reliability_policy
  if (!std_msgs__msg__String__init(&msg->reliability_policy)) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
    return false;
  }
  // durability_policy
  if (!std_msgs__msg__String__init(&msg->durability_policy)) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
    return false;
  }
  // liveliness_policy
  if (!std_msgs__msg__String__init(&msg->liveliness_policy)) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
    return false;
  }
  return true;
}

void
tcp_tunnel__srv__RegisterClient_Response__fini(tcp_tunnel__srv__RegisterClient_Response * msg)
{
  if (!msg) {
    return;
  }
  // topic_exists
  std_msgs__msg__Bool__fini(&msg->topic_exists);
  // topic_type
  std_msgs__msg__String__fini(&msg->topic_type);
  // reliability_policy
  std_msgs__msg__String__fini(&msg->reliability_policy);
  // durability_policy
  std_msgs__msg__String__fini(&msg->durability_policy);
  // liveliness_policy
  std_msgs__msg__String__fini(&msg->liveliness_policy);
}

bool
tcp_tunnel__srv__RegisterClient_Response__are_equal(const tcp_tunnel__srv__RegisterClient_Response * lhs, const tcp_tunnel__srv__RegisterClient_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_exists
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->topic_exists), &(rhs->topic_exists)))
  {
    return false;
  }
  // topic_type
  if (!std_msgs__msg__String__are_equal(
      &(lhs->topic_type), &(rhs->topic_type)))
  {
    return false;
  }
  // reliability_policy
  if (!std_msgs__msg__String__are_equal(
      &(lhs->reliability_policy), &(rhs->reliability_policy)))
  {
    return false;
  }
  // durability_policy
  if (!std_msgs__msg__String__are_equal(
      &(lhs->durability_policy), &(rhs->durability_policy)))
  {
    return false;
  }
  // liveliness_policy
  if (!std_msgs__msg__String__are_equal(
      &(lhs->liveliness_policy), &(rhs->liveliness_policy)))
  {
    return false;
  }
  return true;
}

bool
tcp_tunnel__srv__RegisterClient_Response__copy(
  const tcp_tunnel__srv__RegisterClient_Response * input,
  tcp_tunnel__srv__RegisterClient_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_exists
  if (!std_msgs__msg__Bool__copy(
      &(input->topic_exists), &(output->topic_exists)))
  {
    return false;
  }
  // topic_type
  if (!std_msgs__msg__String__copy(
      &(input->topic_type), &(output->topic_type)))
  {
    return false;
  }
  // reliability_policy
  if (!std_msgs__msg__String__copy(
      &(input->reliability_policy), &(output->reliability_policy)))
  {
    return false;
  }
  // durability_policy
  if (!std_msgs__msg__String__copy(
      &(input->durability_policy), &(output->durability_policy)))
  {
    return false;
  }
  // liveliness_policy
  if (!std_msgs__msg__String__copy(
      &(input->liveliness_policy), &(output->liveliness_policy)))
  {
    return false;
  }
  return true;
}

tcp_tunnel__srv__RegisterClient_Response *
tcp_tunnel__srv__RegisterClient_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Response * msg = (tcp_tunnel__srv__RegisterClient_Response *)allocator.allocate(sizeof(tcp_tunnel__srv__RegisterClient_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tcp_tunnel__srv__RegisterClient_Response));
  bool success = tcp_tunnel__srv__RegisterClient_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tcp_tunnel__srv__RegisterClient_Response__destroy(tcp_tunnel__srv__RegisterClient_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tcp_tunnel__srv__RegisterClient_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tcp_tunnel__srv__RegisterClient_Response__Sequence__init(tcp_tunnel__srv__RegisterClient_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Response * data = NULL;

  if (size) {
    data = (tcp_tunnel__srv__RegisterClient_Response *)allocator.zero_allocate(size, sizeof(tcp_tunnel__srv__RegisterClient_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tcp_tunnel__srv__RegisterClient_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tcp_tunnel__srv__RegisterClient_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tcp_tunnel__srv__RegisterClient_Response__Sequence__fini(tcp_tunnel__srv__RegisterClient_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tcp_tunnel__srv__RegisterClient_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tcp_tunnel__srv__RegisterClient_Response__Sequence *
tcp_tunnel__srv__RegisterClient_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__RegisterClient_Response__Sequence * array = (tcp_tunnel__srv__RegisterClient_Response__Sequence *)allocator.allocate(sizeof(tcp_tunnel__srv__RegisterClient_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tcp_tunnel__srv__RegisterClient_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tcp_tunnel__srv__RegisterClient_Response__Sequence__destroy(tcp_tunnel__srv__RegisterClient_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tcp_tunnel__srv__RegisterClient_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tcp_tunnel__srv__RegisterClient_Response__Sequence__are_equal(const tcp_tunnel__srv__RegisterClient_Response__Sequence * lhs, const tcp_tunnel__srv__RegisterClient_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tcp_tunnel__srv__RegisterClient_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tcp_tunnel__srv__RegisterClient_Response__Sequence__copy(
  const tcp_tunnel__srv__RegisterClient_Response__Sequence * input,
  tcp_tunnel__srv__RegisterClient_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tcp_tunnel__srv__RegisterClient_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tcp_tunnel__srv__RegisterClient_Response * data =
      (tcp_tunnel__srv__RegisterClient_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tcp_tunnel__srv__RegisterClient_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tcp_tunnel__srv__RegisterClient_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tcp_tunnel__srv__RegisterClient_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
