#include<iostream>
#include<time.h>
using namespace std;
class ficha1
{
private:
    char letra;
    int valor;
public:
    ficha1(char,int);
    ~ficha1();
    void imprimir();
};
ficha1::ficha1(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha1::~ficha1()
{
}
void ficha1::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}
class ficha2
{
private:
    char letra;
    int valor;
public:
    ficha2(char,int);
    ~ficha2();
    void imprimir();
};
ficha2::ficha2(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha2::~ficha2()
{
}
void ficha2::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class ficha3
{
private:
    char letra;
    int valor;
public:
    ficha3(char,int);
    ~ficha3();
    void imprimir();
};
ficha3::ficha3(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha3::~ficha3()
{
}
void ficha3::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class ficha4
{
private:
    char letra;
    int valor;
public:
    ficha4(char,int);
    ~ficha4();
    void imprimir();
};
ficha4::ficha4(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha4::~ficha4()
{
}
void ficha4::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class ficha5
{
private:
    char letra;
    int valor;
public:
    ficha5(char,int);
    ~ficha5();
    void imprimir();
};
ficha5::ficha5(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha5::~ficha5()
{
}
void ficha5::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class ficha6
{
private:
    char letra;
    int valor;
public:
    ficha6(char,int);
    ~ficha6();
    void imprimir();
};
ficha6::ficha6(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha6::~ficha6()
{
}
void ficha6::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class ficha7
{
private:
    char letra;
    int valor;
public:
    ficha7(char,int);
    ~ficha7();
    void imprimir();
};
ficha7::ficha7(char letra, int valor)
{
    this->letra=letra;
    this->valor=valor;
}
ficha7::~ficha7()
{
}
void ficha7::imprimir(){
    cout<<"["<<letra<<"] ";
    cout<<valor<<"\t";
}

class scrabble:public ficha1, public ficha2,public ficha3, public ficha4,public ficha5, public ficha6,public ficha7
{
private:
    string nom;
public:
    scrabble(string,char,int,char,int,char,int,char,int,char,int,char,int,char,int);
    ~scrabble();
    void imprimir();
};

scrabble::scrabble(string nom,char letra1,int valor1,char letra2,int valor2,char letra3,int valor3,char letra4,int valor4,char letra5,int valor5,char letra6,int valor6,char letra7,int valor7):ficha1(letra1,valor1),ficha2(letra2,valor2),ficha3(letra3,valor3),ficha4(letra4,valor4),ficha5(letra5,valor5),ficha6(letra6,valor6),ficha7(letra7,valor7)
{
    this->nom=nom;
}

scrabble::~scrabble()
{
}
void scrabble::imprimir(){
    cout<<nom<<"  ";
    ficha1::imprimir();
    ficha2::imprimir();
    ficha3::imprimir();
    ficha4::imprimir();
    ficha5::imprimir();
    ficha6::imprimir();
    ficha7::imprimir();
    cout<<endl;
}
int main()
{
    srand(time(NULL));
    int let,num1,num2,num3,num4,num5,num6,num7;
    scrabble s1("Sebas",let = 65 + rand() % (26),num1= 1 + rand() % (9),let = 65 + rand() % (26),num2 = 1 + rand() % (9),let = 65 + rand() % (26),num3 = 1 + rand() % (9),let = 65 + rand() % (26),num4 = 1 + rand() % (9),let = 65 + rand() % (26),num5 = 1 + rand() % (9),let = 65 + rand() % (26),num6 = 1 + rand() % (9),let = 65 + rand() % (26),num7 = 1 + rand() % (9));
    s1.imprimir();
    scrabble s2("Mary",let = 65 + rand() % (26),num1= 1 + rand() % (9),let = 65 + rand() % (26),num2 = 1 + rand() % (9),let = 65 + rand() % (26),num3 = 1 + rand() % (9),let = 65 + rand() % (26),num4 = 1 + rand() % (9),let = 65 + rand() % (26),num5 = 1 + rand() % (9),let = 65 + rand() % (26),num6 = 1 + rand() % (9),let = 65 + rand() % (26),num7 = 1 + rand() % (9));
    s2.imprimir();

}

