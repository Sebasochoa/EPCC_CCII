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
}

/*
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
*/