#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
class tiempo
{
private:
    int horas;
    int minutos;
    int segundos;

public:
    tiempo(int horas, int minutos, int segundos)
    {
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    tiempo operator+(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        int htotal = ht1 + ht2;
        int mtotal = mt1 + mt2;
        int stotal = st1 + st2;
        if (mtotal >= 60)
        {
            mtotal -= 60;
            htotal += 1;
        }
        if (stotal >= 60)
        {
            stotal -= 60;
            mtotal += 1;
        }
        return tiempo(htotal, mtotal, stotal);
    }
    tiempo operator-(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        int htotal = ht1 - ht2;
        int mtotal = mt1 - mt2;
        int stotal = st1 - st2;
        if (ht1 > ht2)
        {
            if (mtotal <= 0)
            {
                mtotal += 60;
                htotal -= 1;
            }
            if (stotal <= 0)
            {
                stotal += 60;
                mtotal -= 1;
            }
            return tiempo(htotal, mtotal, stotal);
        }
        else
            cout << "Resultado Negativo:\n";
        return tiempo(htotal, mtotal, stotal);
    }
    bool operator==(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 == ht2 && mt1 == mt2 && st1 == st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator!=(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 != ht2 || mt1 != mt2 || st1 != st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator<(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 < ht2 || mt1 < mt2 || st1 < st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator>(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 > ht2 || mt1 > mt2 || st1 > st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator<=(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 <= ht2 && mt1 <= mt2 && st1 <= st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator>=(tiempo t2)
    {
        int ht1 = horas, ht2 = t2.horas, mt1 = minutos, mt2 = t2.minutos, st1 = segundos, st2 = t2.segundos;
        if (ht1 >= ht2 && mt1 >= mt2 && st1 >= st2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &out, const tiempo &p)
    {
        out << "Hora: " << p.horas << ":" << p.minutos << ":" << p.segundos;
        return out;
    }
    void imprimir()
    {
        string am = "a.m.", pm = "p.m.";
        string hor, min, seg, res;
        ostringstream in;
        ostringstream o;
        if (minutos < 10 && segundos < 10)
        {
            in << ":" << setfill('0') << setw(2) << minutos << ":" << setfill('0') << setw(2) << segundos << " ";
            res = in.str();
        }
        else if (minutos < 10)
        {
            in << ":" <<setfill('0') << setw(2) << minutos << ":" << segundos << " ";
            res = in.str();
        }
        else if (segundos < 10)
        {
            in << ":" << minutos << ":" << setfill('0') << setw(2) << segundos << " ";
            res = in.str();
        }
        else
            in << ":" << minutos << ":" << segundos << " ";
        res = in.str();

        if (horas > 12)
        {
            ostringstream o;
            o << setfill('0') << setw(2) << horas - 12;
            hor = o.str();
            cout << "Hora: " << hor << res << pm << endl;
        }
        else
        {
            cout << "Hora: " << horas << res << am << endl;
        }
    }
    ~tiempo()
    {
    }
};
int main()
{
    tiempo t1(14, 6, 5);
    tiempo t2(11, 4, 40);
    t1.imprimir();
    t2.imprimir();
}