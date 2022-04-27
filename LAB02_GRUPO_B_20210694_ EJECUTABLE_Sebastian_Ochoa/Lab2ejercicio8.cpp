//8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado. 
//Sebastian Andre Ochoa Ortiz Cui:20210694
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int num;
        cout<<"Introduzca un numero entero: ";
        cin>>num;
        cout<<"La tabla de multiplicar del "<<num<<"es: "<<endl;
        for (int i = 1 ; i <= 12 ; i++ )
            cout<<i<<" * "<<num<<" = "<<i*num<<endl;
    return 0;
}