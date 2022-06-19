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
void PUSH(int x)
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
        T->sig = I;
    }
    I = T;
}
void POP()
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
void PUSHFUNC()
{
    int n;
    cout << "Cuantos elementos quiere ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cout << "Ingrese Valor: ";
        cin >> v;
        PUSH(v);
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
void POPFUNC()
{
    int n;
    cout << "Cuantos elementos quiere eliminar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        POP();
    }
    if (n == 1)
    {
        cout << "Elemento elimindado\n";
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
void menu()
{
    cout << "*********************MEN" << char(233) << " PILAS*********************" << endl;
    cout << "1: Insertar elementos a la PILA (Funcion PUSH)\n";
    cout << "2: Eliminar elementos de la PILA (Funcion POP)\n";
    cout << "3: Busqueda de un elemento en la PILA\n";
    cout << "4: Mostrar la Pila\n";
    cout << "5: SALIR\n";
    cout << "Ingrese una opcion valida: ";
}
void presentar()
{
    if (I == NULL)
    {
        cout << "Pila Vacia";
    }
    for (T = I; T != NULL; T = T->sig)
    {
        cout << "Int:" << T->id << "\t";
    }
    cout << endl;
}
int main()
{
    int opc;
    bool valid = false;
    do
    {
        menu();
        cin >> opc;
        switch (opc)
        {
        case 1:
            PUSHFUNC();
            break;
        case 2:
            POPFUNC();
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
using namespace std;
class nodo
{
private:
public:
    int id;
    int cant = 0;
    nodo *sig;
};
typedef class nodo pila;
nodo *I, *T;
nodo *I2, *T2;
nodo *I3, *T3;
void startpila(pila &p, pila *a, pila *b, pila *c)
{
    if (a == &p)
    {
        I = T;
    }
    else if (b == &p)
    {
        I2 = T2;
    }
    else if (c == &p)
    {
        I3 = T3;
    }
}
void PUSH(pila &p, int x, pila *a, pila *b, pila *c)
{
    if (a == &p)
    {
        T = new nodo();
        T->id = x;
        T->sig = NULL;
        T->sig = I;
        I = T;
    }

    else if (b == &p)
    {
        T2 = new nodo();
        T2->id = x;
        T2->sig = NULL;
        T2->sig = I2;
        I2 = T2;
    }
    else if (c == &p)
    {
        T3 = new nodo();
        T3->id = x;
        T3->sig = NULL;
        T3->sig = I3;
        I3 = T3;
    }
}
int POP(pila &p, pila *a, pila *b, pila *c)
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
    if (c == &p)
    {
        aux = I3;
        I3 = I3->sig;
        return aux->id;
        delete aux;
    }
}
void presentarA()
{
    cout << "Torre A\n";
    for (T = I; T != NULL; T = T->sig)
    {
        cout << "Int:" << T->id << "\t";
    }
    cout << endl;
}
void presentarB()
{
    cout << "Pila B\n";
    for (T2 = I2; T2 != NULL; T2 = T2->sig)
    {
        cout << "Int:" << T2->id << "\t";
    }
    cout << endl;
}
void presentarC()
{
    cout << "Torre C\n";
    for (T3 = I3; T3 != NULL; T3 = T3->sig)
    {
        cout << "Int:" << T3->id << "\t";
    }
    cout <<"\n\n";
}
void hanoi(int n, pila &A, pila &B, pila &C, pila *a, pila *b, pila *c)
{
    char aux, aux1;
    if (a == &A)
        aux = 'A';
    else if (b == &A)
        aux = 'B';
    else if (c == &A)
        aux = 'C';

    if (a == &C)
        aux1 = 'A';
    else if (b == &C)
        aux1 = 'B';
    else if (c == &C)
        aux1 = 'C';

    if (n == 1)
    {
        PUSH(C, POP(A, a, b, c), a, b, c);
        cout << "Disco " << n << " movido de la Torre " << aux << " a la Torre " << aux1 << endl;
        //Se puede mostrar los pasos en texto o mostrando cada pila si desea mostrarlo de la segunda 
        //forma comente el cout anterior y quite comentario de cada "presenta"
        
        //presentarA();
        //presentarB();
        //presentarC();
        
    }
    else
    {
        hanoi(n - 1, A, C, B, a, b, c);
        PUSH(C, POP(A, a, b, c), a, b, c);
        cout << "Disco " << n << " movido de la Torre " << aux << " a la Torre " << aux1 << endl;
        //Se puede mostrar los pasos en texto o mostrando cada pila si desea mostrarlo de la segunda 
        //forma comente el cout anterior y quite comentario de cada "presenta"
        
        //presentarA();
        //presentarB();
        //presentarC();
        
        hanoi(n - 1, B, A, C, a, b, c);
    }
}
int hanoi_mov(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * hanoi_mov(n - 1) + 1;
}
int main()
{
    int n, mov;
    pila A, B, C;
    pila *a = &A;
    pila *b = &B;
    pila *c = &C;
    startpila(A, a, b, c);
    startpila(B, a, b, c);
    startpila(C, a, b, c);

    cout << "******\tTORRE DE HANOI\t******\n";
    cout << "Ingrese la cantidad de discos con los que quiere jugar: ";
    cin >> n;

    cout << "Inicializando la Torre A con disco(s) del 1 al " << n << endl;
    for (int i = n; i > 0; i--)
    {
        PUSH(A, i, a, b, c);
    }
    cout << "Torre A llena correctamente\n\n";

    cout << "Los elementos de la ";
    presentarA();
    cout << "\n\t";
    system("pause");

    cout << "Resolucion de Torres de Hanoi:\n";
    hanoi(n, A, B, C, a, b, c);
    mov = hanoi_mov(n);
    cout << "Se resolvio con " << mov << " movimientos\n";
    cout << endl;

    presentarC();
    system("pause");
    return 0;
}