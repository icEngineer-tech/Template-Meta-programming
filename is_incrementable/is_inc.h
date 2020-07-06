#pragma once


template< typename, typename = void >
struct is_incrementable : std::false_type {};

template< typename T >
struct is_incrementable<T, std::void_t<decltype(++std::declval<T&>())>> : std::true_type { };
