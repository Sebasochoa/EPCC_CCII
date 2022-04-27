//2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;
int main()
{
    int con, pr;
    for ( int i = 2 ; i<= 230; i++ )
    {
        pr = 1;
        con = 2;
        while ( con <= i / 2 && pr)
        {
            if ( i % con == 0 )
                pr = 0;
            con++;
        }
        if ( pr )
            cout<<i<<", ";
    }
    return 0;
} 
