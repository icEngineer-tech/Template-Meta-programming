#include <type_traits>
template <typename T> requires std::is_integral<T>::value
	T mul(T a)
	{
		return a;
	}
	template<typename T, typename...P> requires (std::is_integral<T>::value&& ...&& std::is_integral<P>::value)
	T mul(T a, P...param)
	{
		return a * mul(param...);
	}
