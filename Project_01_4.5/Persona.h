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
        
        string ingresar();
        bool eliminar(int);
        bool cambiarEdad(int nedad);
        string verDatos();
        
        Persona();
        Persona(int id, string correo, string cedula, string nombre, int edad);
        Persona(string correo, string cedula, string nombre, int edad);
        ~Persona();
        
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
