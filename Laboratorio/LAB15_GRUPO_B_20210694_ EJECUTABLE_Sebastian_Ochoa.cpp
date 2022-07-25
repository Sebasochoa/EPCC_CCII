#include <iostream>
#include <vector>
using namespace std;

class Automovil
{
public:
    vector<string> Partes;
    void ListaPartes()
    {
        for (size_t i = 0; i < Partes.size(); i++)
        {
            cout << "  " << Partes[i] << "\n";
        }
    }
};
class IBuilder
{
public:
    virtual ~IBuilder() {}
    virtual void addMotor() = 0;

    virtual void addCarroceria(string t) = 0;

    virtual void addRuedas() = 0;

    virtual void addRuedasDeportivas() = 0;

    virtual void addRuedasTodoTerreno() = 0;

    virtual void addAsientos() = 0;

    virtual void addAsientosN(string t) = 0;

    virtual void addPuertas() = 0;

    virtual void addVidrios() = 0;

    virtual void addVolante() = 0;

    virtual void addAleron(string t) = 0;

    virtual void addSuspension() = 0;

    virtual void addSuspensionTodoTerreno() = 0;

    virtual void addTransmision() = 0;

    virtual void addTransmisionDeportiva() = 0;

    virtual void addTraccion() = 0;

    virtual void addTraccionTodoTerreno() = 0;

    virtual void addEquipaje(string t) = 0;
};
class BuilderEspecifico : public IBuilder
{
private:
    Automovil *carro;

public:
    BuilderEspecifico()
    {
        this->Reset();
    }
    ~BuilderEspecifico()
    {
        delete carro;
    }
    void Reset()
    {
        this->carro = new Automovil();
    }
    // Auto Minimo
    void addMotor() override
    {
        this->carro->Partes.push_back("Motor: Si");
    }
    void addCarroceria(string t) override
    {
        this->carro->Partes.push_back("Carroceria: " + t);
    }
    void addAsientos() override
    {
        this->carro->Partes.push_back("Asientos: 4");
    }
    void addPuertas() override
    {
        this->carro->Partes.push_back("Puertas: 4");
    }
    void addTransmision() override
    {
        this->carro->Partes.push_back("Transmision: Standard");
    }
    void addVidrios() override
    {
        this->carro->Partes.push_back("Vidrios: Si");
    }
    void addVolante() override
    {
        this->carro->Partes.push_back("Volante: Si");
    }
    void addSuspension() override
    {
        this->carro->Partes.push_back("Suspension: Si Tipo: Standard");
    }
    void addTraccion() override
    {
        this->carro->Partes.push_back("Traccion: 2X4");
    }
    // Auto Standard
    void addRuedas() override
    {
        this->carro->Partes.push_back("Ruedas: 4 Tipo: Standard");
    }
    // Auto Deportivo
    void addRuedasDeportivas() override
    {
        this->carro->Partes.push_back("Ruedas: 4 Tipo: Deportivas");
    }
    void addAsientosN(string t) override
    {
        this->carro->Partes.push_back("Asientos: " + t);
    }
    void addAleron(string t) override
    {
        this->carro->Partes.push_back("Aleron: Si Color: " + t);
    }
    void addTransmisionDeportiva() override
    {
        this->carro->Partes.push_back("Transmision: Deportiva");
    }
    // Auto TodoTerreno
    void addRuedasTodoTerreno() override
    {
        this->carro->Partes.push_back("Ruedas: 4 Tipo: TodoTerreno");
    }
    void addSuspensionTodoTerreno() override
    {
        this->carro->Partes.push_back("Suspension: Si Tipo: TodoTerreno");
    }
    void addTraccionTodoTerreno() override
    {
        this->carro->Partes.push_back("Traccion: 4X4");
    }
    void addEquipaje(string t) override
    {
        this->carro->Partes.push_back("Equipaje: " + t);
    }
    Automovil *GetAuto()
    {
        Automovil *result = this->carro;
        this->Reset();
        return result;
    }
};

class Director
{
private:
    IBuilder *builder;

public:
    void set_builder(IBuilder *builder)
    {
        this->builder = builder;
    }
    void BuildAutoStandard()
    {
        string color;
        cout << "Selecciono Automovil Standard\n";
        cout << "Elija el color: ";
        cin >> color;
        cout << "Automovil Basico:\n";
        this->builder->addMotor();
        this->builder->addCarroceria(color);
        this->builder->addAsientos();
        this->builder->addPuertas();
        this->builder->addVidrios();
        this->builder->addVolante();
        this->builder->addSuspension();
        this->builder->addRuedas();
        this->builder->addTraccion();
        this->builder->addTransmision();
    }
    void BuildAutoDeportivo()
    {
        string color, color_aleron, Nasientos;
        int opc;
        cout << "Selecciono Automovil Deportivo\n";
        cout << "Elija el color: ";
        cin >> color;
        cout << "Elija el color de Aleron: ";
        cin >> color_aleron;
        cout << "1: 2 Asientos\n";
        cout << "2: 4 Asientos\n";
        cout << "Elija la cantidad de asientos: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            Nasientos = "2";
            break;
        case 2:
            Nasientos = "4";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        }
        cout << "Automovil Deportivo:\n";
        this->builder->addMotor();
        this->builder->addCarroceria(color);
        this->builder->addAsientos();
        this->builder->addPuertas();
        this->builder->addVidrios();
        this->builder->addVolante();
        this->builder->addSuspension();
        this->builder->addRuedasDeportivas();
        this->builder->addAleron(color_aleron);
        this->builder->addAsientosN(Nasientos);
        this->builder->addTraccion();
        this->builder->addTransmisionDeportiva();
    }
    void BuildAutoTodoTerreno()
    {
        string color, equipaje;
        int opc;
        cout << "Selecciono Automovil TodoTerreno\n";
        cout << "Elija el color: ";
        cin >> color;
        cout << "1: Cabina\n";
        cout << "2: Tolva\n";
        cout << "Elija el tipo de Equipaje: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            equipaje = "Cabina";
            break;
        case 2:
            equipaje = "Tolva";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        }
        cout << "Automovil TodoTerreno:\n";
        this->builder->addMotor();
        this->builder->addCarroceria(color);
        this->builder->addAsientos();
        this->builder->addPuertas();
        this->builder->addVidrios();
        this->builder->addVolante();
        this->builder->addSuspensionTodoTerreno();
        this->builder->addRuedasTodoTerreno();
        this->builder->addTraccionTodoTerreno();
        this->builder->addEquipaje(equipaje);
    }
};

void Contructor(Director &director)
{
    BuilderEspecifico *builder = new BuilderEspecifico();
    director.set_builder(builder);
    int opc;
    cout << "***************MEN" << char(233) << " AUTOMOVILES***************" << endl;
    cout << "1: Automovil Standard\n";
    cout << "2: Automovil Deportivo\n";
    cout << "3: Automovil TodoTerreno\n";
    cout << "Elija un automovil: ";
    cin >> opc;
    switch (opc)
    {
    case 1:
        director.BuildAutoStandard();
        break;
    case 2:
        director.BuildAutoDeportivo();
        break;
    case 3:
        director.BuildAutoTodoTerreno();
        break;
    default:
        cout << "Opcion no Valida\n";
        break;
    }
    Automovil *p = builder->GetAuto();
    p->ListaPartes();
    delete p;
}
int main()
{
    Director *director = new Director();
    Contructor(*director);
    delete director;
    system("pause");
    return 0;
}