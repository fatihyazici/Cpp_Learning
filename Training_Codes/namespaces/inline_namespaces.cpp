#include <iostream>


inline namespace A {

    inline namespace B {
        void foo(int);
    }

    inline namespace C {
        void foo();
    }

}



int main()
{
    A::B::foo(11);
    A::C::foo();

    A::foo();
    foo();
    foo(12);
}