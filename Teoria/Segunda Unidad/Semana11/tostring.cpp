#include <iostream>
#include <sstream>
using namespace std;
template <typename T>
string tostring(T in)
{
    int in;
    string out;
    stringstream convert;
    convert << in;
    convert >> out;
    return out;
}
int main()
{
    int in;
    cout << "Valor o contenedor a convertir a string: ";
    cin >> in;
    cout<<tostring(in);
    return 0;
}