#include <iostream>
using namespace std;

class WinFactory
{
public:
    virtual ~WinFactory(){};
    virtual string Draw() const = 0;
};

class WinButtton : public WinFactory
{
public:
    string Draw() const override
    {
        return "Dibujando Button Windows";
    }
};

class WinCheckBox : public WinFactory
{
public:
    string Draw() const override
    {
        return "Windows";
    }
};

class MacFactory
{
public:
    virtual ~MacFactory(){};
    virtual string Draw() const = 0;
    virtual string draw(const WinFactory &colaborador) const = 0;
};

class MacButton : public MacFactory
{
public:
    string Draw() const override
    {
        return "Dibujando Button Mac";
    }
    string draw(const WinFactory &colaborador) const override
    {
        const string result = colaborador.Draw();
        return "Dibujando Button Mac con la ayuda de " + result;
    }
};

class MacCheckBox : public MacFactory
{
public:
    string Draw() const override
    {
        return "Mac";
    }
    string draw(const WinFactory &colaborador) const override
    {
        const string result = colaborador.Draw();
        return "Mac con la ayuda de " + result;
    }
};

class GUIFactory
{
public:
    virtual WinFactory *CrearControlW() const = 0;
    virtual MacFactory *CrearControlM() const = 0;
};

class Button : public GUIFactory
{
public:
    WinFactory *CrearControlW() const override
    {
        return new WinButtton();
    }
    MacFactory *CrearControlM() const override
    {
        return new MacButton();
    }
};

class CheckBox : public GUIFactory
{
public:
    WinFactory *CrearControlW() const override
    {
        return new WinCheckBox();
    }
    MacFactory *CrearControlM() const override
    {
        return new MacCheckBox();
    }
};

void Aplicattion(const GUIFactory &f, int os)
{
    if (os == 1){
        const WinFactory *Win = f.CrearControlW();
        cout << "\n"
             << Win->Draw() << endl;
        delete Win;
    }
    if (os == 2){
        const MacFactory *Mac = f.CrearControlM();
        cout << "\n"
             << Mac->Draw() << endl;
        delete Mac;
    }
}
int main()
{
    cout << "Cliente: Windows ";
    Button *f1 = new Button();
    Aplicattion(*f1, 1);
    delete f1;
    cout << endl;

    cout << "Cliente: Mac ";
    Button *f2 = new Button();
    Aplicattion(*f2, 2);
    delete f2;
    system("Pause");
    return 0;
}