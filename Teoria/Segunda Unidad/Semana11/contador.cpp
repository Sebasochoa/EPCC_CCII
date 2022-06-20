#include<iostream>
using namespace std;
class contador
{
private:
    int cont=0;
public:
    contador(int);
    ~contador();
    int valor();
};

contador::contador(int cont)
{
    this->cont=cont;
}

contador::~contador()
{
}

int contador::valor()
{
    return cont;
}
