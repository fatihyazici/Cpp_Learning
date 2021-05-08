#include "mint.h"

//#include <ostream>
//#include <istream>
#include <iostream>



//inserter
std::ostream& operator<<(std::ostream& os, const Mint& mint)
{
    return os << "(" << mint.mval << ")";
}


//abstracter
std::istream& operator>>(std::istream& is, Mint& mint)
{
    return is >> mint.mval;
}





int main()
{
    Mint m,n,p;
    std::cout << "sayi gir: ";
    std::cin>> m>> n >> p;

    std::cout << m << "+" << n << "+" << p << " : " << m+n+p<<"\n";


}