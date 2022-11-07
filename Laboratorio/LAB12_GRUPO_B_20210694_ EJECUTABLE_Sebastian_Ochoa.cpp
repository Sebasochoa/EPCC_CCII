/* #include <iostream>

template <class T>
class Nodo
{
public:
    T m_Dato;
    Nodo<T> *m_pSig;

    Nodo(T d)
    {
        m_Dato = d;
        m_pSig = NULL;
    }
};

template <class T>
class Cola
{
private:
    Nodo<T> *m_pHead;
    Nodo<T> *m_pLast;

public:
    Cola()
    {
        m_pHead = m_pLast = 0;
    }

    void Push(T d)
    {
        Nodo<T> *p_New = new Nodo<T>(d);
        if (!m_pHead)
        {
            m_pHead = p_New;
        }
        else
        {
            m_pLast->m_pSig = p_New;
        }
        m_pLast = p_New;
    }

    void Pop()
    {
        if (m_pHead)
        {
            Nodo<T> *p_Aux;
            p_Aux = m_pHead;
            m_pHead = m_pHead->m_pSig;
            delete p_Aux;
        }
    }

    void Search(T d)
    {
        if (m_pHead)
        {
            Nodo<T> *p_Aux;
            T val = NULL;
            for (p_Aux = m_pHead; p_Aux != NULL; p_Aux = p_Aux->m_pSig)
            {
                if (p_Aux->m_Dato == d)
                {
                    val = p_Aux->m_Dato;
                }
            }
            if (val != NULL)
            {
                std::cout << "Elemento (" << val << ") encontrado\n";
            }
            else
            {
                std::cout << "Elemento NO encontrado\n";
            }
        }
    }

    void Print()
    {
        Nodo<T> *p_Tmp;
        std::cout << "La lista es:\n";
        for (p_Tmp = m_pHead; p_Tmp != NULL; p_Tmp = p_Tmp->m_pSig)
        {
            std::cout << "Dato:" << p_Tmp->m_Dato << "\t";
        }
        std::cout << std::endl;
    }

    void Push_F()
    {
        int n;
        std::cout << "Cuantos elementos quiere ingresar: ";
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            T v;
            std::cout << "Ingrese Valor: ";
            std::cin >> v;
            Push(v);
        }
        if (n == 1)
        {
            std::cout << "Elemento agregado\n";
        }
        else
        {
            std::cout << "Elementos agregados\n";
        }
    }

    void Pop_F()
    {
        int n;
        std::cout << "Cuantos elementos quiere eliminar: ";
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            Pop();
        }
        if (n == 1)
        {
            std::cout << "Elemento eliminado\n";
        }
        else
        {
            std::cout << "Elementos eliminados\n";
        }
    }

    void Search_F()
    {
        T v;
        std::cout << "Ingrese el valor a buscar: ";
        std::cin >> v;
        Search(v);
    }
};

void menu()
{
    std::cout << "***************MEN" << char(233) << " LISTA ENLAZADA***************" << std::endl;
    std::cout << "1: Insertar elementos a la Cola\n";
    std::cout << "2: Eliminar elementos de la Cola\n";
    std::cout << "3: Busqueda de un elemento en la Cola\n";
    std::cout << "4: Mostrar la Cola\n";
    std::cout << "5: SALIR\n";
}

int main()
{
    int opc;
    bool valid = false;
    Cola<int> A;
    do
    {
        menu();
        std::cout << "Ingrese una opcion valida: ";
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            A.Push_F();
            break;
        case 2:
            A.Pop_F();
            break;
        case 3:
            A.Search_F();
            break;
        case 4:
            A.Print();
            break;
        case 5:
            valid = true;
            break;
        default:
            std::cout << "Opcion no valida.\n";
            break;
        }
    } while (valid != true);
    return 0;
} */

#include <iostream>
#include <time.h>
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
        m_pSig = NULL;
    }
};

template <class T>
class Cola
{
private:
    Nodo<T> *m_pHead;
    Nodo<T> *m_pLast;

public:
    Cola()
    {
        m_pHead = m_pLast = 0;
    }

    void Push(T d)
    {
        Nodo<T> *p_New = new Nodo<T>(d);
        if (!m_pHead)
        {
            m_pHead = p_New;
        }
        else
        {
            m_pLast->m_pSig = p_New;
        }
        m_pLast = p_New;
    }

    T Pop()
    {
        if (m_pHead)
        {
            Nodo<T> *p_Aux;
            p_Aux = m_pHead;
            m_pHead = m_pHead->m_pSig;
            return p_Aux->m_Dato;
            delete p_Aux;
        }
    }

    void Search(T d)
    {
        if (m_pHead)
        {
            Nodo<T> *p_Aux;
            T val = NULL;
            for (p_Aux = m_pHead; p_Aux != NULL; p_Aux = p_Aux->m_pSig)
            {
                if (p_Aux->m_Dato == d)
                {
                    val = p_Aux->m_Dato;
                }
            }
            if (val != NULL)
            {
                std::cout << "Elemento (" << val << ") encontrado\n";
            }
            else
            {
                std::cout << "Elemento NO encontrado\n";
            }
        }
    }

    T Front()
    {
        return m_pHead->m_Dato;
    }

    void Print()
    {
        Nodo<T> *p_Tmp;
        std::cout << "La lista es:\n";
        for (p_Tmp = m_pHead; p_Tmp != NULL; p_Tmp = p_Tmp->m_pSig)
        {
            std::cout << "Dato:" << p_Tmp->m_Dato << "\t";
        }
        std::cout << std::endl;
    }

    void Push_F()
    {
        int n;
        std::cout << "Cuantos elementos quiere ingresar: ";
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            T v;
            std::cout << "Ingrese Valor: ";
            std::cin >> v;
            Push(v);
        }
        if (n == 1)
        {
            std::cout << "Elemento agregado\n";
        }
        else
        {
            std::cout << "Elementos agregados\n";
        }
    }

    void Pop_F()
    {
        int n;
        std::cout << "Cuantos elementos quiere eliminar: ";
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            Pop();
        }
        if (n == 1)
        {
            std::cout << "Elemento eliminado\n";
        }
        else
        {
            std::cout << "Elementos eliminados\n";
        }
    }

    void Search_F()
    {
        T v;
        std::cout << "Ingrese el valor a buscar: ";
        std::cin >> v;
        Search(v);
    }
};

template <typename T>
void Valores(Cola<T> &A, Cola<T> &B)
{
    srand(time(NULL));
    int len1 = 2 + rand() % (5 - 2);
    int len2 = 2 + rand() % (5 - 2);
    for (int i = 0; i < len1; i++)
    {
        T val1 = 10 + rand() % (30 - 10);
        A.Push(val1);
    }
    for (int i = 0; i < len2; i++)
    {
        T val2 = 10 + rand() % (30 - 10);
        B.Push(val2);
    }
}

template <typename T>
void Iteraciones(int n, Cola<T> &A, Cola<T> &B)
{
    for (int i = 0; i < n; i++)
    {
        A.Push(A.Pop());
        B.Push(B.Pop());
    }
    int valorA = A.Front();
    int valorB = B.Front();
    if (valorA == valorB)
    {
        std::cout << "Las edades de ambas colas son iguales\n";
    }
    else if (valorA > valorB)
    {
        std::cout << "Despues de " << n << " iteraciones la edad de la cola A es mayor con " << valorA << std::endl;
    }
    else if (valorB > valorA)
    {
        std::cout << "Despues de " << n << " iteraciones la edad de la cola B es mayor con " << valorB << std::endl;
    }
}
int main()
{
    int n;
    Cola<int> A;
    Cola<int> B;
    std::cout << "Inicializando Valores de ambas colas\n";
    Valores(A, B);
    std::cout << "Los valores son:\n";
    A.Print();
    B.Print();
    std::cout << "Ingrese el numero de iteraciones que desea realizar: ";
    std::cin >> n;
    Iteraciones(n, A, B);
    return 0;
}
