#include <iostream>



using namespace std;

class MyClass {

public:
    static int foo()
    {
        return 10;
    }

    static int sval;
    
};


int foo()
{ 
    return 999;
}
    

int MyClass::sval = foo();



int main()
{


    cout<< MyClass::sval << "\n"; //10 -> name lookup

    
}