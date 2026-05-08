#include "Persona.h"
#include "UI_ingresar.h"
#include "UI_edad.h"
#include "PersonaController.h"

int main() {
    View::UI_ingresar vista;
    View::UI_edad vistaEdad;
    Model::Persona persona;
    Controller::PersonaController controller(&vista, &vistaEdad, &persona);

    controller.doLogic();

    return 0;
}
