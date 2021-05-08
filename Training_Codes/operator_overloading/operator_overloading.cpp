#include <iostream>


class MyClass {
public:
    MyClass operator+(MyClass)
    {
        std::cout<<"operator+(MyClass)\n";
        return MyClass{};
    }

    MyClass operator+(int)
    {
        std::cout<<"operator+(int)\n";
        return MyClass{};
    }

    MyClass operator+(const char*)
    {
        std::cout<<"operator+(const char*)\n";
        return MyClass{};
    }

};


int main()
{
    MyClass mx,my;

    mx + my;
    mx + 3;
    mx + "fatih";
}