// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg/UInt16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__U_INT16_MULTI_ARRAY__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__U_INT16_MULTI_ARRAY__TRAITS_HPP_

#include "example_interfaces/msg/u_int16_multi_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::msg::UInt16MultiArray>()
{
  return "example_interfaces::msg::UInt16MultiArray";
}

template<>
struct has_fixed_size<example_interfaces::msg::UInt16MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::msg::UInt16MultiArray>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__U_INT16_MULTI_ARRAY__TRAITS_HPP_
