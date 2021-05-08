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

//MyClass g_my;

int x;

int main2()
{
  //  MyClass(10);

    MyClass myc = MyClass(12);

    std::cout << "main\n";
}

int main()
{
   // MyClass myclass{'A'};
    MyClass myclass(3L);

  //  MyClass my2{myclass};
  //  MyClass my3 = my2;

  //  my3 = myclass;
  //  my3 = std::move(my2);
  //  MyClass my4 = std::move(my3);    
}



