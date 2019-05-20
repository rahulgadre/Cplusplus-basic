
#include <iostream>
#include "userInterface.h"

using namespace std;

//***********************************************************

int getMenuChoice()
{
    string sChoice;

    cout << endl << endl;
    cout << "Drawing Choices:" << endl;
    cout << "================" << endl;

    cout << "  S - square" << endl;
    cout << "  T - triangle" << endl << endl;
    cout << "  X - exit" << endl;
    cout << "================" << endl;
    cout << "Enter choice from the menu --> ";
    getline(cin, sChoice);

    while ((sChoice != "S") && (sChoice != "T") && (sChoice != "X") &&
           (sChoice != "s") && (sChoice != "t") && (sChoice != "x"))
    {
        cout << "*** ERROR! Invalid choice entered!" << endl;
        cout << "           PLEASE REENTER: --> ";
        getline(cin, sChoice);
    }

    if ((sChoice == "S") || (sChoice == "s"))
    {
        return CHOICE_SQUARE;
    }
    else if ((sChoice == "T") || (sChoice == "t"))
    {
        return CHOICE_TRIANGLE;
    }
    else
    {
        return CHOICE_EXIT;
    }
}

//***********************************************************
void drawSquare()
{
    cout << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl << endl;
}



void drawTriangle()
{
    cout << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

//***********************************************************
int pauseProg(string sMessage)
{
    cout << sMessage << "...";
    cin.ignore(1000, '\n');
}
//***********************************************************
