#include "Point.h"

int main()
{
	std::cout << boolalpha;
	std::cout << is_incrementable<Point<string>>();     //false
  std::cout<< "\n" <<is_incrementable<Point<int>>();  //true
	return 0;
}
