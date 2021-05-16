#include <iostream>


namespace A {
	class Myclass {};
	void func(Myclass);

}

void func(A::Myclass);
