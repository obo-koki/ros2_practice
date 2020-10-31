// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from example_interfaces:msg/Int64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__INT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EXAMPLE_INTERFACES__MSG__INT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "example_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "example_interfaces/msg/int64_multi_array__struct.hpp"

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

namespace example_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::Int64MultiArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  example_interfaces::msg::Int64MultiArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::Int64MultiArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
max_serialized_size_Int64MultiArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, msg, Int64MultiArray)();

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__INT64_MULTI_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
