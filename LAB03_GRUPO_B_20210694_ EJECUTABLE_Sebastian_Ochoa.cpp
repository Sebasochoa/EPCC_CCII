//Sebastian Andre Ochoa Ortiz Cui:20210694
//Ejercicio 1
#include<iostream>

using namespace std;

int potencia(int bas,int exp,int pot)
{
    int acum=1;
    for (int i = 0; i < exp; i++)
    {
        acum=acum*bas; 
    }
    pot=acum;

    return pot;
    
}

int main()
{
    int bas, exp, pot;
    cout<<"Ingrese la base de la potencia:  ";
    cin>>bas;
    cout<<"Ingrese el exponente de la potencia: ";
    cin>>exp;
    cout<<"El resultado de la potencia es: ";
    cout<<potencia(bas,exp,pot);
}

//Ejercicio 2
#include<iostream>

using namespace std;

bool bisiesto(int a)
{
    if(a%4 == 0 && a%100 != 0 || a%400 == 0)
    {
        return true;
    }
    else
        return false;

}

int main()
{
    int a;
    bool res=0;

   cout << "Introduce a"<<(char)164 <<"o: "; 
   cin >> a;
   bisiesto(a);
   res=bisiesto(a);

   if(res==true)                                       
      cout << "El a"<<(char)164<<"o ingresado es bisiesto" << endl;
   else
      cout << "El a"<<(char)164<<"o ingresado NO es bisiesto"<<endl;
}

//Ejercicio 3
#include <iostream>

using namespace std;

void calcularEdad(int actuala, int actualm, int actualf, int anacio, int mnacio, int fnacio)
{
    int respFech, respMes;

    if (actualf < fnacio)
    {
        actualf = actualf + 30;
        actualm = actualm - 1;
        respFech = actualf - fnacio;
    }
    else
        respFech = actualf - fnacio;

    if (actualm < mnacio)
    {
        actualm = actualm + 12;
        actuala = actuala - 1;
        respMes = actualm - mnacio;
    }
    else
        respMes = actualm - mnacio;

    cout << "Su edad es " << actuala - anacio << " a" << (char)164 << "os " << respMes << " meses "; 
    if(respFech>1)
    {
        cout<<respFech << " dias.";
    }
    else
        cout<< respFech << " dia.";
}

int main()
{
    int actuala, actualm, actualf, anacio, mnacio, fnacio;

    cout << "Ingrese A" << (char)164 << "o Actual: ";
    cin >> actuala;
    cout << "Ingrese Mes Actual: ";
    cin >> actualm;
    cout << "Ingrese Fecha Actual: ";
    cin >> actualf;

    cout << endl;

    cout << "Ingrese A" << (char)164 << "o Nacimiento: ";
    cin >> anacio;
    cout << "Ingrese Mes de Nacimient:o ";
    cin >> mnacio;
    cout << "Ingrese Fecha de Nacimiento: ";
    cin >> fnacio;

    calcularEdad(actuala, actualm, actualf, anacio, mnacio, fnacio);

    return 0;
}


//Ejercicio 4

#include<iostream>

using namespace std;

void primo(int nummaxi)
{
    int con, pr;
    for ( int i = 2 ; i<= nummaxi; i++ )
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
}

int main()
{
    int nummaxi;
    cout<<"Ingrese hasta que numero desea los numeros primos: ";
    cin>>nummaxi;
    primo(nummaxi);
    
    
}   

//Ejercicio 5

#include<iostream>

using namespace std;

bool validar(int num)
{
    while (num%2!=0)
    {
        cout<<"No valido. Ingrese otro numero: ";
        cin>>num;
    }
    
}
void suma_impares(int num)
{
    int impar=0;
    for (int i = 1; i < num; i+=2)
    {
        impar+=i;
    }
    cout<<"La suma de todos los numero impares hasta "<<num<<" es "<<impar;
    
}

int main()
{
    int num;
    cout<<"Ingrese un numero par comprendido en 0 y 100: ";
    cin>>num;
    validar(num);
    suma_impares(num);
}   
