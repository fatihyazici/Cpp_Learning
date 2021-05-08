
#define OLD_VERSION 1

namespace A {
#ifndef OLD_VERSION
    inline  
#endif // !OLD_VERSION
    
    namespace version_X{
        class Class {

        };
    }

#ifndef NEW_VERSION
    inline  
#endif // !NEW_VERSION
    namespace version_Y{
        class MyClass {

        };
    }

}


int main()
{
    //versiyon x i kullanmak istiyorum.
    //namespace versiyon_X i inline yaparım.
    A::MyClass ax;

}