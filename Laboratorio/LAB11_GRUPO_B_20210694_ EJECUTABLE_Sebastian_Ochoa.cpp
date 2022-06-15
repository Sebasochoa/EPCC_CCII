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
    cout << "Elemento eliminado\n";
}
void Busqueda(int pos)
{
    if (I != NULL)
    {

        nodo *aux;
        nodo *siguiente;
        aux = I;
        for (aux = I; aux != NULL; aux = aux->sig)
        {
            if (aux->id == pos)
            {
                cout<<"Elemento ("<<aux->id<<") encontrado\n";
            } else if (aux->id != pos)
            {
                cout<<"Elemento NO encontrado\n";
            }
        }
    }
    // cout<<" encontrado\n";
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
    if (I==NULL)
    {
        cout<<"Pila Vacia";
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
            POP();
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
            cout << "Opcion no valida.\a\n";
            break;
        }
    } while (valid != true);
    // system("pause");
    return 0;
}