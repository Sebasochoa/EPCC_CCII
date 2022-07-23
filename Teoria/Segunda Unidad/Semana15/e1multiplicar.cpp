#include <iostream>

using namespace std;
int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
                  {{10, 11}, {13, 14}, {16, 17}, {1, 2}},
                  {{19, 20}, {22, 23}, {25, 26}, {1, 2}}};

const int a = sizeof x / sizeof x[0];
const int b = (sizeof x / sizeof x[0][0]) / (sizeof x / sizeof x[0]);
const int c = ((sizeof x / sizeof x[0][0][0]) / (sizeof x / sizeof x[0][0]));
void multiplicar(int x[a][b][c], int m)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                x[i][j][k]*=m;
            }
        }
    }
    
}
void imprimir(int x[a][b][c]){
    for (int i = 0; i < a; i++)
    {
        cout<<"Matriz "<<i+1<<endl;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout<<x[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Matriz inicial: \n";
    imprimir(x);
    multiplicar(x, 4);
    cout<<"Matriz multiplicada: \n";
    imprimir(x);
}
