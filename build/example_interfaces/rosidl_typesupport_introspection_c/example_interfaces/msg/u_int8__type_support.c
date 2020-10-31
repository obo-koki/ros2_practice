// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from example_interfaces:msg/UInt8.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "example_interfaces/msg/u_int8__rosidl_typesupport_introspection_c.h"
#include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "example_interfaces/msg/u_int8__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember UInt8__rosidl_typesupport_introspection_c__UInt8_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__msg__UInt8, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UInt8__rosidl_typesupport_introspection_c__UInt8_message_members = {
  "example_interfaces__msg",  // message namespace
  "UInt8",  // message name
  1,  // number of fields
  sizeof(example_interfaces__msg__UInt8),
  UInt8__rosidl_typesupport_introspection_c__UInt8_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UInt8__rosidl_typesupport_introspection_c__UInt8_message_type_support_handle = {
  0,
  &UInt8__rosidl_typesupport_introspection_c__UInt8_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, msg, UInt8)() {
  if (!UInt8__rosidl_typesupport_introspection_c__UInt8_message_type_support_handle.typesupport_identifier) {
    UInt8__rosidl_typesupport_introspection_c__UInt8_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UInt8__rosidl_typesupport_introspection_c__UInt8_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif