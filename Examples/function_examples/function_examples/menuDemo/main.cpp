#include <iostream>
#include "userInterface.h"

using namespace std;

int main()
{
    int iChoice = getMenuChoice();

    while (iChoice != CHOICE_EXIT)
    {
        if (iChoice == CHOICE_SQUARE)
        {
            drawSquare();
        }
        else if (iChoice == CHOICE_TRIANGLE)
        {
            drawTriangle();
        }
        iChoice = getMenuChoice();
    }

    cout << endl << "Thank you for using this program!!!" << endl;

    pauseProg("Press <ENTER> to exit");
    return 0;
}
