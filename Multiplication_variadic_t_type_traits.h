#include <type_traits>

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> = true >
T mul(T a)
{
	return a;
}
template<typename T, typename...P, std::enable_if_t<(std::is_integral<T>::value&& ...&& std::is_integral<P>::value), bool> = true>
T mul(T a, P...param)
{
	return a * mul(param...);
}
