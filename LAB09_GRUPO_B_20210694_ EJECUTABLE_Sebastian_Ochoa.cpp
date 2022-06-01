/*
//Sebastian Andre Ochoa Ortiz CUI:20210694
#include <iostream>
using namespace std;
template <class P>
P mayornumero(P num1,P num2,P num3);
template<class M>
M menornumero(M num1,M num2,M num3);
int main()
{
    cout <<"El mayor numero es "<< mayornumero<int>(34,56,25) << endl;
    cout <<"El menor numero es "<< menornumero<float>(23.67,12.34,12.35) << endl;
    system("pause");
    return 0;
}
template <class P>
P mayornumero(P num1,P num2,P num3)
{
    P mayor;
    if (num1>num2 && num1>num3)
    {
        mayor=num1;
    }
    else if (num2>num1 && num2>num3)
    {
         mayor=num2;
    }
    else if (num3>num1 && num3>num2)
    {
         mayor=num3;
    }
    return mayor;
}
template<class M>
M menornumero(M num1,M num2,M num3)
{
    M menor;
    if (num1<num2 && num1<num3)
    {
        menor=num1;
    }
    else if (num2<num1 && num2<num3)
    {
         menor=num2;
    }
    else if (num3<num1 && num3<num2)
    {
         menor=num3;
    }
    return menor;
}
*/
/*
#include <iostream>
using namespace std;
template <class S>
S suma(S num1,S num2){
    return num1+num2;
}
template <class S>
S resta(S num1,S num2){
    return num1-num2;
}
template <class S>
S multiplicacion(S num1,S num2){
    return num1*num2;
}
template <class S>
S division(S num1,S num2){
    return num1/num2;
}
int main()
{
    cout<<"La suma es "<<suma<int>(8,7.5)<<endl;
    cout<<"La resta es "<<resta<float>(4,2.5)<<endl;
    cout<<"La multiplicacion es "<<multiplicacion<int>(8,7.5)<<endl;
    cout<<"La division es "<<division<float>(4,2.5)<<endl;
    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
template <class S>
S letr(S letra){
    return letra;
}
template <class S>
S cad(S cadena){
    return cadena;
}
int main()
{
    char letra='s';
    string cadena="ochoa";
    cout<<letr(letra)<<cad(cadena)<<"@unsa.edu.pe"<<endl;
    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
template <class S>
S mayorArray(S arr[5]){
    S mayor=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>mayor)
        {
            mayor=arr[i];
        }
    }
    return mayor;
}
template <class S>
S menorArray(S arr[5]){
    S mayor=10000000;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<mayor)
        {
            mayor=arr[i];
        }
    }
    return mayor;
}
int main()
{
    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    cout<<"El mayor valor del vector es: "<<mayorArray(ArrayEntero)<<endl;
    cout<<"El mayor valor del vector es: "<<mayorArray(ArrayFloat)<<endl;
    cout<<"El menor valor del vector es: "<<menorArray(ArrayEntero)<<endl;
    cout<<"El menor valor del vector es: "<<menorArray(ArrayFloat)<<endl;
    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
template <class S>
S ascendente(S arr[]){
    S aux;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
            
        }
        
    }
}
template <class S>
S descendente(S arr[5]){
    S aux;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
            
        }
        
    }
}
int main()
{
    int ArrayEntero [5] = {5,3,1,3,2};
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    int x=sizeof(ArrayEntero);
    ascendente(ArrayEntero);
    ascendente(ArrayFloat);
    for (int i = 0; i < 5; i++)
    {
        cout<<ArrayEntero[i]<<" - ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ArrayFloat[i]<<" - ";
    }
    cout<<"\n";
    descendente(ArrayEntero);
    descendente(ArrayFloat);
    for (int i = 0; i < 5; i++)
    {
        cout<<ArrayEntero[i]<<" - ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ArrayFloat[i]<<" - ";
    }
    cout<<"\n";
    system("pause");
}
*/