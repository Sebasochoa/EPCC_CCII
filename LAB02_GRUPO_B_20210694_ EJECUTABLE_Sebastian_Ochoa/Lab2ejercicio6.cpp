//6. Elabore un programa que calcule la serie de Fibonacci. La serie de
//Fibonacci es la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada
//número se calcula sumando los dos anteriores a él.
//Sebastian Andre Ochoa Ortiz Cui:20210694 
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n, x = 0, y = 1, z = 1;
    cout << "Numero de la serie Fibonacci: ";
    cin >> n;
    cout<<"1, ";
    for (int i = 1; i <= n; i++)
    {
        z = x + y;          
        cout<<z<<", "; 
        x = y;              
        y = z;              
    }
    return 0;
} 