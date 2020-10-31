// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/Float32MultiArray.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/float32_multi_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "example_interfaces/msg/float32_multi_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace example_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const example_interfaces::msg::MultiArrayLayout &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  example_interfaces::msg::MultiArrayLayout &);
size_t get_serialized_size(
  const example_interfaces::msg::MultiArrayLayout &,
  size_t current_alignment);
size_t
max_serialized_size_MultiArrayLayout(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace example_interfaces


namespace example_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::Float32MultiArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: layout
  example_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.layout,
    cdr);
  // Member: data
  {
    cdr << ros_message.data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  example_interfaces::msg::Float32MultiArray & ros_message)
{
  // Member: layout
  example_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.layout);

  // Member: data
  {
    cdr >> ros_message.data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::Float32MultiArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: layout

  current_alignment +=
    example_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.layout, current_alignment);
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
max_serialized_size_Float32MultiArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: layout
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiArrayLayout(
        full_bounded, current_alignment);
    }
  }

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Float32MultiArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::Float32MultiArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Float32MultiArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::Float32MultiArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Float32MultiArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::Float32MultiArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Float32MultiArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Float32MultiArray(full_bounded, 0);
}

static message_type_support_callbacks_t _Float32MultiArray__callbacks = {
  "example_interfaces::msg",
  "Float32MultiArray",
  _Float32MultiArray__cdr_serialize,
  _Float32MultiArray__cdr_deserialize,
  _Float32MultiArray__get_serialized_size,
  _Float32MultiArray__max_serialized_size
};

static rosidl_message_type_support_t _Float32MultiArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Float32MultiArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace example_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::Float32MultiArray>()
{
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_Float32MultiArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, msg, Float32MultiArray)() {
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_Float32MultiArray__handle;
}

#ifdef __cplusplus
}
#endif
