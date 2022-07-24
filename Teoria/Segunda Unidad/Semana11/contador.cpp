#include <iostream>
using namespace std;
class contador
{
private:
    int cont;
    static auto getcontador() -> size_t& {
        static size_t contador = 0;
        return contador;
    }

public:
    contador(int contador = 0)
        : cont{ contador }
    {
        getcontador()++;
    }

    ~contador()
    {
        getcontador()--;
    }

    contador &operator++()
    {
        ++cont;
        return *this;
    }
    contador operator++(int)
    {
        contador temp{*this};
        ++(*this);
        return temp;
    }

    int valor()
    {
        return cont;
    }
    static auto getCount() -> size_t {
        return getcontador();
    }
};
int main()
{
    contador c1(1);
    contador c2(2);
    cout<<c1.getCount();
}
