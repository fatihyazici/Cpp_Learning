#include <iostream>


template<typename T>
auto summer(T v)
{
    return v;
}


template<typename T, typename... Args>
T summer(const T& first, const Args&... args)
{
    return first + summer(args...);
}


int main(int argc, const char** argv) {

    std::cout << "numbers: " << summer(1,4,7,8) << "\n";

    std::cout << "numbers: " << summer(12.,4.4,7.7,8) << "\n";

    std::string s1 = "fat" , s2 = "ih" , s3 = " yaz" , s4 = "ici";
    std::cout << "name: " << summer(s1,s2,s3,s4) << "\n";


    return 0;
}