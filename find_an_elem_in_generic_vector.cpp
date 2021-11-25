#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <type_traits>

template<typename T, typename U,
    std::enable_if_t<(std::is_pointer<T>::value&& std::is_same<U, std::remove_pointer_t<T>>::value), bool> = true>
constexpr void find_print(const std::vector<T>& vec, const U& elem_)
{
    auto found = std::find_if(vec.begin(), vec.end(), [&](const T value) {
        return *value == elem_;
        });
    if (found != vec.end())
        std::cout << *(*found);
    else
        std::cout << "Not found";
}

int main()
{
    std::vector<std::string*> myVec;
    myVec.push_back( new std::string("Hello"));
    myVec.push_back(new std::string("Hi"));
    myVec.push_back(new std::string("JU"));
    find_print(myVec, std::string("Hi"));
    return 0;
}
