#include "UI_ingresar.h"

using namespace View;

void UI_ingresar::prompt(const string& s) {
    cout << s;
}

string UI_ingresar::getInput() {
    string dato;
    cin >> dato;
    return dato;
}
