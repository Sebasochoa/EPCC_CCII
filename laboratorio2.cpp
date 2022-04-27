#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n,promedio;
    cout <<"Numero de alumnos: ";
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Estudiante N: "<<i+1<<endl;
    
        float sum = 0;
        for (int j = 0; j< 3; j++)
        {
            cout<<"Nota del estudiante "<<j + 1<<": ";
            cin >> promedio;
            sum += promedio;
        }
        cout<<"Promedio de nota del estudiante N "<<i+1<<" es "<<sum / 3<<endl;
    }
    return 0;
}