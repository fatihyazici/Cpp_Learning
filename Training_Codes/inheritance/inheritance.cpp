#include <iostream>



class Base {
    public:

        void pb_a() {
            std::cout <<"pb_a\n";
        }
    private:
        friend void Der::func();
        void pi_b() {
            std::cout <<"pi_b\n";

        }
    protected:
        void po_c() {
            std::cout <<"po_c\n";

        }
};



class Der : public  Base{
public:
    void func()
    {
        std::cout <<"func\n";

        pb_a();
        pi_b();
        po_c();
    }
};


int main()
{

    Der myder;

  //  myder.pb_a();
    myder.func();
}
