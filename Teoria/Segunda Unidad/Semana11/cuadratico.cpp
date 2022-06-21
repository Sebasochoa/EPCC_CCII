#include <iostream>
#include <math.h>
using namespace std;
class cuadratico
{
private:
    int a=0,b=0,c=0;
public:
    cuadratico() {}
    cuadratico(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    cuadratico &operator=(const cuadratico &otro)
    {
        if (this == &otro)
        {
            return *this;
        }
        if (a != otro.a || b != otro.b || c != otro.c)
        {
            a = 0;
            b = 0;
            c = 0;
            a = otro.a;
            b = otro.b;
            c = otro.c;
        }
        return *this;
    }
    int llamada_funcion(int y){
        int x2,x,res;
        x2 = pow(a,2)*y;
        x = b*y;
        res = x2 + x + c;
        return res;

    }
    ~cuadratico(){

    }
};
int main()
{
    cuadratico x1(2,3,1);
    cout<<x1.llamada_funcion(2);

}