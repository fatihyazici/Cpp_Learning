#include <iostream>
#include <memory>

class MyClass
{
public:
    MyClass()
    {
        std::cout << "MyClass default ctor\n";
    }
    MyClass(int, int)
    {
        std::cout << "MyClass int int ctor\n";
    }
    MyClass(double, double)
    {
        std::cout << "MyClass double double ctor\n";
    }

    MyClass(double, int)
    {
        std::cout << "MyClass double int ctor\n";
    }

   ~MyClass()
    {
        std::cout << "MyClass destructor\n";
    }


};

template<typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...) );
}


int main()
{
    std::unique_ptr<MyClass> uptr = MakeUnique<MyClass>(1.,2);
}