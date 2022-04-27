//5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la media de los números leídos. 
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    float num1,num2;
    float promedio=0;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    promedio=(num1+num2)/2;
    if(num1==num2){
        cout<<"Los numeros soon iguales. Promedio: "<<num1;
    }
    else if (num1>num2)
    {

        cout<<"El numero mayor es: "<<num1<<endl;
        cout<<"El numero menor es: "<<num2<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
    }
    else if (num2>num1)
    {
        cout<<"El numero mayor es: "<<num2<<endl;
        cout<<"El numero menor es: "<<num1<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
    }
}
       