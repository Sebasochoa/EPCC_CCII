//Sebastian Andre Ochoa Ortiz   CUI:20210694

//Ejercicio 1
#include <iostream>
using namespace std;
class rectangulo
{
private:
    float altura, base;
public:
    rectangulo(int, int);
    void area();
    void perimetro();
};
rectangulo::rectangulo(int base, int altura)
{
    this->base=base;
    this->altura=altura; 
} 
void rectangulo::area()
{
    int area;
    area=base*altura;
    cout<<"El area del rectangulo es "<<area<<endl;
}
void rectangulo::perimetro()
{
    int perimetro;
    perimetro=(base*2)+(altura*2);
    cout<<"El perimetro es "<<perimetro<<endl;
}
int main()
{
    int b,a;
    cout<<"Ingrese la base del rectangulo: "; cin>>b;
    cout<<"Ingrese la altura del rectangulo: "; cin>>a;
    rectangulo r1(b,a);
    r1.area();
    r1.perimetro();
    system("pause");
    return 0;
}
                                                                                
//Ejercicio 2
#include <iostream>

using namespace std;

class alumno
{
    public:
        alumno(int, string, float, float, float);
        ~alumno();
        void informe();
        void promedio();

    private:
        int nota1, nota2, nota3, CUI;
        string nombre;

};

alumno::alumno(int _CUI, string _nombre, float _nota1, float _nota2, float _nota3)
{
    CUI= _CUI;
    nombre= _nombre;
    nota1=_nota1;
    nota2=_nota2;
    nota3=_nota3;
}
void alumno::informe()
{
    cout<<"El alumno se llama "<<nombre<<" su CUI es "<<CUI<<" y sus notas fueron: \nPrimera nota: "<<nota1<<"\nSegunda Nota: "<<nota2<<"\nTercera Nota: "<<nota3<<endl;
}

void alumno::promedio()
{
    float promedio;
    promedio=(nota1+nota2+nota3)/3;
    if (promedio>=10.5){
        cout<<"El promedio de sus notas es "<<promedio<<" y el alumno aprobo."<<endl;
    }
    else
        cout<<"El promedio de sus notas es "<<promedio<<" y el alumno desaprobo."<<endl;
}

alumno::~alumno()
{

}

int main()
{

    string nom;
    float c,no1,no2,no3;
    cout <<"Ingrese su nombre completo:  "; getline(cin, nom);
    cout<<"Ingrese el CUI: "; cin>>c;
    cout<<"Ingrese la primera nota :"; cin>>no1;
    cout<<"Ingrese la segunda nota :"; cin>>no2;
    cout<<"Ingrese la tercera nota :"; cin>>no3;

    alumno a1(c,nom,no1,no2,no3);
    a1.informe();
    a1.promedio();
    
    return 0;
}
//ejercicio 3
#include <iostream>

using namespace std;

class edad_persona
{
    public:
    edad_persona(int,int,int,int,int,int);
    void informe();
        

    private:
    int dianac, mesnac, añonac, diaact, mesact, añoact;

};

edad_persona::edad_persona(int dianac,int mesnac,int añonac, int diaact,int mesact, int añoact)
{
    this ->dianac= dianac;
    this ->mesnac=mesnac;
    this ->añonac=añonac;
    this ->diaact=diaact;
    this ->mesact=mesact;
    this ->añoact=añoact;

}

void edad_persona::informe()
{
    int mes, dia;
    if(diaact<dianac)
    {
        diaact=diaact+31;
        mesact=mesact-1;
        dia=diaact-dianac;
    }
    else
        dia=diaact-dianac;
    
    if (mesact < mesnac)
    {
        mesact = mesact + 12;
        añoact = añoact-1;
        mes = mesact - mesnac;
    }
    else
        mes=mesact-mesnac;

    if(dia>1){
        cout<<"Su edad es: "<<añoact-añonac<<" a"<<char(164)<<"os "<<mes<<" meses y "<<dia<<" dias."<<endl;
    }
    else    
        cout<<"Su edad es: "<<añoact-añonac<<" a"<<char(164)<<"os "<<mes<<" meses y "<<dia<<" dia."<<endl;
    
}

int main()
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    
    int dn,mn,an,da,ma,aa;
    aa=(now->tm_year)+1900;
    da=(now->tm_mday);
    ma=(now->tm_mon)+1;
    cout<<"Ingrese su a"<<char(164)<<"o de nacimiento: "; cin>>an;
    cout<<"Ingrese su mes de nacimiento: "; cin>>mn;
    cout<<"Ingrese su dia de nacimiento: "; cin>>dn;
    
    edad_persona p1(dn,mn,an,da,ma,aa);
    p1.informe();
    return 0;
}
//ejercicio 4
#include <iostream>
#include <vector>



using namespace std;

class contenedor
{
private:
    vector<int> lista;
    int n, dato;
public:
    contenedor(int n);
    bool verficar_espacio();
    void agregar(int dato);
    bool verificar_vacio();
    void eliminar(int dato);
    void mostrar();

};

contenedor::contenedor(int n)
{
    
}
bool contenedor::verficar_espacio()
{
    int tamanio;
    tamanio=lista.size();
    if (tamanio<5)
    {
        return true;
    }
    return false;
    
}
void contenedor::agregar(int dato)
{
    this->dato=dato;
    if (contenedor::verficar_espacio()==true)
    {
        lista.push_back(dato);
        cout<<"Elemento agregado."<<endl;
    }
    else
    {
        cout<<"No se puede agregar elemento."<<endl;
    }
}
bool contenedor::verificar_vacio()
{
    lista.empty();
}
void contenedor::eliminar(int dato)
{
    if (contenedor::verificar_vacio() == false)
    {
        int pos;
        for (vector<int>::iterator it = lista.begin(); it != lista.end(); ++it)
        {
            if(*it==dato)
            {
                pos=*it;
            }
        }
        lista.erase(lista.begin()+pos-1);
    }
    else
        cout<<"El vector esta vacio no se puede eliminar nada."<<endl;
}
void contenedor::mostrar()
{
    for (vector<int>::iterator it = lista.begin(); it != lista.end(); ++it)
    {
    cout << ' ' << *it;
    }
    cout<<endl;
}

int main()
{
    int n,dato;
    contenedor c1(n);
    c1.eliminar(4);
    c1.agregar(1);
    c1.agregar(2);
    c1.agregar(3);
    c1.agregar(4);
    c1.agregar(5);
    c1.agregar(6);
    c1.mostrar();
    c1.eliminar(3);
    c1.mostrar();

    return 0;
}
//Ejercicio 5

#include <iostream>
#include <ctime>

using namespace std;

class matriz
{
    private:
    int n,fi,col,dato,M[][10];

    public:
    matriz(int n,int M[][10]);
    bool verifica(int n, int M[][10],int valor);
    void llenar(int n, int M[][10]);
    void busqueda(int n , int fi,int col, int M[][10],int dato);
    void mostrar(int M[][10]);
};

matriz::matriz(int n,int M[][10])
{
    this->n=n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            M[i][j]=0;
        }
    }
}

bool matriz::verifica(int n, int M[][10],int valor)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (valor==M[i][j])
            {
                return false;
            }
        }
    }
    return true;
    
}
void matriz::llenar(int n,int M[][10])
{
    srand(time(0));
    int valor;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            valor=1+rand()%9;
            while (matriz::verifica(n,M,valor) == false)
            {
                valor=1+rand()%9;
            }
            M[i][j]=valor;
        }
    }
}
void matriz::busqueda(int n,int fi, int col, int M[][10],int dato)
{
    this->fi=fi;
    this->col=col;
    this->dato=dato;
    bool ver=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dato==M[i][j])
            {
                fi=i;
                col=j;
                ver=true;
            }
        }
    }
    
    if (ver==true)
    {
        cout<<"El numero "<<dato<<" esta en la fila "<<fi+1<<" y en la columna "<<col+1<<"."<<endl;
    }
    else
        cout<<"Valor no encontrado."<<endl;
}

void matriz::mostrar(int M[][10])
{
    cout<<"*******Matriz*******"<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cout<<"  "<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
}


int main()
{
    int n=3,dato,fi,col, M[10][10];
    matriz m1(n,M);
    m1.llenar(n,M);
    cout<<"Ingrese el dato a buscar: "; cin>>dato;
    m1.busqueda(n,fi,col,M,dato);
    m1.mostrar(M);
    return 0;
}


