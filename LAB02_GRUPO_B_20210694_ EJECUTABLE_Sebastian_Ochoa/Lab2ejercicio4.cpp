//4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre todos los números primos que se encuentren entre el rango de 
//valores, de no encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.
//Sebastian Andre Ochoa Ortiz Cui:20210694 
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int nummayor, nummenor;
    cout << "Ingrese el numero mayor: ";
    cin >> nummayor;
    cout << "Ingrese el numero menor: ";
    cin >> nummenor;
    int con, pr;
    if (nummayor < nummenor || nummayor == nummenor)
    {
        cout << "Entrada no valida";
    }
    else
        for (int i = nummenor; i <= nummayor; i++)
        {
            pr = 1;
            con = 2;
            while (con <= i / 2 && pr)
            {
                if (i % con == 0)
                    pr = 0;
                con++;
            }
            if (pr)
                cout << i << ", ";
        }
}