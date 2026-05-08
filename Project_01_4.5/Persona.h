#pragma once
#include <string>
using namespace std;

namespace Model {
    class Persona {
    private:
        int id;
        string correo;
        string cedula;
        string nombre;
        int edad;
    public:
        //metodos
        string ingresar();
        bool eliminar(int);
        bool cambiarEdad(int nedad);
        string verDatos();
        //constructor destructor
        Persona();
        Persona(int id, string correo, string cedula, string nombre, int edad);
        Persona(string correo, string cedula, string nombre, int edad);
        ~Persona();
        //gettters y setters
        void setId(int nid);
        int getId();
        void setCorreo(string correo);
        string getCorreo();
        void setCedula(string ncedula);
        string getCedula();
        void setNombre(string nnombre);
        string getNombre();
        void setEdad(int nedad);
        int getEdad();
    };
}
