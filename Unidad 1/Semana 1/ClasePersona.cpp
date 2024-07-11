#include <iostream>
#include <conio.h>

using namespace std;

class CPersona
{
    public:
     string nombre;
     bool estado;
     CPersona()
     {
         this->nombre ="";
         this->estado =false;
         
     }
     ~CPersona() {}
    
};

template <typename T>
T activar (T objeto)
{
    objeto.estado= true;
    return objeto;
}

int main()
{
    CPersona *ObjPersona = new CPersona;
    ObjPersona->nombre="Carlos";
    ObjPersona->estado= false;
    
    cout << "Nombre es: " << ObjPersona->nombre << endl;
    cout << "Estado es: " << ObjPersona->estado << endl;
    
    *ObjPersona= activar<CPersona> (*ObjPersona);
    
    cout << "Nombre es: " << ObjPersona->nombre << endl;
    cout << "Estado es: " << ObjPersona->estado << endl;

    return 0;
}