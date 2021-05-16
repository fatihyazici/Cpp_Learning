#include <iostream>
#include <vector>
#include <algorithm>

#include "../utils/futils.h"


using namespace std;


int main()
{
    vector<string> svec{"ali", "ayse", "can" , "sedat", "serkan", "tan" , "gul", "esen", "lara", "gokhan", "serkan"};
    vector<string> destvec;

    char c;
    size_t len;

    cout<<"karakter ve uzunluk girin: ";
    cin >> c >> len;

    auto fpred = [c, len](const string& name) {
        auto fnd = name.find(c);
        if(fnd != string::npos && name.size() == len) {
            return true;
        } 
        else
            return false;
     };

    copy_if(svec.begin(), svec.end(), back_inserter(destvec), fpred);
    print(svec.begin(), svec.end());

    print(destvec.begin(), destvec.end());
}