//Sebastian Andre Ochoa Ortiz Cui:20210694

//1. Sumar todos los enteros pares desde 2 hasta 100.

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

//3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100.

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

//4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre todos los números primos que se encuentren entre el rango de 
//valores, de no encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int nummayor, nummenor;
    cout << "Ingrese el numero mayor: ";
    cin >> nummayor;
    cout << "Ingrese el numero menor: ";
    cin >> nummenor;
    int con, pr;
    if (nummayor < nummenor || nummayor == nummenor)
    {
        cout << "Entrada no valida";
    }
    else
        for (int i = nummenor; i <= nummayor; i++)
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
                cout << i << ", ";
        }
}

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

//6. Elabore un programa que calcule la serie de Fibonacci. La serie de
//Fibonacci es la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada
//número se calcula sumando los dos anteriores a él.

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

//7. Calcula el promedio de 3 notas para n estudiantes. 

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n, promedio;
    cout << "Numero de alumnos: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Estudiante N " << i + 1 << endl;
        float sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << "Nota del estudiante " << j + 1 << ": ";
            cin >> promedio;
            sum += promedio;
        }
        cout << "Promedio de nota del estudiante N " << i + 1 << " es "<<sum / 3<<endl;
    }
    return 0;
}

//8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado. 

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int num;
        cout<<"Introduzca un numero entero: ";
        cin>>num;
        cout<<"La tabla de multiplicar del "<<num<<"es: "<<endl;
        for (int i = 1 ; i <= 12 ; i++ )
            cout<<i<<" * "<<num<<" = "<<i*num<<endl;
    return 0;
}

//9. Escribir un programa que pida al usuario un número entero y muestre
//por pantalla un triángulo rectángulo como el de más abajo, de altura el
//número introducido. 

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int altura;
    cout<<"Numero entero: ";
    cin>>altura;
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}

//10. Escribir un programa que pida al usuario una palabra y luego muestre
//por pantalla una a una las letras de la palabra introducida empezando por la
//última. 

#include<iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char palabra[25];
    int largo;
    cout<<"Escriba una palabra: ";
    cin.getline(palabra,25,'\n');
    strrev(palabra);
    largo = strlen(palabra);
    for (int i = 0; i < largo; i++)
    {
        cout<<palabra[i]<<endl;
    }
    
} 

       