#pragma once

#include <string>
using namespace std;

// UI interfaz de usuario
namespace View
{
    class UI_edad
    {
    public:
        void prompt(string s);
        void prompt(int i);
        int getInput();
    };
};
