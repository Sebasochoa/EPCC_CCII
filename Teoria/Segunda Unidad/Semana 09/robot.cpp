
#include <iostream>
#include <random>
#include <chrono>
#include <ctime>
#include <sstream>
using namespace std;
string letrand()
{
    string s;
    ostringstream o;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine numrand(seed);
    uniform_int_distribution<int> num(65, 90);
    o <<char(num(numrand));
    o <<char(num(numrand));
    s = o.str();
    return s;
}
int random()
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine numrand(seed);
    uniform_int_distribution<int> num(100, 999);
    return num(numrand);
}

class robot
{
private:
    string nom;
    int serie;

public:
    robot(string, int);
    ~robot();
    void mostrar();
    void reinicio();
};
robot::robot(string nom, int serie)
{
    
    this->nom = letrand();
    this->serie = random();
}
robot::~robot()
{
}
void robot::mostrar()
{
    cout << nom;
    cout << serie << endl;
}
void robot::reinicio(){
    nom=letrand();
    serie=random();
}

int main()
{
    robot r1("s", 111);
    r1.mostrar();
    r1.reinicio();
    r1.mostrar();
    robot r2("d", 3);
    r2.mostrar();
    r2.reinicio();
    r2.mostrar();
}
