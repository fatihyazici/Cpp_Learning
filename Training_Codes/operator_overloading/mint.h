#ifndef MINT_H
#define MINT_H


//operator<< ve operator>> sınıf içinde başlık dosyasında bildirilecekse, tanımı cpp içinde yapılacaksa bu kullanılır. tanımlama da .h dosyası içinde olacaksa <ostream> <istream>
#include <iosfwd> 


class Mint {
public:
    explicit Mint(int val = 0) : mval{val} { }


    friend std::ostream& operator<<(std::ostream&, const Mint&);    //inserter
    friend std::istream& operator>>(std::istream&, Mint&);          //abstracter

    friend bool operator<(const Mint& x, const Mint& y) /*kucuktur*/
    {
        return x.mval < y.mval;
    }

    friend bool operator==(const Mint& x, const Mint& y)/*esit esit*/
    {
        return x.mval == y.mval;
    }


    Mint& operator+=(const Mint& x)
    {
        mval += x.mval;

        return *this;
    }


    Mint& operator-=(const Mint& x)
    {
        mval -= x.mval;

        return *this;
    }

    Mint& operator*=(const Mint& x)
    {
        mval *= x.mval;

        return *this;
    }

    //önek ++ operatorü
    Mint& operator++()
    {
        ++mval;

        return *this;
    }
    //sonek ++ operatorü
    Mint operator++(int)
    {
        Mint temp{ *this };

        ++*this;
        return temp;
    }


private:
    int mval;

};


/*toplama*/
inline Mint operator+(const Mint& x, const Mint& y)
{
    return Mint{x} += y;
}


/*cikarma*/
inline Mint operator-(const Mint& x, const Mint& y)
{
    return Mint{x} -= y;
}


/*carpma*/
inline Mint operator*(const Mint& x, const Mint& y)
{
    return Mint{x} *= y;
}


/*buyuktur, kucuktur operator fonksiyonu kullanılır.*/
inline bool operator>(const Mint& x, const Mint& y)
{
    return y<x;
}

/*buyuk esit*/
inline bool operator>=(const Mint& x, const Mint& y)
{
    return !(x<y);
}

/*kucuk esit*/
inline bool operator<=(const Mint& x, const Mint& y)
{
    return !(x>y);
}


/*esit degil*/
inline bool operator!=(const Mint& x, const Mint& y)
{
    return !(x==y);
}

#endif