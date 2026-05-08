#include <iostream>
#include <string>
#include "UI_edad.h"
using namespace std;

namespace View
{
    void UI_edad::prompt(string s)
    {
        cout << s;
    }

    void UI_edad::prompt(int i)
    {
        cout << i;
    }

    int UI_edad::getInput()
    {
        int x;
        cin >> x;
        return x;
    }
}
