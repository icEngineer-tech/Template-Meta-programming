#include <array>
#include <utility>
#include <type_traits>

/* Please refer to readme.txt to understand how the 3 versions work
make sure to use the version that match with what you want to do */



/*1st version*/
template <unsigned long n>
struct Fib
{
	enum { val = Fib<n - 1>::val + Fib<n - 2>::val };
};
template<>
struct Fib<1>
{
	enum { val = 1 };
};
template<>
struct Fib<0>
{
	enum { val = 0 };
};

template<size_t...I>
auto fib_helper(std::index_sequence<I...> /*unused*/, const unsigned i) -> unsigned
{
	std::array<int, sizeof ... (I)> arr{Fib<I>::val...};
	return arr[i];
}
auto fib(const unsigned i) -> unsigned int
{
	return fib_helper(std::make_index_sequence<47>(), i);
}



/*2nd version*/
auto b_fib(unsigned i) -> const unsigned int
{
	const auto sqrt_5 = std::sqrt(5);
	return (i == 0) ? 0 : (i == 1) ? 1 : static_cast<int>((std::pow(1 + sqrt_5, i) - std::pow(1 - sqrt_5, i)) / (sqrt_5 * std::pow(2, i)));
}



/*3rd version*/
template<unsigned i>
struct dis
{
	dis() { std::cout << i; }
};
constexpr auto Fibo(unsigned i) -> unsigned int
{
	return (i == 0) ? 0 : (i == 1) ? 1 : (Fibo(i - 1) + Fibo(i - 2));
}
