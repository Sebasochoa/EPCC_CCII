#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

template <typename T>
class polinomio
{
private:
    int x;
    T *coeficiente;

public:
    //Constructor
    polinomio(int grado)
    {
        x = grado;
        coeficiente = new T[grado];
        for (int i = 0; i < x + 1; i++)
        {
            cout << "Ingrese coeficiente: ";
            cin >> coeficiente[i];
        }
    }
    //Destructor
    ~polinomio()
    {
        delete[] coeficiente;
        x = 0;
    }
    //Operadores
    void operator+(polinomio r2)
    {
        for (int i = 0; i < x + 1; i++)
        {
            coeficiente[i] += r2.coeficiente[i];
        }
    }
    void operator-(polinomio r2)
    {
        for (int i = 0; i < x + 1; i++)
        {
            coeficiente[i] -= r2.coeficiente[i];
        }
    }
    void operator*(polinomio r2)
    {
        for (int i = 0; i < x + 1; i++)
        {
            coeficiente[i] *= r2.coeficiente[i];
        }
    }
    void operator/(polinomio r2)
    {
        for (int i = 0; i < x + 1; i++)
        {
            coeficiente[i] /= r2.coeficiente[i];
        }
    }
    //Salida ostream
    friend ostream &operator<<(ostream &out, const polinomio &p)
    {
        int cont = p.x;
        out << "Polinomio: ";
        for (int i = 0; i < p.x + 1; i++)
        {
            if (p.coeficiente[i] == 1)
            {
                if (p.x - i > 1)
                {
                    out << "x^" << p.x - i << "+";
                }
                if (p.x - i == 1)
                {
                    out << "x"<< "+";
                }
                if (p.x - i == 0)
                {
                    out << endl;
                }
            }
            else
            {
                if (p.x - i > 1)
                {
                    out << p.coeficiente[i] << "x^" << p.x - i << "+";
                }
                if (p.x - i == 1)
                {
                    out << p.coeficiente[i] << "x"
                        << "+";
                }
                if (p.x - i == 0)
                {
                    out << p.coeficiente[i] << endl;
                }
            }
        }
        return out;
    }
};
int main()
{
    polinomio<int> r1(2);
    polinomio<int> r2(2);
    r1+r2;
    cout << r1;
}
