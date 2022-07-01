#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

//Ejercicio 1 

int main()
{
    int num1, num2, res;
    cout << "Ingrese el primero numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    res = num1 * num2;
    cout << "El producto es " << res;
}

//Ejercicio2 
int main()
{
    string nombre, apellido1, apellido2, n, a1, a2;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su Apellido Paterno: ";
    cin >> apellido1;
    cout << "Ingrese su Apellido Materno: ";
    cin >> apellido2;
    int lenn = nombre.size();
    for (int i = 0; i < lenn; ++i)
    {
        nombre[i] = tolower(nombre[i]);
    }
    int lena1 = apellido1.size();
    for (int i = 0; i < lena1; ++i)
    {
        apellido1[i] = tolower(apellido1[i]);
    }
    int lena2 = apellido2.size();
    for (int i = 0; i < lena2; ++i)
    {
        apellido2[i] = tolower(apellido2[i]);
    }
    n = nombre.substr(0, 1);
    a2 = apellido2.substr(0, 1);
    cout << "El correo UNSA es " << n << apellido1 << a2 << "@unsa.edu.pe";
}

//Ejercicio 5 
int main()
{
    string str1("23,5");

    int str1_n;
    sscanf(str1.data(), "%d", &str1_n);
    cout<<"%d\n", str1_n);
    return 0;
}

//Ejercicio 6 
int main()
{
    int num;
    string bin = "";
    cout << "Ingrese el numero: ";
    cin >> num;
    if (num > 100 && num < 999)
    {
        while (num > 0)
        {
            if (num % 2 == 0)
            {
                bin = "0" + bin;
            }
            else
            {
                bin = "1" + bin;
            }
            num = (int)num / 2;
        }
        cout << "Binario: " << bin;
    }
    else if (num >= 999)
    {
        cout << "Numero no valido (Mayor que 999)" << endl;
    }
    else if (num <= 100)
    {
        cout << "Numero no valido (Menor que 100)" << endl;
    }
}

//Ejercicio 7 
int main()
{
    int num1, num2;
    cout << "Ingrese el numero mayor: ";
    cin >> num1;
    cout << "Ingrese el numero menor: ";
    cin >> num2;
    if (num1 % num2 == 0)
    {
        cout << num1 << " es divisor de " << num2 << endl;
    }
    else
    {
        cout << num1 << " no es divisor de " << num2;
    }
}

//Ejercicio 8 
int main()
{
    int lista[20], lenlis;
    cout << "Cantidad de numeros: ";
    cin >> lenlis;

    for (int i = 0; i < lenlis; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> lista[i];
    }
    int sumalis = 0;
    for (int i = 0; i < lenlis; i++)
    {
        int numactu = lista[i];

        sumalis = sumalis + numactu;
    }
    cout << "La sumatoria es: " << sumalis;
}

//Ejercicio 9 
int main()
{
    vector<int> lista;
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    cout << "Numero 1: ";
    cin >> num1;
    if (num1 < 0)
    {
        lista.insert(lista.begin(), num1);
        ;
    }
    cout << "Numero 2: ";
    cin >> num2;
    if (num2 < 0)
    {
        lista.insert(lista.begin(), num2);
        ;
    }
    cout << "Numero 3: ";
    cin >> num3;
    if (num3 < 0)
    {
        lista.insert(lista.begin(), num3);
        ;
    }
    cout << "Numero 4: ";
    cin >> num4;
    if (num4 < 0)
    {
        lista.insert(lista.begin(), num4);
        ;
    }
    cout << "Numero 5: ";
    cin >> num5;
    if (num5 < 0)
    {
        lista.insert(lista.begin(), num5);
        ;
    }
    cout << "Numero 6: ";
    cin >> num6;
    if (num6 < 0)
    {
        lista.insert(lista.begin(), num6);
        ;
    }
    cout << "Numero 7: ";
    cin >> num7;
    if (num7 < 0)
    {
        lista.insert(lista.begin(), num7);
        ;
    }
    cout << "Numero 8: ";
    cin >> num8;
    if (num8 < 0)
    {
        lista.insert(lista.begin(), num8);
        ;
    }
    cout << "Numero 9: ";
    cin >> num9;
    if (num9 < 0)
    {
        lista.insert(lista.begin(), num9);
        ;
    }
    cout << "Numero 10: ";
    cin >> num10;
    if (num10 < 0)
    {
        lista.insert(lista.begin(), num10);
        ;
    }
    int lenl = lista.size();
    int sumalis = 0;
    for (int i = 0; i < lenl; i++)
    {
        int numa = lista[i];

        sumalis = sumalis + numa;
    }
    cout << "La sumatoria es: " << sumalis;
    return 0;
}
