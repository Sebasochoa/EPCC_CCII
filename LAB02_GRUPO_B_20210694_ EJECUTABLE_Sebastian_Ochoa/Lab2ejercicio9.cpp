//9. Escribir un programa que pida al usuario un número entero y muestre
//por pantalla un triángulo rectángulo como el de más abajo, de altura el
//número introducido. 
//Sebastian Andre Ochoa Ortiz Cui:20210694
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int altura;
    cout<<"Numero entero: ";
    cin>>altura;
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
} 