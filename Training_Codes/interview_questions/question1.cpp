//Question: bir vector'de verilen sayıyı son geçtiği yerde sil.
//Answer: 
//find algoritması ile sayıyı bul(rbegin ve rend)
//reverse iterator kullanılarak base'in bir öncesi verilir ve erase işlemi gerçeleştiriir.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename InIter>
void print(InIter beg, InIter end)
{
    while(beg != end) {
        cout<< *beg<< " ";
    
        beg++;
    }
    cout<<"\n---------\n";
}

/*
int main()
{
    vector<int> ivec{0,5,4,6,4,7,8,9,4,2,2,3,5,8,9,2,1};
    int ival;

    cout<<"deger girin: ";
    cin>>ival;

    print(ivec.begin(), ivec.end());

    if(auto riter = find(ivec.rbegin(), ivec.rend(), ival) ; riter != ivec.rend() ) {
        ivec.erase(riter.base() - 1);
    }
    else {
        cout<< "bulunmadi..\n";
    }
    print(ivec.begin(), ivec.end());


}
*/