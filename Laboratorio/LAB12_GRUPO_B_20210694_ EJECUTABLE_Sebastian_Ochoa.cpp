/*
#include <iostream>
using namespace std;
class nodo
{
private:
public:
    int id;
    int cant = 0;
    nodo *sig;
};
nodo *I, *F, *T;
void Insertar_Cola(int x)
{
    T = new nodo();
    T->id = x;
    T->sig = NULL;
    if (I == NULL)
    {
        I = T;
    }
    else
    {
        F->sig = T;
    }
    F = T;
}
void Eliminar_Cola()
{
    if (I != NULL)
    {
        nodo *aux;
        aux = I;
        I = I->sig;
        delete aux;
    }
}
void Busqueda(int pos)
{
    if (I != NULL)
    {

        nodo *aux;
        nodo *siguiente;
        int val=NULL;
        aux = I;
        for (aux = I; aux != NULL; aux = aux->sig)
        {
            if (aux->id == pos)
            {
                val=aux->id;
            }
        }
        if (val!=NULL)
            {
                cout << "Elemento (" << val << ") encontrado\n";
            }
            else
            {
                cout << "Elemento NO encontrado\n";
            }
    }
}
void Ingre_Func()
{
    int n;
    cout << "Cuantos elementos quiere ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cout << "Ingrese Valor: ";
        cin >> v;
        Insertar_Cola (v);
    }
    if (n == 1)
    {
        cout << "Elemento agregado\n";
    }
    else
    {
        cout << "Elementos agregados\n";
    }
}
void Eli_Func()
{
    int n;
    cout << "Cuantos elementos quiere ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Eliminar_Cola();
    }
    if (n == 1)
    {
        cout << "Elemento eliminado\n";
    }
    else
    {
        cout << "Elementos eliminados\n";
    }
}
void Busquedafunc()
{
    int v;
    cout << "Ingrese el valor a buscar: ";
    cin >> v;
    Busqueda(v);
}
void presentar()
{
    cout << "La lista es:\n";
    for (T = I; T != NULL; T = T->sig)
    {
        cout << "Int:" << T->id << "\t";
    }
    cout << endl;
}
void menu(){
    cout << "***************MEN" << char(233) << " LISTA ENLAZADA***************" << endl;
    cout << "1: Insertar elementos a la Cola\n";
    cout << "2: Eliminar elementos de la Cola\n";
    cout << "3: Busqueda de un elemento en la Cola\n";
    cout << "4: Mostrar la Cola\n";
    cout << "5: SALIR\n";
}
int main()
{
    int opc;
    bool valid = false;
    do
    {
        menu();
        cout << "Ingrese una opcion valida: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            Ingre_Func();
            break;
        case 2:
            Eli_Func();
            break;
        case 3:
            Busquedafunc();
            break;
        case 4:
            presentar();
            break;
        case 5:
            valid = true;
            break;
        default:
            cout << "Opcion no valida.\n";
            break;
        }
    } while (valid != true);
    system("pause");
    return 0;
}
*/

#include <iostream>
#include <time.h>
using namespace std;
class nodo
{
private:
public:
    int id;
    nodo *sig;
};
typedef class nodo cola;
nodo *I, *F, *T;
nodo *I2, *F2, *T2;
void startcola(cola &p, cola *a, cola *b)
{
    if (a == &p)
    {
        I = T;
    }
    else if (b == &p)
    {
        I2 = T2;
    }
}
void ingresar(cola &p, int x, cola *a, cola *b)
{
    if (a == &p)
    {
        T = new nodo();
        T->id = x;
        T->sig = NULL;
        if (I == NULL)
        {
            I = T;
        }
        else
        {
            F->sig = T;
        }
        F = T;
    }

    else if (b == &p)
    {
        T2 = new nodo();
        T2->id = x;
        T2->sig = NULL;
        if (I2 == NULL)
        {
            I2 = T2;
        }
        else
        {
            F2->sig = T2;
        }
        F2 = T2;
    }
}
int eliminar(cola &p, cola *a, cola *b)
{
    nodo *aux;
    if (a == &p)
    {
        aux = I;
        I = I->sig;
        return aux->id;
        delete aux;
    }
    if (b == &p)
    {
        aux = I2;
        I2 = I2->sig;
        return aux->id;
        delete aux;
    }
}
void presentarA()
{
    cout << "Cola A\n";
    for (T = I; T != NULL; T = T->sig)
    {
        cout << "Int:" << T->id << "\t";
    }
    cout << endl;
}
void presentarB()
{
    cout << "cola B\n";
    for (T2 = I2; T2 != NULL; T2 = T2->sig)
    {
        cout << "Int:" << T2->id << "\t";
    }
    cout << endl;
}
void inicialzar_valores(cola &A, cola &B, cola *a, cola *b){
    srand(time(NULL));
    int len1=2+rand() % (5-2);
    int len2=2+rand() % (5-2);
    for (int i = 0; i < len1; i++)
    {
        int val1=10+rand()%(30-10);
        ingresar(A,val1,a,b);
    }
    for (int i = 0; i < len2; i++)
    {
        int val2=10+rand()%(30-10);
        ingresar(B,val2,a,b);
    }
}
void mayor_iter(int n,cola &A, cola &B, cola *a, cola *b){
    for (int i = 0; i < n; i++)
    {
        ingresar(A,eliminar(A,a,b),a,b);
        ingresar(B,eliminar(B,a,b),a,b);
    }
    int valorA=I->id;
    int valorB=I2->id;
    if (valorA==valorB)
    {
        cout<<"Las edades de ambas colas son iguales\n";
    }
    else if (valorA>valorB)
    {
        cout<<"Despues de "<<n<<" iteraciones la edad de la cola A es mayor con "<<valorA<<endl;
    }
    else if (valorB>valorA)
    {
        cout<<"Despues de "<<n<<" iteraciones la edad de la cola B es mayor con "<<valorB<<endl;
    }
    
    
}
int main()
{
    int n;
    cola A, B;
    cola *a = &A;
    cola *b = &B;
    startcola(A, a, b);
    startcola(B, a, b);
    cout<<"Inicializando Valores de ambas colas\n";
    inicialzar_valores(A,B,a,b);
    cout<<"Los valores son:\n";
    presentarA();
    presentarB();
    cout<<"Ingrese el numero de iteraciones que desea realizar: "; cin>>n;
    mayor_iter(n,A,B,a,b);
    system("pause");
    return 0;
}