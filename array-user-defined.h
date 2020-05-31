
template<class T, unsigned i>
class Array
{
public:
	T a[i];
	T& at(unsigned i)
	{
		return a[i];
	}
	void set(int x, unsigned i)
	{
		a[i] = x;
	}
	unsigned size_a()
	{
		return i;
	}
	T& operator[](unsigned i)
	{
		return a[i];
	}
};
