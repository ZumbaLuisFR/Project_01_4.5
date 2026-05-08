#include <locale.h>
#include "PersonaController.h"

using namespace Controller;

PersonaController::PersonaController(View::UI_ingresar* _ui, View::UI_edad* _u, Model::Persona* _p)
    : ui(_ui), u(_u), p(_p) {
}

void PersonaController::doLogic() {
    
    setlocale(LC_ALL, "spanish");


    string resultado = p->ingresar();
    ui->prompt(resultado + "\n");

    
    u->prompt("Ingresa la edad ");
    int i = u->getInput();

    
    if (p->cambiarEdad(i)) {
        
        int x = p->getEdad();

        
        u->prompt("Este es la nueva edad: ");
        u->prompt(x);
        u->prompt("\n");
    }
    else {
        u->prompt("No es posible asignar esa edad.  El rango es 1-100 años\n");
    }
}
