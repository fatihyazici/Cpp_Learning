#ifndef FUTILS_H
#define FUTILS_H


template<typename InIter>
void print(InIter beg, InIter end)
{
    while(beg != end) {
        std::cout<< *beg<< " ";
    
        beg++;
    }
    std::cout<<"\n---------\n";
}




#endif //
