// ABCDEFGHIJKKLMNOPQRSTUVWXYZ
// 65-90
#include <iostream>
#include <sstream>
using namespace std;
void mostrar(string s){
    cout<<s;
}
void crear(char c,string s)
{
    int len = int(c) - 64;
    int lencon = (len * 2) - 1;
    int espi = 0;
    int alt = 1;
    int espd = lencon / 2;
    int espa = lencon / 2;
    int resta = len - 1;
    ostringstream o;
    while (alt <= lencon / 2 + 1)
    {
        for (int i = 1; i <= espd; i++)
        {
            o << "*";
        }
        o << char(c - resta);
        for (int i = 1; i < espi; i++)
        {
            o << "*";
        }
        if (alt > 1)
        {
            o << char(c - resta);
        }
        for (int i = espa; i > 0; i--)
        {
            o << "*";
        }
        o << "" << endl;
        alt++;
        espd--;
        espa--;
        espi += 2;
        resta--;
    }
    espi = lencon - 3;
    espd = 1;
    espa=1;
    alt = 0;
    while (alt < lencon / 2)
    {
        for (int i = 1; i <= espd; i++)
        {
            o << "*";
        }
        o << char(c + resta);
        for (int i = 1; i < espi; i++)
        {
            o << "*";
        }
        if (alt < lencon / 2 - 1)
        {
            o << char(c + resta);
        }
        for (int i = espa; i > 0; i--)
        {
            o << "*";
        }
        o << "" << endl;
        alt++;
        espd++;
        espa++;
        espi -= 2;
        resta--;
    }
    s = o.str();
    mostrar(s);
}

int main()
{
    string s;
    crear('E',s);
}