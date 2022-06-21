#include <iostream>
using namespace std;
class racional
{
private:
    int numerador = 0, denominador = 1;

public:
    racional() {}
    racional(int numerador, int denominador)
    {
        this->numerador = numerador;
        this->denominador = denominador;
    }
    racional &operator=(const racional &otro)
    {
        if (this == &otro)
        {
            return *this;
        }
        if (numerador != otro.numerador || denominador != otro.numerador)
        {
            numerador = 0;
            denominador = 1;
            numerador = otro.numerador;
            denominador = otro.denominador;
        }
        return *this;
    }
    racional operator+(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        if (denr1 == denr2)
        {
            return racional(numr1 + numr2, denr1);
        }
        else
        {
            int numresult = (numr1 * denr2) + (denr1 * numr2);
            int denresult = denr1 * denr2;
            return racional(numresult, denresult);
        }
    }
    racional operator-(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        if (numr1 == numr2 && denr1 == denr2)
        {
            return racional(0, 0);
        }
        else if (denr1 == denr2)
        {
            return racional(numr1 - numr2, denr1);
        }
        else
        {
            int numresult = (numr1 * denr2) - (denr1 * numr2);
            int denresult = denr1 * denr2;
            return racional(numresult, denresult);
        }
    }
    racional operator*(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        return racional(numr1 * numr2, denr1 * denr2);
    }
    racional operator/(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        int aux;
        aux = numr2;
        numr2 = denr2;
        denr2 = aux;
        return racional(numr1 * numr2, denr1 * denr2);
    }
    void operator+=(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        if (denr1 == denr2)
        {
            numerador = numr1 + numr2;
        }
        else
        {
            int numresult = (numr1 * denr2) + (denr1 * numr2);
            int denresult = denr1 * denr2;
            numerador = numresult;
            denominador = denresult;
        }
    }
    void operator-=(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        if (denr1 == denr2)
        {
            numerador = numr1 - numr2;
        }
        else
        {
            int numresult = (numr1 * denr2) - (denr1 * numr2);
            int denresult = denr1 * denr2;
            numerador = numresult;
            denominador = denresult;
        }
    }
    void operator*=(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        numerador = numr1 * numr2;
        denominador = denr1 * denr2;
    }
    void operator/=(racional r2)
    {
        simplifica();
        r2.simplifica();
        int numr1 = numerador;
        int denr1 = denominador;
        int numr2 = r2.numerador;
        int denr2 = r2.denominador;
        int aux;
        aux = numr2;
        numr2 = denr2;
        denr2 = aux;
        numerador = numr1 * numr2;
        denominador = denr1 * denr2;
    }
    double rounde()
    {
        double res = (double)numerador / (double)denominador;
        return res;
    }

    void imprime()
    {
        if ((numerador == 0 && denominador == 0) || (numerador / denominador == 0))
        {
            cout << 0;
        }
        else if (denominador != 0)
        {
            cout << numerador << "/" << denominador << endl;
        }
        else if (denominador == 0)
        {
            cout << "Indefinido";
        }
    }

    void simplifica()
    {
        int resultado = 1;
        int aux, num = numerador, den = denominador;
        if (numerador < denominador)
        {
            aux = num;
            num = den;
            den = aux;
        }
        for (int i = 2; i <= den; i++)
        {
            if (((num % i) == 0) && ((den % i) == 0))
            {
                resultado = i;
            }
        }
        int mcdiv = resultado;
        numerador /= mcdiv;
        denominador /= mcdiv;
    }

    ~racional()
    {
    }
};

int main()
{
    racional r1(1, 2);
    racional r2(1, 3);
    r1.imprime();
}