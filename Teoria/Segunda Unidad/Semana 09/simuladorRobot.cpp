#include <iostream>
using namespace std;
class robot
{
private:
    double x, y;
    char d;
    

public:
    robot(char, double, double);
    ~robot();
    void instrucciones(string);
    void girar_derecha();
    void girar_izquierda();
    void avanzar();
};
robot::robot(char d, double x, double y)
{
    this->x = x;
    this->y = y;
    this->d = d;
}
robot::~robot()
{
}
void robot::girar_derecha(){
    if (d=='N')
    {
        d='E';
    }
    else if (d=='E')
    {
        d='S';
    }
    else if (d=='O')
    {
        d='N';
    }
    else if (d=='S')
    {
        d='O';
    }
}
void robot::girar_izquierda(){
    if (d=='N')
    {
        d='O';
    }
    else if (d=='E')
    {
        d='N';
    }
    else if (d=='O')
    {
        d='S';
    }
    else if (d=='S')
    {
        d='E';
    }
}
void robot::avanzar(){
    if (d=='N')
    {
        y=y+1;
    }
    else if (d=='E')
    {
        x=x+1;
    }
    else if (d=='S')
    {
        y=y-1;
    }
    else if (d=='O')
    {
        x=x-1;
    }
}
void robot::instrucciones(string ins){
    int len=ins.length();
    cout<<"El robot se encuentra en ("<<x<<", "<<y<<")\nCon direcci"<<char(162)<<"n: "<<d<<endl;
    for (int i = 0; i < len; i++)
    {
        if (ins[i]=='D')
        {
            girar_derecha();
        }
        if (ins[i]=='I')
        {
            girar_izquierda();
        }
        if (ins[i]=='A')
        {
            avanzar();
        }
    }
    cout<<"El robot se encuentra ahora en ("<<x<<", "<<y<<")\nCon direcci"<<char(162)<<"n: "<<d;
}

int main()
{
    char orient;
    int posx,posy;
    string instrucciones;
    cout<<"Ingrese la orientacion del robot (N,S,E,O): "; cin>>orient;
    cout<<"Ingrese la posicion del robot en eje X: "; cin>>posx;
    cout<<"Ingrese la posicion del robot en eje Y: "; cin>>posy;
    robot r1(orient, posx, posy);
    cout<<"Ingrese las instrucciones del robot: "; cin>>instrucciones;
    r1.instrucciones(instrucciones);
    return 0;
}