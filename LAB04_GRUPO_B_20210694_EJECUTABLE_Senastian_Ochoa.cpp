//Sebastian Ochoa Cui:20210694

//Ejercicio 1
#include <iostream>

using namespace std;

int main()
{

    string personas[3][4];
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    string nombre, apellido, dni, edad;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellido: ";
        getline(cin, apellido);
        cout << "DNI: ";
        getline(cin, dni);
        cout << "Edad: ";
        getline(cin, edad);
        personas[i][0] = nombre;
        personas[i][1] = apellido;
        personas[i][2] = dni;
        personas[i][3] =edad;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<personas[i][j]<<" - ";
        }
        cout<<endl;
        
    }
    
    return 0;
}

//Ejercicio 2
#include<iostream>

using namespace std;

bool busqueda_array(int busqueda[],int valorx )
{
    for (int i = 0; i < 8; i++)
    {
        if(busqueda[i]==valorx)
        {
            return true;
        }
    }
    
}

int main()
{
    int busqueda[8], valorx;
    bool bus=0;
    for (int i = 0; i < 8; i++)
    {       
        cout<<"Ingrese el valor del array "<<i+1<<": ";
        cin>>busqueda[i];
    }
    cout<<"Ingrese el numero a buscar: ";
    cin>>valorx;
    busqueda_array(busqueda,valorx);
    bus=busqueda_array(busqueda,valorx);
    if(bus==1)
    {
        cout<< true;
    }
    else
        cout<< false;
    
    
}
//Ejercicio 3
#include<iostream>

using namespace std;

void suma_fila_par(int M[][3],int suma)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i%2==0)
            {
                suma+=M[i][j];
            }
        }
        
    }
    cout<<"La suma de las filas pares es: "<<suma;
    
}

int main()
{
    int M[5][3], suma=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Ingrese un valor: ";
            cin>>M[i][j];
        }
        
    }
    suma_fila_par(M,suma);
    
    
    
}
//Ejercicio 4
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> primos;
    int con, pr, largo;
    for (int i = 2; i <= 100; i++)
    {
        pr = 1;
        con = 2;
        while (con <= i / 2 && pr)
        {
            if (i % con == 0)
                pr = 0;
            con++;
        }
        if (pr)
        {
           primos.push_back(i);
        }
            
    }
    largo=primos.size();
    for (int i = 0; i <largo; i++)
    {
        cout<<primos[largo-i-1]<<", ";
    }
    

}
//Ejercicio 6
#include <iostream>

using namespace std;

int main()
{
    int M[3][3];
    int sum1=0, sum2=0, sum3=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Valor: ";
            cin >> M[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        
            sum1 += M[0][i];
            sum2 += M[1][i];
            sum3 += M[2][i];
    }
    if (sum1 > sum2 && sum1 > sum3)
    {
        cout << "La fila con la suma mayor es la primera con un valor de: " << sum1;
    }
    if (sum2 > sum1 && sum2 > sum3)
    {
        cout << "La fila con la suma mayor es la segunda con un valor de: " << sum2;
    }

    if (sum3 > sum1 && sum3 > sum2)
    {
        cout << "La fila con la suma mayor es la tercera con un valor de: " << sum3;
    }
}
//Ejercicio 7
#include <iostream>

using namespace std;

void mover_fila(int matriz[][3])
{
    int f1,f2,aux;
    cout <<"Ingrese la fila que quiere mover: ";
    cin>>f1;
    cout<<"Mover a la posicion ";
    cin>>f2;
    for (int i = 0; i < 3; i++)
    {
        aux = matriz[f1 - 1][i];
        matriz[f1 - 1][i] = matriz[f2 - 1][i];
        matriz[f2 - 1][i] = aux;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        cout<<matriz[i][j]<<"\t";
        cout<< endl;
    }
}
void mover_columna(int matriz[][3])
{
    int c1,c2,aux;
    cout <<"Ingrese la columna que quiere mover: ";
    cin>>c1;
    cout<<"Mover a la posicion ";
    cin>>c2;
    for (int i = 0; i < 3; i++)
    {
        aux = matriz[i][c1 - 1];
        matriz[i][c1 - 1] = matriz[i][c2 - 1];
        matriz[i][c2 - 1] = aux;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        cout<<matriz[i][j]<<"\t";
        cout<< endl;
    }
}

int main()
{

    int opc;
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"**************Matriz Inicial**************"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        cout<<"\t"<<matriz[i][j]<<"\t";
        cout<< endl;
    }
    cout<<"Que desea hacer? \n 1:Mover fila \n 2:Mover columna \n";
    cin>>opc;
    if (opc == 1)
    {
        mover_fila(matriz);
    }
    if(opc==2)
    {
        mover_columna(matriz);
    }
    
}

