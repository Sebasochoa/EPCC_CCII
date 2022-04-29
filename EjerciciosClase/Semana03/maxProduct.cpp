#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> lista(100);
    
    int cant, aux=0;

    cout<<"Cantidad de elementos de la lista: ";
    cin>>cant;
    for (int i = 0; i < cant; i++)
    {
        cout<<"Ingrese numero a la lista: ";
        cin>>lista[i];
        
    }
    for (int i = 0; i < cant; i++)
    {
        if (lista[i]*lista[i-1]>aux)
        {
            aux=lista[i]*lista[i+1];
        }
        
    }
    cout<<aux;
    
}
