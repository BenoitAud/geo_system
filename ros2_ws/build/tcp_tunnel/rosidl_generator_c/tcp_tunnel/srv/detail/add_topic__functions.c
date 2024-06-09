// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tcp_tunnel:srv/AddTopic.idl
// generated code does not contain a copyright notice
#include "tcp_tunnel/srv/detail/add_topic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `topic`
// Member `tunnel_queue_size`
// Member `server_namespace`
#include "std_msgs/msg/detail/string__functions.h"

bool
tcp_tunnel__srv__AddTopic_Request__init(tcp_tunnel__srv__AddTopic_Request * msg)
{
  if (!msg) {
    return false;
  }
  // topic
  if (!std_msgs__msg__String__init(&msg->topic)) {
    tcp_tunnel__srv__AddTopic_Request__fini(msg);
    return false;
  }
  // tunnel_queue_size
  if (!std_msgs__msg__String__init(&msg->tunnel_queue_size)) {
    tcp_tunnel__srv__AddTopic_Request__fini(msg);
    return false;
  }
  // server_namespace
  if (!std_msgs__msg__String__init(&msg->server_namespace)) {
    tcp_tunnel__srv__AddTopic_Request__fini(msg);
    return false;
  }
  return true;
}

void
tcp_tunnel__srv__AddTopic_Request__fini(tcp_tunnel__srv__AddTopic_Request * msg)
{
  if (!msg) {
    return;
  }
  // topic
  std_msgs__msg__String__fini(&msg->topic);
  // tunnel_queue_size
  std_msgs__msg__String__fini(&msg->tunnel_queue_size);
  // server_namespace
  std_msgs__msg__String__fini(&msg->server_namespace);
}

bool
tcp_tunnel__srv__AddTopic_Request__are_equal(const tcp_tunnel__srv__AddTopic_Request * lhs, const tcp_tunnel__srv__AddTopic_Request * rhs)
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
  if (!std_msgs__msg__String__are_equal(
      &(lhs->tunnel_queue_size), &(rhs->tunnel_queue_size)))
  {
    return false;
  }
  // server_namespace
  if (!std_msgs__msg__String__are_equal(
      &(lhs->server_namespace), &(rhs->server_namespace)))
  {
    return false;
  }
  return true;
}

bool
tcp_tunnel__srv__AddTopic_Request__copy(
  const tcp_tunnel__srv__AddTopic_Request * input,
  tcp_tunnel__srv__AddTopic_Request * output)
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
  if (!std_msgs__msg__String__copy(
      &(input->tunnel_queue_size), &(output->tunnel_queue_size)))
  {
    return false;
  }
  // server_namespace
  if (!std_msgs__msg__String__copy(
      &(input->server_namespace), &(output->server_namespace)))
  {
    return false;
  }
  return true;
}

tcp_tunnel__srv__AddTopic_Request *
tcp_tunnel__srv__AddTopic_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Request * msg = (tcp_tunnel__srv__AddTopic_Request *)allocator.allocate(sizeof(tcp_tunnel__srv__AddTopic_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tcp_tunnel__srv__AddTopic_Request));
  bool success = tcp_tunnel__srv__AddTopic_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tcp_tunnel__srv__AddTopic_Request__destroy(tcp_tunnel__srv__AddTopic_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tcp_tunnel__srv__AddTopic_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tcp_tunnel__srv__AddTopic_Request__Sequence__init(tcp_tunnel__srv__AddTopic_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Request * data = NULL;

  if (size) {
    data = (tcp_tunnel__srv__AddTopic_Request *)allocator.zero_allocate(size, sizeof(tcp_tunnel__srv__AddTopic_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tcp_tunnel__srv__AddTopic_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tcp_tunnel__srv__AddTopic_Request__fini(&data[i - 1]);
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
tcp_tunnel__srv__AddTopic_Request__Sequence__fini(tcp_tunnel__srv__AddTopic_Request__Sequence * array)
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
      tcp_tunnel__srv__AddTopic_Request__fini(&array->data[i]);
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

tcp_tunnel__srv__AddTopic_Request__Sequence *
tcp_tunnel__srv__AddTopic_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Request__Sequence * array = (tcp_tunnel__srv__AddTopic_Request__Sequence *)allocator.allocate(sizeof(tcp_tunnel__srv__AddTopic_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tcp_tunnel__srv__AddTopic_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tcp_tunnel__srv__AddTopic_Request__Sequence__destroy(tcp_tunnel__srv__AddTopic_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tcp_tunnel__srv__AddTopic_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tcp_tunnel__srv__AddTopic_Request__Sequence__are_equal(const tcp_tunnel__srv__AddTopic_Request__Sequence * lhs, const tcp_tunnel__srv__AddTopic_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tcp_tunnel__srv__AddTopic_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tcp_tunnel__srv__AddTopic_Request__Sequence__copy(
  const tcp_tunnel__srv__AddTopic_Request__Sequence * input,
  tcp_tunnel__srv__AddTopic_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tcp_tunnel__srv__AddTopic_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tcp_tunnel__srv__AddTopic_Request * data =
      (tcp_tunnel__srv__AddTopic_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tcp_tunnel__srv__AddTopic_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tcp_tunnel__srv__AddTopic_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tcp_tunnel__srv__AddTopic_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tcp_tunnel__srv__AddTopic_Response__init(tcp_tunnel__srv__AddTopic_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tcp_tunnel__srv__AddTopic_Response__fini(tcp_tunnel__srv__AddTopic_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tcp_tunnel__srv__AddTopic_Response__are_equal(const tcp_tunnel__srv__AddTopic_Response * lhs, const tcp_tunnel__srv__AddTopic_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tcp_tunnel__srv__AddTopic_Response__copy(
  const tcp_tunnel__srv__AddTopic_Response * input,
  tcp_tunnel__srv__AddTopic_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tcp_tunnel__srv__AddTopic_Response *
tcp_tunnel__srv__AddTopic_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Response * msg = (tcp_tunnel__srv__AddTopic_Response *)allocator.allocate(sizeof(tcp_tunnel__srv__AddTopic_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tcp_tunnel__srv__AddTopic_Response));
  bool success = tcp_tunnel__srv__AddTopic_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tcp_tunnel__srv__AddTopic_Response__destroy(tcp_tunnel__srv__AddTopic_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tcp_tunnel__srv__AddTopic_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tcp_tunnel__srv__AddTopic_Response__Sequence__init(tcp_tunnel__srv__AddTopic_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Response * data = NULL;

  if (size) {
    data = (tcp_tunnel__srv__AddTopic_Response *)allocator.zero_allocate(size, sizeof(tcp_tunnel__srv__AddTopic_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tcp_tunnel__srv__AddTopic_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tcp_tunnel__srv__AddTopic_Response__fini(&data[i - 1]);
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
tcp_tunnel__srv__AddTopic_Response__Sequence__fini(tcp_tunnel__srv__AddTopic_Response__Sequence * array)
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
      tcp_tunnel__srv__AddTopic_Response__fini(&array->data[i]);
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

tcp_tunnel__srv__AddTopic_Response__Sequence *
tcp_tunnel__srv__AddTopic_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tcp_tunnel__srv__AddTopic_Response__Sequence * array = (tcp_tunnel__srv__AddTopic_Response__Sequence *)allocator.allocate(sizeof(tcp_tunnel__srv__AddTopic_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tcp_tunnel__srv__AddTopic_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tcp_tunnel__srv__AddTopic_Response__Sequence__destroy(tcp_tunnel__srv__AddTopic_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tcp_tunnel__srv__AddTopic_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tcp_tunnel__srv__AddTopic_Response__Sequence__are_equal(const tcp_tunnel__srv__AddTopic_Response__Sequence * lhs, const tcp_tunnel__srv__AddTopic_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tcp_tunnel__srv__AddTopic_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tcp_tunnel__srv__AddTopic_Response__Sequence__copy(
  const tcp_tunnel__srv__AddTopic_Response__Sequence * input,
  tcp_tunnel__srv__AddTopic_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tcp_tunnel__srv__AddTopic_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tcp_tunnel__srv__AddTopic_Response * data =
      (tcp_tunnel__srv__AddTopic_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tcp_tunnel__srv__AddTopic_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tcp_tunnel__srv__AddTopic_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tcp_tunnel__srv__AddTopic_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
