#pragma once
#include <type_traits>
#include <iostream>
#include "is_inc.h"


template<class Y>
class Point
{
	Y x, y;
public:
	Point(){}
	Point(Y _x, Y _y):x(_x),y(_y){}
	~Point(){}
	template <typename T = Y, std::enable_if_t<is_incrementable<T>::value, bool> = true>
	Point<T>& operator++()
	{
		++x;
		++y;
		return *this;
	}
};
Point<int>Pi;
