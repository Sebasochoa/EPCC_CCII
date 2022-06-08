//ABCDEFGHIJKKLMNOPQRSTUVWXYZ
//65-90
#include<iostream>
#include<sstream>
using namespace std;
void crear(char c){
    int len=int(c)-64;
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
    
}
void letras(char c){ 
    int c1=int(c);
}
int main()
{
    crear('E');
}
/*
int cont = 0, cont2 = 1, n=5;
	for (int fila1 = 1; fila1 <= n; fila1++)
	{
		for (int e = 1; e <= n - fila1; e++)
		{
			cout << " ";
		}
		for (int col = 1; col <= (cont + 1); col++)
		{

			cout << "1";

		}
		for (int col2 = fila1 - 1; col2 > 0; col2--){

			cout << "1";
		}
		cont++;
		cout << endl;
	}
	for (int fila2 = 1; fila2 <= n - 1; fila2++)
	{
		for (int e = 1; e <= fila2; e++)
		{
			cout << " ";
		}
		for (int col3 = 1; col3 <= (n - fila2); col3++)
		{

			cout << "1";

		}
		for (int col2 = (n - fila2) - 1; col2 >0; col2--)

		{
			cout << "1";
		}
		cont2++;

		cout << endl;
		*/