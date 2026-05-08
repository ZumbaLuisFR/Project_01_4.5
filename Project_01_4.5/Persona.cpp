#include "Persona.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace Model;

namespace Model {
    Persona::Persona() : id(0), correo(""), cedula(""), nombre(""), edad(0) {
    }

    Persona::Persona(int id, string correo, string cedula, string nombre, int edad) {
        this->id = id;
        this->correo = correo;
        this->cedula = cedula;
        this->nombre = nombre;
        this->edad = edad;
    }

    Persona::Persona(string correo, string cedula, string nombre, int edad) {
        this->id = 0;
        this->correo = correo;
        this->cedula = cedula;
        this->nombre = nombre;
        this->edad = edad;
    }

    Persona::~Persona() {
    }

    //getters y setters
    void Persona::setId(int nid) {
        this->id = nid;
    }

    int Persona::getId() {
        return this->id;
    }

    void Persona::setCorreo(string correo) {
        this->correo = correo;
    }

    string Persona::getCorreo() {
        return this->correo;
    }

    void Persona::setCedula(string ncedula) {
        this->cedula = ncedula;
    }

    string Persona::getCedula() {
        return this->cedula;
    }

    void Persona::setNombre(string nnombre) {
        this->nombre = nnombre;
    }

    string Persona::getNombre() {
        return this->nombre;
    }

    void Persona::setEdad(int nedad) {
        this->edad = nedad;
    }

    int Persona::getEdad() {
        return this->edad;
    }

    //metodos
    string Persona::ingresar() {
        srand(time(NULL));
        id = 50 + rand() % 51;
        return "ID asignado: " + std::to_string(id);
    }

    bool Persona::eliminar(int id) {
        //pendiente
        return true;
    }

    string Persona::verDatos() {
        //pendiente
        return "Ver datos de la persona";
    }

    bool Persona::cambiarEdad(int nedad) {
        bool m = false;
        if (nedad > 0 && nedad < 101) {
            this->setEdad(nedad);
            m = true;
        }
        return m;
    }
}
