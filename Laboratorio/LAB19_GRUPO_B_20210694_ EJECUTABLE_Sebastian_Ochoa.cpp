/*#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void fill(vector<T> &vec)
{
    int len;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> len;
    for (auto i = 0; i < len; i++)
    {
        int x, y;
        cout << "Ingresando valores en el par " << i + 1 << ":\n";
        cout << "Ingrese el valor 'X' : ";cin >> x;
        cout << "Ingrese el valor 'Y' : ";cin >> y;
        vec.push_back(make_pair(x, y));
    }
}
class Regresion
{
public:
    template <typename T>
    void operator()(vector<T> &vec)
    {
        float b, m;
        float numerador, denominador;
        float sumatoriaxy = 0, sumatoriax = 0, sumatoriay = 0, sumatoriaxx = 0, n = 0;
        for (auto i = 0; i < vec.size(); i++)
        {

            sumatoriaxy += vec.at(i).first * vec.at(i).second;
            sumatoriax += vec.at(i).first;
            sumatoriay += vec.at(i).second;
            sumatoriaxx += vec.at(i).first * vec.at(i).first;
            n = vec.size();
        }
        numerador = (n * sumatoriaxy) - ((sumatoriax) * (sumatoriay));
        denominador = (n * sumatoriaxx) - ((sumatoriax) * (sumatoriax));
        m = numerador / denominador;
        b = (sumatoriay / n) - (m * (sumatoriax / n));
        cout << "Los valores de a y b son : " << m << " y " << b << endl;
    }
};

int main()
{

    vector<pair<float, float>> vec1 = {};
    fill(vec1);
    Regresion obj;
    obj(vec1);
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Find
{
private:
    string x;

public:
    Find(string x)
    {
        this->x = x;
    }
    void print()
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i];
        }
        cout << endl;
    }

    template <typename T>
    int operator()(T search)
    {
        int res = 0;
        if (!x.empty())
        {
            for (int i = 0; i < x.size(); i++)
            {
                if (x[i] == search)
                {
                    res++;
                }
            }
        }
        return res;
    }

    template <typename T, typename S>
    int operator()(T pos2, S search)
    {
        int res = 0;
        if (!x.empty())
        {
            for (int i = 0; i < pos2; i++)
            {
                if (x[i] == search)
                {
                    res++;
                }
            }
        }
        return res;
    }

    template <typename T, typename S>
    int operator()(T pos1, T pos2, S search)
    {
        int res = 0;
        if (!x.empty())
        {
            for (int i = pos1; i < pos2; i++)
            {
                if (x[i] == search)
                {
                    res++;
                }
            }
        }
        return res;
    }
};
int main()
{
    Find x("Hola como estas");
    int x1 = x(3, 7, 'o');
    x.print();
    cout << "Existen " << x1 << " 'o' desde la posicion 3 a la 7," << endl;
    Find y("Yo estoy bien");
    int y1, y2;
    y1 = y(8, 'e');
    y2 = y('e');
    y.print();
    cout << "Existen " << y1 << " 'e' hasta la posicion 8." << endl;
    cout << "Existen " << y2 << " 'e' en todo el string." << endl;
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

class Elementos
{
private:
    int a;
    int b;

public:
    Elementos()
    {
        a = rand() % 30;
        b = rand() % 30;
    }
    bool operator()(Elementos i, Elementos j)
    {
        return i.a < j.b;
    }
    template <typename T>
    void print(vector<T> &vec)
    {
        for (auto i = 0; i < vec.size(); i++)
        {
            cout << i + 1 << ": " << vec.at(i).a << "  " << vec.at(i).b << endl;
        }
    }
} Elemento;

int main()
{
    srand(time(NULL));
    Elementos a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;
    vector<Elementos> x1{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t};
    cout << "Vector Desordenado: " << endl;
    a.print(x1);
    sort(x1.begin(), x1.end(), Elemento);
    cout << "Metodo Sort: " << endl;
    a.print(x1);
    system("pause");
    return 0;
}
*/