//10. Escribir un programa que pida al usuario una palabra y luego muestre
//por pantalla una a una las letras de la palabra introducida empezando por la
//última. 
//Sebastian Andre Ochoa Ortiz Cui:20210694
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char palabra[25];
    int largo;
    cout<<"Escriba una palabra: ";
    cin.getline(palabra,25,'\n');
    strrev(palabra);
    largo = strlen(palabra);
    for (int i = 0; i < largo; i++)
    {
        cout<<palabra[i]<<endl;
    }
    
} 