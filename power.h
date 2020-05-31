

/*1st version*/
inline int Power(const int x, int n) { int p = 1; for (; n > 0; --n) p *= x; return p; }


/*2nd version*/     // this is only avaible for unsigned numbers from 0 to... but be aware here i used 16-bits with the prefix fast.
                    // I'll disscuss the keyword later on when I write an article.

template<int_fast16_t i>
inline int power(const int_fast16_t x)
{
	return power<i - 1>(x) * x;
}

template<>
inline int power<0>(const int_fast16_t x)
{
	return 1;
}
