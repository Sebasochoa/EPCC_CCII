
#include <iostream>
#include <vector>
using namespace std;

class Automovil
{
public:
    vector<string> Partes;
    void ListaPartes()
    {
        cout << "Partes : ";
        for (size_t i = 0; i < Partes.size(); i++)
        {
            if (Partes[i] == Partes.back())
            {
                cout << Partes[i];
            }
            else
            {
                cout << Partes[i] << ", ";
            }
        }
        cout << "\n\n";
    }
};
class IBuilder
{
public:
    virtual ~IBuilder() {}
    virtual void addMotor() = 0;

    virtual void addRuedas() = 0;

    virtual void addAsientos() = 0;

    virtual void addPuertas() = 0;

    virtual void addVidrios() = 0;

    virtual void addVolante() = 0;
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
    void addMotor() override
    {
        this->carro->Partes.push_back("Motor: Si");
    }
    void addRuedas() override
    {
        this->carro->Partes.push_back("Ruedas: 4");
    }
    void addAsientos() override
    {
        this->carro->Partes.push_back("Asientos: 4");
    }
    void addPuertas() override
    {
        this->carro->Partes.push_back("Puertas: 4");
    }

    void addVidrios() override
    {
        this->carro->Partes.push_back("Vidrios: Si");
    }
    void addVolante() override
    {
        this->carro->Partes.push_back("Volante: Si");
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
    void BuildAutoMin()
    {
        this->builder->addMotor();
        this->builder->addRuedas();
        this->builder->addAsientos();
        this->builder->addPuertas();
        this->builder->addVidrios();
    }
};

void instrucciones(Director &director)
{
    BuilderEspecifico *builder = new BuilderEspecifico();
    director.set_builder(builder);
    cout << "Automovil Basico:\n";
    director.BuildAutoMin();
    Automovil *p = builder->GetAuto();
    p->ListaPartes();
    delete p;
}
int main()
{
    Director *director = new Director();
    instrucciones(*director);
    delete director;
    return 0;
}
