/*
#include <iostream>
class Point
{
private:
    double x;
    double y;

public:
    Point(double, double);
    ~Point();
    void X(double);
    void Y(double);
};

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
}

void Point::X(double x)
{
    this->x = x;
    std::cout << "X: " << x << std::endl;
}

void Point::Y(double y)
{
    this->y = y;
    std::cout << "Y: " << y << std::endl;
}

int main()
{
    double *d = new double(1.0);            //Creacion del Puntero double d que se inicializa con 1.0
    Point *pt = new Point(1.0, 2.0);        //Creacion del Puntero a objeto Point pt llamando al constructor de la clase

    *d = 2.0;                               //Asignacion del Puntero el valor 2.0
    (*pt).X(3.0);                           //Llamada a la funcion X que asigna un nuevo valor al atributo x de la clase Point
    (*pt).Y(3.0);                           //Llamada a la funcion Y que asigna un nuevo valor al atributo y de la clase Point

    pt->X(3.0);                             //Llamada a la funcion X a travez del puntero pt que asigna un nuevo valor al atributo x de la clase Point
    pt->Y(3.0);                             //Llamada a la funcion Y a travez del puntero pt que asigna un nuevo valor al atributo y de la clase Point

    delete d;                               //Liberacion de la memoria del puntero d
    delete pt;                              //Liberacion de la memoria del puntero pt
    system("pause");
}
*/
/*
#include <iostream>
#include <memory>

class Point
{
private:
    double x;
    double y;

public:
    Point(double, double);
    ~Point();
    void X(double);
    void Y(double);
};

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
    std::cout<<"Point Destructor\n";
}

void Point::X(double x)
{
    this->x = x;
    std::cout << "X: " << x << std::endl;
}

void Point::Y(double y)
{
    this->y = y;
    std::cout  << "Y: " << y << std::endl;
}

int main()
{
    std::unique_ptr<double> d = std::make_unique<double>(1.0);
    std::unique_ptr<Point> pt = std::make_unique<Point>(1.0, 2.0);

    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);

    pt->X(3.0);
    pt->Y(3.0);
    system("pause");
}
*/
/*
#include <iostream>
#include <memory>
class C1
{
private:
    std::shared_ptr<double> d;

public:
    C1(std::shared_ptr<double> value) : d(value) {}
    virtual ~C1() { std::cout << "C1 destructor\n"; }
    void print() const { std::cout << "Valor: " << *d << std::endl; }
};

class C2
{
private:
    std::shared_ptr<double> d;

public:
    C2(std::shared_ptr<double> value) : d(value) {}
    virtual ~C2() { std::cout << "C2 destructor\n"; }
    void print() const { std::cout << "Valor: " << *d << std::endl; }
};

int main()
{
    std::shared_ptr<C1> c1 = (std::make_shared<C1>(std::make_shared<double>(2.0)));
    std::shared_ptr<C2> c2 = (std::make_shared<C2>(std::make_shared<double>(4.0)));
    std::cout << "C1: ";
    c1->print();
    std::cout << "C2: ";
    c2->print();
}
*/
/*
#include <iostream>
#include <memory>

class Point
{
private:
    double x;
    double y;

public:
    Point(double, double);
    ~Point();
    void X(double);
    void Y(double);
};

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
    std::cout << "Point Destructor\n";
}

void Point::X(double x)
{
    this->x = x;
    std::cout << "X: " << x << std::endl;
}

void Point::Y(double y)
{
    this->y = y;
    std::cout << "Y: " << y << std::endl;
}

int main()
{
    std::shared_ptr<double> d = std::make_shared<double>(1.0);
    std::shared_ptr<Point> p = std::make_shared<Point>(1.0, 2.0);

    *d = 2.0;
    (*p).X(3.0);
    (*p).Y(3.0);

    p->X(3.0);
    p->Y(3.0);
}
*/
/*
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<double> a = std::make_shared<double>(5.0);
    std::weak_ptr<double> b = a;
    std::shared_ptr<double> c = b.lock();
    std::cout << a << " , " << c << std::endl;
    std::cout << *a << " , " << *c << std::endl;
}
*/