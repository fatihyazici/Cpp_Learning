
namespace Encloser {
    class Myclass {

    };

    inline namespace Nested {
        void func(Encloser::Myclass)
        {

        }
    }
}

int main()
{

    Encloser::Myclass mx;

    func(mx);
}