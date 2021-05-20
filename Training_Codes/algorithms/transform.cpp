#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "../utils/futils.h"


int main()
{
    vector<int> ivec1{2,4,6,8,10};
    vector<int> ivec2{1,3,5,7,9};

    print(ivec1.begin(), ivec1.end() );


    vector<int> ivec3;

    transform(ivec1.begin(), ivec1.end(), ivec2.begin(), back_inserter(ivec3), [](auto x, auto y) {return x + y; } );

    print(ivec2.begin(), ivec2.end() );
    print(ivec3.begin(), ivec3.end() );


}

