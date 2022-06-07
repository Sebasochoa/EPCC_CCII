#include <iostream>
#include <vector>
using namespace std;
string **reinas;
void crear_matriz()
{
    reinas = new string *[8];
    for (int i = 0; i < 8; i++)
    {
        reinas[i] = new string[8];
    }
}
void llenar_matriz(string **reinas)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            *(*(reinas + i) + j) = "-";
        }
    }
}
void Lugar_Blancas(string **reinas, int fil, int col)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            *(*(reinas + fil - 1) + col - 1) = "B";
        }
    }
}
void Lugar_Negras(string **reinas, int fil, int col)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            *(*(reinas + fil - 1) + col - 1) = "N";
        }
    }
}
void Mostrar(string **reinas)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << *(*(reinas + i) + j) << "\t";
        }
        cout << endl;
    }
}
bool Puede_comer(string **reinas)
{
    int filN, colN, filB, colB;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (*(*(reinas + i) + j) == "N")
            {
                filN = i;
                colN = j;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (*(*(reinas + i) + j) == "B")
            {
                filB = i;
                colB = j;
            }
        }
    }
    int auxi = 1, auxj = 1;
    if (filB == filN || colB == colN)
    {
        return true;
    }
    do
    {
        if (*(*(reinas + filB + auxi) + colB + auxj) == *(*(reinas + filN) + colN) || *(*(reinas + filB - auxi) + colB - auxj) == *(*(reinas + filN) + colN) || *(*(reinas + filB + auxi) + colB - auxj) == *(*(reinas + filN) + colN) || *(*(reinas + filB - auxi) + colB + auxj) == *(*(reinas + filN) + colN))
        {
            return true;
        }
        else if (filN == 7 || colN == 7)
        {
            if (*(*(reinas + filB + 1 + auxi) + colB + 1 + auxj) == *(*(reinas + filN) + colN))
            {
                return true;
            }
        }
        auxi++;
        auxj++;
    } while ((filB + auxi) <= 8 && (colB + auxj) <= 8 && (filB - auxi) >= 0 && (colB - auxj) >= 0);
    return false;
}
int main()
{
    crear_matriz();
    llenar_matriz(reinas);
    Lugar_Blancas(reinas, 4, 4);
    Lugar_Negras(reinas, 1, 7);
    Mostrar(reinas);
    if (Puede_comer(reinas) == true)
    {
        cout << "Las Reinas pueden atacarse entre si";
    }
    else
    {
        cout << "Las Reinas no pueden atacarse";
    }
    return 0;
}
