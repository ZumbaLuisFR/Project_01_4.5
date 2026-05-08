#pragma once

#include <string>
using namespace std;


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
