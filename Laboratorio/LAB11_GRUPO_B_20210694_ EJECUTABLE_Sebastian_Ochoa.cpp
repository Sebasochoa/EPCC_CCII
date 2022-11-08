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

template <class T>
class Nodo
{
public:
    T m_Dato;
    Nodo<T> *m_pSig;

    Nodo(T d)
    {
        m_Dato = d;
        m_pSig = 0;
    }
};

template <class T>
class Pila
{
private:
    Nodo<T> *m_pTope;
    char m_Identifier;

public:
    Pila(char d)
    {
        m_pTope = nullptr;
        m_Identifier = d;
    }

    void Push(T d)
    {
        if (IsEmpty())
        {
            m_pTope = new Nodo<T>(d);
        }
        else
        {
            Nodo<T> *p_New = new Nodo<T>(d);
            p_New->m_pSig = m_pTope;
            m_pTope = p_New;
        }
    }

    T Pop()
    {
        Nodo<T> *p_Tmp = m_pTope;
        m_pTope = m_pTope->m_pSig;
        return p_Tmp->m_Dato;
        delete p_Tmp;
    }

    T Top()
    {
        if (IsEmpty())
        {
            return 0;
        }
        return m_pTope->m_Dato;
    }

    char Get_Identifier()
    {
        return m_Identifier;
    }

    bool IsEmpty()
    {
        return m_pTope == 0;
    }

    void Print()
    {
        Nodo<T> *p_Tmp = m_pTope;
        while (p_Tmp)
        {
            if (p_Tmp->m_pSig == NULL)
            {
                std::cout << p_Tmp->m_Dato << std::endl;
            }
            else
            {
                std::cout << p_Tmp->m_Dato << " --> ";
            }
            p_Tmp = p_Tmp->m_pSig;
        }
    }
};

template <typename T>
void hanoi(int n, Pila<T> &X, Pila<T> &Y, Pila<T> &Z)
{
    if (n == 1)
    {
        Z.Push(X.Pop());
        std::cout << "Disco " << n << " movido de la Torre A a la Torre C" << std::endl;
    }
    else
    {
        hanoi(n - 1, X, Z, Y);
        Z.Push(X.Pop());
        std::cout << "Disco " << n << " movido de la Torre " << X.Get_Identifier() << " a la Torre " << Z.Get_Identifier() << std::endl;
        hanoi(n - 1, Y, X, Z);
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
    Pila<int> A('A');
    Pila<int> B('B');
    Pila<int> C('C');

    std::cout << "******\tTORRE DE HANOI\t******\n";
    std::cout << "Ingrese la cantidad de discos con los que quiere jugar: ";
    std::cin >> n;

    std::cout << "Inicializando la Torre A con disco(s) del 1 al " << n << std::endl;
    for (int i = n; i > 0; i--)
    {
        A.Push(i);
    }
    std::cout << "Torre A llena correctamente\n\n";

    std::cout << "Los elementos de la Torre A:";
    A.Print();
    std::cout << "\n\t";
    system("pause");

    std::cout << "Resolucion de Torres de Hanoi:\n";
    hanoi(n, A, B, C);
    mov = hanoi_mov(n);
    std::cout << "Se resolvio con " << mov << " movimientos\n";
    std::cout << std::endl;
    C.Print();
    return 0;
}
