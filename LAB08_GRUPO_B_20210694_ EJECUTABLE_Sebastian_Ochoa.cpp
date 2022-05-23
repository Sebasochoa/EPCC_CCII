/* Sebastian Ochoa Ortiz CUI:20210694*/
/*
//Ejercicio 1
//main.cpp
//#include "forma.h"
//#include "rectangulo.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
rectangulo r1("rojo","rectangulo",5,4,10,7);
r1.imprimir();
cout<<r1.area()<<endl;
cout<<r1.perimetro()<<endl;
r1.tamanio(0.8);
return 0;
}
//forma.h
#ifndef FORMA_H
#define FORMA_H
#include<iostream>
using namespace std;
class forma
{
public:
forma(string,string,double,double);
virtual ~forma();
void imprimir();
string get_color();
void set_color(string);
void get_coorde();
void moverforma(double,double);
private:
string color;
string nombre;
double x;
double y;

};
#endif // FORMA_H
//forma.cpp
#include<iostream>
using namespace std;
forma::forma(string color, string nombre, double x, double y)
{
this->color=color;
this->nombre=nombre;
this->x=x;
this->y=y;

}
forma::~forma()
{
}
void forma::imprimir()
{
cout<<"La forma es un "<<nombre<<" de color "<<color<<"y su centro es ("<<x<<", "<<y<<")";
}
string forma::get_color(){
return color;
}
void forma::set_color(string col){
color=col;
}
void forma::get_coorde()
{
cout<<"("<<x<<", "<<y<<")";
}
void forma::moverforma(double x1,double y1)
{
x=x1;
y=y1;
}
//rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H
//#include "forma.h"
#include<iostream>
using namespace std;
class rectangulo : public forma
{
public:
rectangulo(string,string,double,double,float,float);
virtual ~rectangulo();
void imprimir();
float area();
float perimetro();
void tamanio(float);
private:
string color;
string nombre;
double x;
double y;
float lado_ma;

float lado_me;

};
#endif // RECTANGULO_H
//rectangulo.cpp
using namespace std;
rectangulo::rectangulo(string color, string nombre, double x,
double y,float lado_ma,float lado_me):forma(color,nombre,x,y)
{
this->lado_ma=lado_ma;
this->lado_me=lado_me;
}
rectangulo::~rectangulo()
{
}
void rectangulo::imprimir()
{
forma::imprimir();
cout<<" y el lado mayor es "<<lado_ma<<" el menor"<<lado_me<<endl;
}
float rectangulo::area()
{
float area;
area=lado_ma*lado_me;
return area;
}
float rectangulo::perimetro()
{
float perimetro;
perimetro=(2*lado_ma)+(lado_me*2);
return perimetro;
}
void rectangulo::tamanio(float scale)
{
lado_ma=lado_ma*scale;
lado_me=lado_me*scale;
cout<<"Lado mayor: "<<lado_ma<<"\nLado Menor:"<<lado_me<<endl;
}
*/
/*
//Ejercicio 2
//main.cpp
//#include "forma.h"
//#include "elipse.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
elipse e1("azul","elipse",6,5,10,8);
e1.imprimir();
e1.area();
cout<<e1.perimetro()<<endl;
e1.tamanio(0.8);
return 0;
}
//elipse.h
#ifndef ELIPSE_H
#define ELIPSE_H
//#include "forma.h"
#include<iostream>
using namespace std;
class elipse : public forma
{
public:
elipse(string,string,double,double,float,float);
virtual ~elipse();
void imprimir();
void area();
float perimetro();
void tamanio(float);
private:
string color;
string nombre;
double x;
double y;
float radio_ma;
float radio_me;

};
#endif // ELIPSE_H
//elipse.cpp
using namespace std;
elipse::elipse(string color,string nombre,double x,double
y,float radio_ma,float radio_me):forma(color,nombre,x,y)
{
this->radio_ma=radio_ma;
this->radio_me=radio_me;
}
elipse::~elipse()
{
}
void elipse::imprimir()
{
forma::imprimir();
cout<<" y el radio mayor es "<<radio_ma<<" el menor"<<radio_me<<endl;
}
void elipse::area()
{
float area;
double pi1 = M_PI;
area=M_PI*(radio_ma*radio_me);
cout << setprecision(2)<<fixed<<area<<endl;
}
float elipse::perimetro()
{
float perimetro;
double pi1 = M_PI;
perimetro=(sqrt(((radio_ma*radio_ma)+(radio_me*radio_me))
/2))*2*M_PI;
return perimetro;
}
void elipse::tamanio(float scale)
{
radio_ma=radio_ma*scale;
radio_me=radio_me*scale;
cout<<"Lado mayor: "<<radio_ma<<"\nLado Menor:"<<radio_me<<endl;
}
*/
/*
//Ejercicio 3
//main.cpp
#include "cuadrado.h"
#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cuadrado c1("verde","cuadrado",6,7,8);
c1.imprimir();
cout<<c1.area()<<endl;
cout<<c1.perimetro()<<endl;
c1.tamanio(0.8);
return 0;
}
//cuadrado.h
#ifndef CUADRADO_H
#define CUADRADO_H
#include "rectangulo.h"
#include<iostream>
using namespace std;
class cuadrado:public rectangulo
{
public:
cuadrado(string,string,double,double,float);
virtual ~cuadrado();
void imprimir();
float area();
float perimetro();
void tamanio(float);
private:
float largo;
float lado_ma;
float lado_me;

};
#endif // CUADRADO_H
//cuadrado.cpp
#include "cuadrado.h"
#include<iostream>
using namespace std;
cuadrado::cuadrado(string color, string nombre, double x,
double y,float
largo):rectangulo(color,nombre,x,y,lado_ma,lado_ma)

{
this->largo=largo;
}
cuadrado::~cuadrado()
{
//dtor
}
void cuadrado::imprimir()
{
forma::imprimir();
cout<<" y su lado es "<<largo<<endl;
}
float cuadrado::area()
{
float area;
area=largo*largo;
return area;
}
float cuadrado::perimetro()
{
float perimetro;
perimetro=4*largo;
return perimetro;
}
void cuadrado::tamanio(float scale)
{
largo=largo*scale;
cout<<"Lado: "<<largo<<endl;
}
*/
/*
//Ejercicio 4
//main.cpp
#include "forma.h"
#include "elipse.h"
#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
circulo a1("amarillo","circulo",2,6,8);
a1.imprimir();
a1.area();
a1.perimetro();
a1.tamanio(0.8);
return 0;
}
//circulo.h
#ifndef CIRCULO_H
#define CIRCULO_H
#include "elipse.h"
#include<iostream>
using namespace std;
class circulo:public elipse
{
public:
circulo(string,string,double,double,float);
virtual ~circulo();
void imprimir();
void area();
void perimetro();
void tamanio(float);
private:
float radio;
float radio_ma;

};
#endif // CIRCULO_H
//circulo.cpp
#include "circulo.h"
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

circulo::circulo(string color, string nombre, double x,
double y,float
radio):elipse(color,nombre,x,y,radio_ma,radio_ma)
{
this->radio=radio;
}
circulo::~circulo()
{
//dtor
}
void circulo::imprimir()
{
forma::imprimir();
cout<<" y el radio mayor es "<<radio<<endl;
}
void circulo::area()
{
float area;
area=M_PI*radio*radio;
cout << setprecision(2)<<fixed<<area<<endl;
}
void circulo::perimetro()
{
float perimetro;
perimetro=M_PI*(radio*2);
cout << setprecision(2)<<fixed<<perimetro<<endl;
}
void circulo::tamanio(float scale)
{
radio=radio*scale;
cout<<"Radio convertido: "<<radio<<endl;
}
*/
/*
//Ejercicio 8
#include "forma.h"
#include "rectangulo.h"
#include "elipse.h"
#include "cuadrado.h"
#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
rectangulo r1("rojo","rectangulo",5,4,10,7);
elipse e1("azul","elipse",6,5,10,8);
cuadrado c1("verde","cuadrado",6,7,8);
circulo a1("amarillo","circulo",2,6,8);
int rectangulo=r1.area();
int elipse=e1.area();
int cuadrado=c1.area();
int circulo=a1.area();
int opc;
if (rectangulo>elipse && rectangulo>cuadrado &&
rectangulo>circulo){
opc=1;
}
if (elipse>rectangulo && elipse>cuadrado &&
elipse>circulo){
opc=2;
}
if (cuadrado>rectangulo && cuadrado>elipse &&
cuadrado>circulo){
opc=3;
}
if (circulo>rectangulo && circulo>elipse &&
circulo>cuadrado){
opc=4;
}
switch(opc)
{
case 1:
cout<<"El area mayor es el rect"<<char(160)<<"ngulo y

su informaci"<<char(162)<<"n es:\n";

r1.imprimir();

break;
case 2:
cout<<"El area mayor es el elipse y su

informaci"<<char(162)<<"n es:\n";

e1.imprimir();
break;
case 3:
cout<<"El area mayor es el cuadrado y su

informaci"<<char(162)<<"n es:\n";

c1.imprimir();
break;
case 4:
cout<<"El area mayor es el c"<<char(161)<<"rculo y su

informaci"<<char(162)<<"n es:\n";

a1.imprimir();
break;
}
return 0;
}
*/