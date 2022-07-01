#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
struct producto
{
    int codigo = -1;
    string nombre;
    int precio;
    int cantidad;
};
void menu()
{
    cout << "1: Alta de producto\n";
    cout << "2: Baja de un producto\n";
    cout << "3: Buscar por nombre\n";
    cout << "4: Modificar stock y precio\n";
    cout << "5: Mostrar Datos\n";
    cout << "6: Salir\n";
}
void menu2()
{
    cout << "1: Modificar Nombre\n";
    cout << "2: Modificar Precio\n";
    cout << "3: Modificar Stock\n";
}
void cambioNombre(string **nom){
    string aux;
    cout << "Introduzca un Nombre: ";
    cin>>aux;
    **nom = aux;
}
void cambiarPrecio(int **num){
    int aux;
    cout<<"Introduzca un Precio: ";
    cin>>aux;
    **num = aux;
}
void cambiarStock(int **num){
    int aux;
    cout<<"Introduzca un Stock: ";
    cin>>aux;
    **num = aux;
}
int main()
{
    struct producto prod, productos[10];
    int opcion, codigo, opc, existe = -1;
    bool valid = false;
    string nombrebus;
    for (int i = 0; i < 10; i++)
    {
        productos[i].codigo = 0;
        productos[i].nombre = "x";
        productos[i].precio = 0;
        productos[i].cantidad = 0;
    }
    string *nombre, **nom;
    nom = &nombre;
    nombre = &prod.nombre;
    int *precio, **pr;
    pr = &precio;
    precio = &prod.precio;
    int *stock, **stk;
    stk = &stock;
    stock = &prod.cantidad;

    do
    {
        menu();
        cout << "Introduzca una opci" << char(162) << "n: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Introduzca un codigo: ";
            cin >> prod.codigo;
            cout << "Introduzca un nombre: ";
            cin >> prod.nombre;
            cout << "Introduzca un precio: ";
            cin >> prod.precio;
            cout << "Introduzca un stock: ";
            cin >> prod.cantidad;
            srand(time(NULL));
            for (int i = 9; i >= 0; i--)
            {
                if (i != 0)
                {
                    productos[i].codigo = productos[i - 1].codigo;
                    productos[i].nombre = productos[i - 1].nombre;
                    productos[i].precio = productos[i - 1].precio;
                    productos[i].cantidad = productos[i - 1].cantidad;
                }
                else
                {
                    productos[i].codigo = prod.codigo;
                    productos[i].nombre = prod.nombre;
                    productos[i].precio = prod.precio;
                    productos[i].cantidad = prod.cantidad;
                }
            }
            cout << "Producto creado.\n";
            break;
        case 2:
            cout << "Introduzca el  codigo del producto a dar de baja: ";
            cin >> codigo;
            for (int i = 0; i < 10; i++)
            {
                if (productos[i].codigo == codigo)
                {
                    existe = i;
                }
            }
            if (existe != -1)
            {
                productos[existe].codigo = 0;
                productos[existe].nombre = "x";
                productos[existe].precio = 0;
                productos[existe].cantidad = 0;
            }
            else
            {
                cout << "Codigo de producto no existe\n";
            }
            existe = -1;
            break;
        case 3:
            cout << "Introduzca el codigo de producto a Buscar: ";
            cin >> codigo;
            for (int i = 0; i < 10; i++)
            {
                if (productos[i].codigo == codigo)
                {
                    existe = i;
                }
            }
            if (existe != -1)
            {
                cout << "Nombre: " << productos[existe].nombre << "\tPrecio: " << productos[existe].precio << "\tCantidad en Stock: " << productos[existe].cantidad << endl;
            }
            else
            {
                cout << "Codigo de producto no existe\n";
            }
            existe = -1;
            break;
        case 4:
            cout << "Introduzca el codigo del producto a modificar: ";
            cin >> codigo;
            for (int i = 0; i < 10; i++)
            {
                if (productos[i].codigo == codigo)
                {
                    existe = i;
                }
            }
            if (existe != -1)
            {
                menu2();
                cout << "Introduzca una opcion valida: ";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cambioNombre(&nombre);
                    productos[existe].nombre = prod.nombre;
                    break;
                case 2:
                    cambiarPrecio(&precio);
                    productos[existe].precio = prod.precio;
                    break;
                case 3:
                    cambiarStock(&stock);
                    productos[existe].cantidad = prod.cantidad;
                default:
                    cout << "Opcion no valida\n";
                    break;
                }
                cout << "Producto modificado.\n";
            }
            else
            {
                cout << "Codigo de producto no existe\n";
            }
            existe = -1;
            break;
        case 5:
            if (prod.codigo != -1)
            {
                cout << "Codigo\tNombre\t\tPrecio\tStock\n";
                for (int i = 0; i < 10; i++)
                {
                    if (productos[i].codigo != 0)
                    {
                        cout << productos[i].codigo << "\t" << productos[i].nombre << setfill(' ') << setw(5) << "\t" << productos[i].precio << "\t" << productos[i].cantidad << endl;
                    }
                }
            }
            else
                cout << "Datos Vacios\n";
            break;
        case 6:
            cout << "Cerrando Programa...\n";
            valid = true;
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        }

    } while (valid != true);
    return 0;
}