#include <iostream>
#include "inline_func.h"




int main()
{
    TestClass testclass;

    std::cout << "biggest  : " << get_max(4,8) << '\n';
    std::cout << "smallest : " << testclass.get_min(4,8) << '\n';
    std::cout << "is_equal : " << testclass.is_equal(4,8) << '\n';
    std::cout << "is_equal : " << testclass.is_equal(7,7) << '\n';
}