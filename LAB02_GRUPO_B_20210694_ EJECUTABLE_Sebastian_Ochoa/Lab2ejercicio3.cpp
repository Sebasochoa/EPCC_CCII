//3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100.
//Sebastian Andre Ochoa Ortiz Cui:20210694
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    for (int i = 1; i <=100; i++)
    {
        if(i%5==0){
            cout<<i<<endl;
        }
    }
} 