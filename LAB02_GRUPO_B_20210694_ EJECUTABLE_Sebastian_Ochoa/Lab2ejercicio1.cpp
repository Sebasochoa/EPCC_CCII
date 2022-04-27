//1. Sumar todos los enteros pares desde 2 hasta 100.
//Sebastian Andre Ochoa Ortiz Cui:20210694

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using  namespace std;

int main()
{
    int par = 0;
    for (int i = 2; i <= 100; i += 2){
        par += i;
    }
    cout<<"Suma de todos los numeros pares es: "<<par;
} 