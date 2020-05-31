

/*1st version*/
inline int Power(const int x, int n) { int p = 1; for (; n > 0; --n) p *= x; return p; }


/*2nd version*/     // this is only avaible for unsigned numbers from 0 to... but be aware here i used 16-bits with the prefix fast.
                    // I'll disscuss the keyword later on when I write an article.

template<int_fast16_t i>
inline int Power(const int_fast16_t x)
{
	return Power<i - 1>(x) * x;
}

template<>
inline int Power<0>(const int_fast16_t x)
{
	return 1;
}


/*3rd version*/
template<int_fast16_t i, int_fast16_t x>
struct Power
{
	enum { val = i * Power<i ,x-1>::val };
};
template <int_fast16_t i>
struct Power<i,0>
{
	enum { val = 1 };
};


/*4th version*/
template<int_fast16_t x>		/*example of implementation in main: dis<Power(3,3)>out;*/
struct dis
{
	dis() { std::cout << x << std::endl; }
};
constexpr inline int Power(const unsigned i, unsigned x)
{
	unsigned p = 1;
	for (; x > 0; x--)
		p *= i;
	return p;
}
