//Ejercicio 1
#include <iostream>
using namespace std;
template <int N>
struct sumatoria
{
    enum
    {
        value = N + sumatoria<N - 1>::value
    };
};
template <>
struct sumatoria<0>
{
    enum
    {
        value = 0
    };
};

int main()
{

    cout<<"La sumatoria de los digitos de "<<10<<" es: ";
    cout << sumatoria<10>::value << endl;
    system("pause");
    return 0;
}

//Ejercicio 2
#include <iostream>
using namespace std;
template <int N>
struct fibonacci
{
    enum
    {
        value = fibonacci<N - 1>::value + fibonacci<N - 2>::value
    };
};
template <>
struct fibonacci<2>
{
    enum
    {
        value = 1
    };
};
template <>
struct fibonacci<1>
{
    enum
    {
        value = 1
    };
};

int main()
{
    cout <<"La posicion 7 de fibonacci es: " << fibonacci<7>::value << endl;
    system("pause");
    return 0;
}


//Ejercicio 3
#include <iostream>
using namespace std;

template <int N, int X>
struct Potencia
{
    enum
    {
        value = N * Potencia<N, X - 1>::value
    };
};

template <int N>
struct Potencia<N, 0>
{
    enum
    {
        value = 1
    };
};
int main()
{
    cout <<"La quinta potencia de 2 es: "<< Potencia<2, 5>::value << endl;
    system("pause");
    return 0;
}

