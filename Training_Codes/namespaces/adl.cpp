#include <iostream>


namespace A {
	class Myclass {};
	void func(Myclass);

}

void func(A::Myclass);

int main()
{
	A::Myclass ax;

	func(ax); //SENTAKS HATASI , Ambiguity
}