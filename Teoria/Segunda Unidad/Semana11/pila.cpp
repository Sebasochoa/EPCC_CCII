#include <iostream>
using namespace std;
class nodo
{
private:
public:
    int id;
    static const int MAX = 10;
    nodo *sig;
};

nodo *I, *F, *T;
nodo nuevo()
{
    T->sig = NULL;
}
void top()
{
    cout << I->id;
}
void push(int x)
{
    nuevo();
    T->id = x;
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
int pop()
{
    if (I != NULL)
    {
        nodo *aux;
        aux = I;
        I = I->sig;
        return aux->id;
        delete aux;
    }
}
void clear()
{
    nodo *i;
    for (i = I; i != NULL; i = i->sig)
    {
        nodo *aux;
        aux = I;
        I = I->sig;
        delete aux;
    }
}
int size()
{
    nodo *i;
    int size=0;
    for (i = I; i != NULL; i = i->sig)
    {
        size++;
    }
    return size;
}
bool full(){
    int full = size();
    if (full<T->MAX)
    {
        return false;
    }else
    {
        return true;
    }
}
bool empty(){
    if(I==NULL){
        return true;
    } else
        return false;
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
        push(v);
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
        pop();
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
void menu()
{
    cout << "*********************MEN" << char(233) << " PILAS*********************" << endl;
    cout << "1: Insertar elementos a la PILA (Funcion PUSH)\n";
    cout << "2: Eliminar elementos de la PILA (Funcion POP)\n";
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