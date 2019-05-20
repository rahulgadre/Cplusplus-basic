#ifndef USERINTERFACE_H_INCLUDED
#define USERINTERFACE_H_INCLUDED

#include <iostream>

using namespace std;

const int CHOICE_SQUARE = 1;
const int CHOICE_TRIANGLE = 2;
const int CHOICE_EXIT = 0;

int  getMenuChoice();
void drawSquare();
void drawTriangle();

int pauseProg(string sMessage);

#endif // USERINTERFACE_H_INCLUDED
