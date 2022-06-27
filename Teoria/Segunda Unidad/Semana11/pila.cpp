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
nodo nuevo();
void top();
int pop();
void push(int x);
void clear();
int size();
bool full();
bool empty();
void pushfunc();
void popfunc();
void fullfunc();
void emptyfunc();
void presentar();
void menu()
{
    cout << "*********************MEN" << char(233) << " PILAS*********************" << endl;
    cout << "1: Funci" << char(162) << "n TOP\n";
    cout << "2: Funci" << char(162) << "n POP\n";
    cout << "3: Funci" << char(162) << "n PUSH\n";
    cout << "4: Funci" << char(162) << "n CLEAR\n";
    cout << "5: Funci" << char(162) << "n SIZE\n";
    cout << "6: Funci" << char(162) << "n FULL\n";
    cout << "7: Funci" << char(162) << "n EMPTY\n";
    cout << "8: Mostrar la Pila\n";
    cout << "9: SALIR\n";
    cout << "Ingrese una opcion valida: ";
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
            top();
            break;
        case 2:
            popfunc();
            break;
        case 3:
            pushfunc();
            break;
        case 4:
            clear();
            break;
        case 5:
            cout<<size()<<endl;
            break;
        case 6:
            fullfunc();
            break;
        case 7:
            emptyfunc();
            break;
        case 8:
            presentar();
            break;
        case 9:
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
nodo nuevo()
{
    T = new nodo();
    T->sig = NULL;
}
void top()
{
    if (empty() == true)
    {
        cout << "La pila esta vacia\n";
    }
    else
        cout << I->id;
}
int pop()
{
    if (empty() != true)
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
}
void push(int x)
{
    nuevo();
    T->id = x;
    if (full() != true)
    {
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
    else
        cout << "Pila LLena\n";
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
    if (empty() == true)
    {
        return 0;
    }
    else
    {
        int size = 0;
        for (i = I; i != NULL; i = i->sig)
        {
            size++;
        }
        return size;
    }
}
bool full()
{
    int full = size();
    if (full < T->MAX)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool empty()
{
    if (I == NULL)
    {
        return true;
    }
    else
        return false;
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
void pushfunc()
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
void popfunc()
{
    if(empty() == true){
        cout<<"Pila Vacia\n";
    }
    else
        cout << "Elemento "<< pop() <<" eliminado\n";
}
void fullfunc()
{
    if (full() == true)
    {
        cout << "Pila Llena\n";
    }
    else
        cout << "Hay espacio en la Pila\n";
}
void emptyfunc()
{
    if (empty() == true)
    {
        cout << "Pila Vacia\n";
    }
    else
        cout << "Hay elementos en la Pila\n";
}