#pragma once

#include <iostream>
//inline int get_max(int a, int b);

inline int get_max(int a, int b)
{
    return a>b?a:b;
}



class TestClass {
public:
    TestClass() 
    {
        std::cout << "default ctor\n";
    }

    ~TestClass() 
    {
        std::cout << "destructor\n";
    }

    inline int get_min(int a, int b )
    {
        return a<b?a:b;
    }

    inline bool is_equal(int, int);
};

inline bool TestClass::is_equal(int a, int b)
{
    return a==b;
}