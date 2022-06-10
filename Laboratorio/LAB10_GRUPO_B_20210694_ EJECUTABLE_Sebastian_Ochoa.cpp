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
void agregar_final(int x)
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
void agregar_inicio(int x)
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
void agregar_pos(int x, int pos)
{
    T = new nodo();
    T->id = x;
    T->sig = NULL;
    nodo *siguiente;
    nodo *aux;
    for (aux = I; aux != NULL; aux = aux->sig)
    {
        if (aux->id == pos)
        {
            siguiente = aux;
        }
    }
    if (I == NULL)
    {
        I = T;
    }
    else
    {
        T->sig = siguiente->sig;
        siguiente->sig = T;
    }
    cout << "Elemento agregado\n";
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
void eliminar_final()
{
    if (I != NULL)
    {
        nodo *aux;
        nodo *valor = NULL;
        aux = I;
        while ((aux != NULL) && (aux->sig != NULL))
        {
            valor = aux;
            aux = aux->sig;
        }
        valor->sig = aux->sig;
        delete aux;
    }
    cout << "Elemento eliminado\n";
}
void eliminar_inicio()
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
void eliminar_pos(int pos)
{
    if (I != NULL)
    {

        nodo *aux;
        nodo *siguiente;
        aux = I;
        while ((aux != NULL) && (aux->id != pos))
        {
            siguiente = aux;
            aux = aux->sig;
            if (aux->id != pos)
            {
                cout << "Numero no encontrado\n";
            }
        }
        siguiente->sig = aux->sig;
        delete aux;
    }
    cout << "Elemento eliminado\n";
}
void ordenar_ascendente()
{
    nodo *p = I;
    while (p != NULL)
    {
        nodo *T = p->sig;
        while (T != NULL)
        {
            if (p->id > T->id)
            {
                int aux = T->id;
                T->id = p->id;
                p->id = aux;
            }
            T = T->sig;
        }
        p = p->sig;
    }
}
void ordenar_descendente()
{
    nodo *p = I;
    while (p != NULL)
    {
        nodo *T = p->sig;
        while (T != NULL)
        {
            if (p->id < T->id)
            {
                int aux = T->id;
                T->id = p->id;
                p->id = aux;
            }
            T = T->sig;
        }
        p = p->sig;
    }
}
void elementosingresar_F()
{
    int n;
    cout << "Cuantos elementos quiere ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cout << "Ingrese Valor: ";
        cin >> v;
        agregar_final(v);
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
void elementosingresar_I()
{
    int n;
    cout << "Cuantos elementos quiere ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cout << "Ingrese Valor: ";
        cin >> v;
        agregar_inicio(v);
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
void elementosingresar_pos()
{
    int v, x;
    cout << "Ingrese Valor a ingresar: ";
    cin >> v;
    cout << "Ingrese el valor a desplazar: ";
    cin >> x;
    agregar_pos(v, x);
}
void pos_elm()
{
    int v;
    cout << "Ingrese el valor a eliminar: ";
    cin >> v;
    eliminar_pos(v);
}
int main()
{/*
    int opc;
    bool valid = false;
    cout << "***************MEN" << char(233) << " LISTA ENLAZADA***************" << endl;
    cout << "1: Agregar elementos al inicio\n";
    cout << "2: Agregar elementos al final\n";
    cout << "3: Agregar elementos en un posici" << char(162) << "n de la lista\n";
    cout << "4: Eliminar el primer elemento de la lista\n";
    cout << "5: Eliminar el " << char(163) << "ltimo elemento de la lista\n";
    cout << "6: Eliminar un n" << char(163) << "mero espec" << char(161) << "fico de la lista\n";
    cout << "7: Ordenar ascendentemente la lista\n";
    cout << "8: Ordenar descendentemente la lista\n";
    cout << "9: Mostrar la lista\n";
    cout << "0: SALIR\n";
    do
    {
        cout << "Ingrese una opcion valida: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            elementosingresar_I();
            break;
        case 2:
            elementosingresar_F();
            break;
        case 3:
            elementosingresar_pos();
            break;
        case 4:
            eliminar_inicio();
            break;
        case 5:
            eliminar_final();
            break;
        case 6:
            pos_elm();
            break;
        case 7:
            ordenar_ascendente();
            break;
        case 8:
            ordenar_descendente();
            break;
        case 9:
            presentar();
            break;
        case 0:
            valid = true;
            break;
        default:
            cout << "Opcion no valida.\a\n";
            break;
        }
    } while (valid != true);
    system("pause");*/
    agregar_final(1);
    agregar_final(2);
    agregar_final(3);
    agregar_final(4);
    presentar();
    elementosingresar_pos();
    presentar();
    return 0;
}