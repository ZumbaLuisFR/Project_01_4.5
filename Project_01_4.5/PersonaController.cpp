#include <locale.h>
#include "PersonaController.h"

using namespace Controller;

PersonaController::PersonaController(View::UI_ingresar* _ui, View::UI_edad* _u, Model::Persona* _p)
    : ui(_ui), u(_u), p(_p) {
}

void PersonaController::doLogic() {
    // Configura la consola para mostrar tildes y ñ
    setlocale(LC_ALL, "spanish");

    // Muestra el ID asignado (UI_ingresar)
    string resultado = p->ingresar();
    ui->prompt(resultado + "\n");

    // Pregunta al usuario un número (Controller)
    u->prompt("Ingresa la edad ");
    int i = u->getInput();

    // Usa el método creado (Model)
    if (p->cambiarEdad(i)) {
        // Devuelve el número (Model)
        int x = p->getEdad();

        // Muestra al usuario (View)
        u->prompt("Este es la nueva edad: ");
        u->prompt(x);
        u->prompt("\n");
    }
    else {
        u->prompt("No es posible asignar esa edad.  El rango es 1-100 años\n");
    }
}
