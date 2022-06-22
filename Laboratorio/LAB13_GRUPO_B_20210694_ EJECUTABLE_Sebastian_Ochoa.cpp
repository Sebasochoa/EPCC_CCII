/*
#include <iostream>
using namespace std;
struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Persona
{
    string nombre;
    int edad;
    Fecha cumpleanio;
};
typedef struct Fecha fecha;
typedef struct Persona persona;
void cumpleanio(persona &p){
    if(p.cumpleanio.mes==6)
    {
        cout<<char(173)<<"Este mes es el cumplea"<<char(164)<<"os de "<<p.nombre<<"!\n";
    }
}
persona crearp(string nom, int a, fecha cumple)
{
    persona temp;
    temp.nombre = nom;
    temp.edad = a;
    temp.cumpleanio = cumple;
    cumpleanio(temp);
    return temp;
}
fecha crearf(int d, int m, int a)
{
    fecha temp;
    temp.dia = d;
    temp.mes = m;
    temp.anio = a;
    return temp;
}

int main()
{
    int n;
    cout << "Cantidad personas quiere almacenar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int edad, dia, mes, anio;
        string nombre;
        cout<<"Creando la Persona "<<i+1<<endl;
        cout << "Ingrese el nombre a almacenar: ";
        cin >> nombre;
        cout << "Ingrese la edad: ";
        cin >> edad;
        cout << "Ingrese la fecha de cumplea" << char(164) << "os:\n";
        cout << "Dia: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "A" << char(164) << "o: ";
        cin >> anio;
        crearp(nombre,edad,crearf(dia,mes,anio));
    }
    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
struct alumno
{
    string nombre;
    char grupo;
    int nota1, nota2, nota3, proyecto;
} alum[100];
int main()
{
    int num_alum;
    cout << "Cantidad de alumnos en la clase: ";
    cin >> num_alum;
    for (int i = 0; i < num_alum; i++)
    {
        cout << "Ingresando datos del alumno " << i + 1 << endl;
        cout << "Ingrese el nombre del alumno: ";
        cin >> alum[i].nombre;
        cout << "Ingrese el grupo al que pertenece (A,B,C) : ";
        cin >> alum[i].grupo;
        cout << "Nota Primera Fase: ";
        cin >> alum[i].nota1;
        cout << "Nota Segunda Fase: ";
        cin >> alum[i].nota2;
        cout << "Nota Tercera Fase: ";
        cin >> alum[i].nota3;
        cout << "Nota del Proyecto Final: ";
        cin >> alum[i].proyecto;
    }
    for (int i = 0; i < num_alum; i++)
    {
        double p1, p2, p3, p4;
        p1 = alum[i].nota1 * 0.15;
        p2 = alum[i].nota2 * 0.20;
        p3 = alum[i].nota3 * 0.25;
        p4 = alum[i].proyecto * 0.40;
        double prom = p1 + p2 + p3 + p4;
        if (prom >= 10.5)
        {
            cout << "El alumno "<<alum[i].nombre<<" aprobo con "<< prom << endl;
        }
        else
            cout << "El alumno "<<alum[i].nombre<<" desaprobo\n";
    }

    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
struct jugadores
{
    string nombre;
    int edad;
    double talla;
} jug[5];
int main()
{
    int num_jug=5;
    for (int i = 0; i < num_jug; i++)
    {
        cout<<"Creando Informe de Jugador "<<i+1<<endl;
        cout<<"Ingrese el nombre del jugador: "; cin>>jug[i].nombre;
        cout<<"Ingrese la edad del jugador: "; cin>>jug[i].edad;
        cout<<"Ingrese la altura del jugador en metros: "; cin>>jug[i].talla;
    }
    for (int i = 0; i < num_jug; i++)
    {
        if(jug[i].edad < 20 && jug[i].talla > 1.7){
            cout<<"El Jugador "<<jug[i].nombre<<" es menor de 20 a"<<char(164)<<"os y mide menos de 1.70m\n";
        }
    }
    system("pause");
}
*/
/*
#include <iostream>
using namespace std;
struct empleados
{
    string nombre;
    char sexo;
    int sueldo;
} emp[100];
int main()
{
    int num_emp;
    int mayor = 0, menor = 99999999;
    cout << "Ingrese el numero de empleados: ";
    cin >> num_emp;
    for (int i = 0; i < num_emp; i++)
    {
        cout<<"Ingresando el empleado "<<i+1<<endl;
        cout << "Ingrese nombre de empleado: ";
        cin >> emp[i].nombre;
        cout << "Ingrese sexo del empleado: ";
        cin >> emp[i].sexo;
        cout << "Ingrese sueldo del empleado: ";
        cin >> emp[i].sueldo;
    }
    for (int i = 0; i < num_emp; i++)
    {
        if (emp[i].sueldo > mayor)
        {
            mayor = emp[i].sueldo;
        }
        if (emp[i].sueldo < menor)
        {
            menor = emp[i].sueldo;
        }
    }
    cout<<"El mayor sueldo es "<<mayor<<endl;
    cout<<"El menor sueldo es "<<menor<<endl;
    system("pause");
}
*/