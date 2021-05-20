#include <iostream>

#include "../utils/nutility.h"

using namespace std;



int main()
{
    vector<string> svec;

    rfill(svec, 10, rtown());


    print(svec);

}