#include <type_traits>

/*1st version*/
template<unsigned long x>
struct dis
{
    dis() { std::cout << x << std::endl; }
};
constexpr unsigned int bin(unsigned long x)
{
    return x == 0 ? 0 : x % 10 + (bin(x / 10) << 1);
}

/*2nd version*/
template<unsigned long n>
struct bin
{
    enum { val = bin<n / 10>::val << 1 | n % 10 };
};
template<>
struct bin<0>
{
    enum { val = 0 };
};
/*3rd version*/
unsigned binary(unsigned long n)
{
    unsigned result = 0;
    for (unsigned b = 0x1; n; n /= 10, b <<= 1)
    {
        if (n % 10)
            result += b;
    }
    return result;
}
