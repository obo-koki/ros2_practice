// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/UInt64.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "example_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "example_interfaces/msg/u_int64__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _UInt64_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UInt64_type_support_ids_t;

static const _UInt64_type_support_ids_t _UInt64_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UInt64_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UInt64_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UInt64_type_support_symbol_names_t _UInt64_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, msg, UInt64)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, msg, UInt64)),
  }
};

typedef struct _UInt64_type_support_data_t
{
  void * data[2];
} _UInt64_type_support_data_t;

static _UInt64_type_support_data_t _UInt64_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UInt64_message_typesupport_map = {
  2,
  "example_interfaces",
  &_UInt64_message_typesupport_ids.typesupport_identifier[0],
  &_UInt64_message_typesupport_symbol_names.symbol_name[0],
  &_UInt64_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UInt64_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UInt64_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, msg, UInt64)() {
  return &::example_interfaces::msg::rosidl_typesupport_c::UInt64_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
