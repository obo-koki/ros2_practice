// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__U_INT16__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__U_INT16__TRAITS_HPP_

#include "example_interfaces/msg/u_int16__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::msg::UInt16>()
{
  return "example_interfaces::msg::UInt16";
}

template<>
struct has_fixed_size<example_interfaces::msg::UInt16>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::msg::UInt16>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__U_INT16__TRAITS_HPP_
