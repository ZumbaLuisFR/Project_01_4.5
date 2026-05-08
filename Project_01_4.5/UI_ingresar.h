#pragma once
#include <string>
#include <iostream>
using namespace std;
namespace View {
    class UI_ingresar {
    public:
        void prompt(const string& s);
        string getInput();
    };
}
