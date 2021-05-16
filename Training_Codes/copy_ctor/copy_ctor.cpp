#include <iostream>

class MyClass {
public:
    MyClass()
    {
        std::cout<< "default ctor\n";
    }
    explicit MyClass(int)
    {
        std::cout<< "int ctor\n";
    }

    explicit MyClass(double)
    {
        std::cout<< "double ctor\n";
    }

    MyClass(const MyClass& other)
    {
        std::cout<< "copy ctor\n";
    }

    MyClass(MyClass&& other)
    {
        std::cout<< "move ctor\n";
    }

    MyClass& operator=(const MyClass& other)
    {
        std::cout<< "copy assignment\n";

        return *this;
    }

    MyClass& operator=(MyClass&& other)
    {
        std::cout<< "move assignment\n";

        return *this;
    }


    ~MyClass()
    {
        std::cout<< "destructor\n";
    }


};

