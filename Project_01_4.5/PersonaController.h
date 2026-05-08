#pragma once
#include "Persona.h"
#include "UI_ingresar.h"
#include "UI_edad.h"

namespace Controller {
    class PersonaController {
    private:
        View::UI_ingresar* ui;
        View::UI_edad* u;
        Model::Persona* p;
    public:
        PersonaController(View::UI_ingresar* _ui, View::UI_edad* _u, Model::Persona* _p);
        void doLogic();
    };
}
