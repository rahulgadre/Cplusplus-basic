//*********************************************************************
// FILE NAME:  washer.cpp
// AUTHOR: 	              <--ENTER YOUR NAME HERE!
// Lab 1
// Exercise 1
// DESCRIPTION: Compute and print the area of a washer to
//              screen after prompting the user for the inner and
//              outer diameters of the washer
//*********************************************************************

#include <iostream>
using namespace std;

int main( )
{
    //constant section
    const double PI = 3.141592653589793;

    //variable declarations
    double diameter;
    double c;
    double lol;
    double o2;
     double carbon;//user's diameter input
    double outerArea;       //area of whole washer's circle
    double innerArea;       //area of washer's hole
    double washerArea;      //difference of the 2 areas
    double matecut; //material cut out

    //get washer's outer diameter value
    cout << "Enter the name of acid: ";
    cin >> diameter;

    //calculate outer area using A = PI x r^2
    outerArea = PI * ((diameter/2.0) * (diameter/2.0)) ;

    //get washer's inner diameter value
    cout << "\nEnter oxygen molecules: ";
    cin >> lol;

    o2= lol*15;

    cout << "\nEnter carbon molecules: ";
    cin >> lol;
     c= carbon*12;

matecut = o2+c;
    //print area to screen

    cout << "\nThe percentage of material cut out is: " << matecut <<
        " square millimeters." << endl << endl;
    //freeze output window
    cout << endl;
    cout << "Press <Enter> to exit...";
    cin.ignore(1000, '\n');

    return (0);
}
