//Sebastian Andre Ochoa Ortiz    CUI:20210694
/*
//Ejercicio 1
#include<iostream>
using namespace std;
void change(int *x,int *y)
{
    int tempe(*x);
    *x=*y;
    *y=tempe;
}
int main()
{
    int num1=0,num2=0;
    cout<<"Ingrese el Primer n"<<char(163)<<"mero: "; cin>>num1;
    cout<<"Ingrese el Segundo n"<<char(163)<<"mero: "; cin>>num2;
    cout<<"-------Intercambiando valores-------\n";
    change(&num1,&num2);
    cout<<"Primer N"<<char(163)<<"mero: "<<num1<<endl;
    cout<<"Segundo N"<<char(163)<<"mero: "<<num2<<endl;
    system("pause");
}
*/
/*
//Ejercicio 2
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int* arreglo1=NULL;
        int* arreglo2=NULL;
        arreglo1=new int[2];
        arreglo2=new int[2];
        int producto=0;
        int n1=1+rand()%(100);
        int n2=1+rand()%(100);
        int n3=1+rand()%(100);
        int n4=1+rand()%(100);
        arreglo1[0]=n1;
        arreglo1[1]=n2;
        arreglo2[0]=n3;
        arreglo2[1]=n4;
        cout<<"----Rellenando con numeros aleatorios----\n";
        cout<<"Primer Vector: {"<<arreglo1[0]<<", "<<arreglo1[1]<<"}  y  ";
        cout<<"Segundo Vector: {"<<arreglo2[0]<<", "<<arreglo2[1]<<"}\n";
        producto=(arreglo1[0]*arreglo1[1])+(arreglo2[0]*arreglo2[1]);
        cout<<"El producto punto de ambos vectores es: "<<producto<<endl;
        delete []arreglo1;
        delete []arreglo2;
        arreglo1=NULL;
        arreglo2=NULL;
    }
    system("pause");
    return 0;
}
*/
/*
//Ejercicio 3
#include<iostream>
#include<ctime>
using namespace std;
struct box
{       
    box* ant;
    int num;
    box* des;
};
void mosrtrar_lista(box *i)
{
    box* x=i;
    cout<<x->num<<"-";
    while (x->des!=NULL)
    {
        x=x->des;
        cout<<x->num<<"-";
    }
    cout<<endl;
}
void ingresar(box *i)
{
    box* x=i;
    box* j=new box;
    j->num=rand()%10+1;
    j->ant=NULL;
    j->des=NULL;
    while(x->des!=NULL){
        x=x->des;
    }
    x->des=j;
    x->des->ant=x;
    int temp;
    while (j->ant!=NULL && j->ant->num > j->num)
    {
        temp=j->num;
        j->num=j->ant->num;
        j->ant->num=temp;
        j=j->ant;
    }
    j=NULL;
    delete j;   
}
box* eliminar(box *i,int a)
{
    box* x=i;
    box* temp=i;
    if (a==x->num)
    {
        cout<<"El primer elemento <"<<a<<"> ha sido eliminado.\n";
        temp=x->des;
        x->des->ant=NULL;
        x->des=NULL;
        delete x;
    }
    else{
        while (x->des!=NULL)
        {
            x=x->des;
            if (a==x->num && x->des!=NULL)
            {
                cout<<"El primer elemento <"<<a<<"> ha sido eliminado\n";
                x->ant->des=x->des;
                x->des->ant=x->ant;
                x->ant=NULL;
                x->des=NULL;
                delete x;
                break;
            }
            if (a==x->num && x->des==NULL)
            {
                cout<<"El primer elemento <"<<a<<"> ha sido eliminado\n";
                x->ant->des=NULL;
                x->ant=NULL;
                delete x;
                break;
            }
        }
    }
    return temp;
}
int main()
{
    srand(time(NULL));
    box* i=new box;
    i->ant=NULL;
    i->num=rand()% 10+1;
    i->des=NULL;
    for (int j = 0; j < 10; j++)
    {
        ingresar(i);
    }
    cout<<"Primera Lista\n";
    mosrtrar_lista(i);
    i=eliminar(i,5);
    cout<<"Segunda Lista\n";
    mosrtrar_lista(i);
    system("pause");
    return 0;
}
*/
/*
//Ejercicio 5
#include<iostream>
#include<string.h>
using namespace std;
char Name[6]="Dias";
char Apellido[9]="Buenos ";
char list1[5];
char list2[8];
char *ptr,*point;
void concatendor(char *ptr,char*point)
{
    ptr=&Apellido[0];
    point=&Name[0];
    for (int i = 0; i < 6; i++)
    {
        list1[i]=*(ptr+i);
    }
    for (int i = 0; i < 8; i++)
    {
        list2[i]=*(point+i);
    }
    cout<<strcat(list1,list2);
}
int main()
{
    cout<<"Texto Original\n";
    for (int i = 0; i < 6; i++)
    {
        cout<<Name[i];
    }
    cout<<" ";
    for (int i = 0; i < 8; i++)
    {
        cout<<Apellido[i];
    }
    cout<<"\nTexto Concatenado\n";
    concatendor(&Name[0],&Apellido[0]);
    cout<<"\n";
    system("pause");
    return 0;
}
*/
/*
//Ejercicio 6
#include<iostream>
using namespace std;
int sumar(int x,int y){
    return x+y;
}
int restar(int x,int y){
    return x-y;
}
int multiplicar(int x,int y){
    return x*y;
}
int division(int x,int y){
    return x/y;
}
int main(int argc,char *argv[])
{
    int opc;
    float x,y;
    int (*Funciones[4])(int,int)={sumar,restar,multiplicar,division};
    cout<<"Ingrese el Primer N"<<char(163)<<"mero: "; cin>>x;
    cout<<"Ingrese el Segundo N"<<char(163)<<"mero: "; cin>>y;
    cout<<"\nOptions"<<endl;
    cout<<"\n0:Suma";
    cout<<"\n1:Resta";
    cout<<"\n2:Multiplicaci"<<char(162)<<"n";
    cout<<"\n3:Divisi"<<char(162)<<"n"<<endl;
    cout<<"\nIngrese una opcion valida: "; cin>>opc;
    while (opc>=0 && opc<=3)
    {
        cout<<"El resultado de la operacion es: "<<(*Funciones[opc])(x,y)<<endl;
        cout<<"\nIngrese una opcion valida: "; cin>>opc;
    }
    system("pause");
    return 0;
}
*/

