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


//find algorithm
template<typename InIter, typename Value>
InIter Find(InIter beg, InIter end, const Value& key)
{
    while(beg != end) {

        if(*beg == key) {
            return beg;
        }
        ++beg;
    }
    return beg;
}


//find if algorithm
template<typename InIter, typename Pred>
InIter Find_If(InIter beg, InIter end, Pred f)
{
    while(beg != end) {
        if(f(*beg)) {
            return beg;
        }
        ++beg;
    }
    return beg;
}



//count algorithm
template<typename InIter, typename T>
InIter Count(InIter beg, InIter end, const T& val)
{
    int cnt{};
    
    while(beg != end) {
        if(*beg == val) {
            ++cnt;
        }
        ++beg;
    }

    return cnt;
}


//count if algorithm
template<typename InIter, typename UnPred>
InIter Count_if(InIter beg, InIter end, UnPred f)
{
    int cnt{};
    
    while(beg != end) {
        if(f(*beg)) {
            ++cnt;
        }
        ++beg;
    }

    return cnt;
}


//copy if
template<typename InIter, typename OutIter, typename UnPred>
InIter Copy_if(InIter beg, InIter end, OutIter destbeg, UnPred f)
{    
    while(beg != end) {
        if(f(*beg)) {
            *destbeg++ = *beg;
        }
        ++beg;
    }

    return destbeg;
}

/*--------------------*/


int main()
{
    vector<string> svec{"ali", "ahmet", "can", "serkan", "sut", "neyzen"};

    vector<string> destvec;

    size_t len;
    cout<<"len giriniz: ";
    cin>>len;

    auto fpred = [len](const auto& s){return s.size() == len; }; 
    copy_if(svec.begin(), svec.end(), back_inserter(destvec), fpred);


    print(svec.begin(), svec.end());
    print(destvec.begin(), destvec.end());

}