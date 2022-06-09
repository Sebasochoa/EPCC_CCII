#include <iostream>
using namespace std;
class nodo
{
private:
public:
    int id;
    int cant = 0;
    nodo *sig;
    nodo *ant;
};
nodo *I, *F, *T;
void agregar_final(int x)
{
    T = new nodo();
    T->id = x;
    T->sig = NULL;
    T->ant = NULL;
    // T->cant=T->cant+1;
    if (I == NULL)
    {
        I = T;
    }
    else
    {
        F->sig = T;
        T->ant = F;
    }
    F = T;
}
void agregar_inicio(int x)
{
    T = new nodo();
    T->id = x;
    T->sig = NULL;
    T->ant = NULL;
    // T->cant=T->cant+1;
    if (I == NULL)
    {
        I = T;
    }
    else
    {
        I->ant = T;
        T->sig = I;
    }
    I = T;
}
void agregar_pos(int x, int pos)
{
    T = new nodo();
    T->id = x;
    T->sig = NULL;
    T->ant = NULL;
    nodo *anterior;
    nodo *aux;
    for (aux = I; aux != NULL; aux = aux->sig)
    {
        if (aux->id == pos)
        {
            anterior = aux->ant;
        }
    }
    if (I == NULL)
    {
        I = T;
    }
    else
    {
        T->sig = anterior->sig;
        anterior->sig = T;
    }
}
void presentar_I()
{
    cout << "La lista es:\n";
    for (T = I; T != NULL; T = T->sig)
    {
        cout << "ID:" << T->id << "\t";
    }
    cout << endl;
}
void eliminar_final()
{
    if (I != NULL)
    {
        nodo *aux_borrar;
        nodo *anterior = NULL;
        aux_borrar = I;
        while ((aux_borrar != NULL) && (aux_borrar->sig != NULL))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->sig;
        }
        anterior->sig = aux_borrar->sig;
        delete aux_borrar;
    }
}
void eliminar_inicio()
{
    if (I != NULL)
    {
        nodo *aux_borrar;
        nodo *anterior = NULL;
        aux_borrar = I;
        I = I->sig;
        delete aux_borrar;
    }
}
void eliminar_pos(int pos)
{
    if (I != NULL)
    {
        
        nodo *aux_borrar;
        nodo *anterior=NULL;
        aux_borrar=I;
        while ((aux_borrar!=NULL)&&(aux_borrar->id!=pos))
        {
            anterior=aux_borrar;
            aux_borrar=aux_borrar->sig;
        }
        anterior->sig=aux_borrar->sig;
        delete aux_borrar;
        
    }
}
void ordenar_ascendente(){
    nodo *p=I;
    while(p!=NULL){
        nodo *T=p->sig;
        while (T!=NULL)
        {
            if (p->id>T->id)
            {
                int aux=T->id;
                T->id=p->id;
                p->id=aux;

            }
            T=T->sig;
        }
        p=p->sig;
    }
}
void ordenar_descendente(){
    nodo *p=I;
    while(p!=NULL){
        nodo *T=p->sig;
        while (T!=NULL)
        {
            if (p->id<T->id)
            {
                int aux=T->id;
                T->id=p->id;
                p->id=aux;

            }
            T=T->sig;
        }
        p=p->sig;
    }
}
int main()
{
    agregar_final(2);
    agregar_final(1);
    agregar_inicio(5);
    agregar_final(3);
    agregar_inicio(9);
    agregar_pos(7, 5);
    presentar_I();
    //eliminar_pos(2);
    ordenar_descendente();
    presentar_I();
    return 0;
}