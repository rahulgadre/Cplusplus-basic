//**************************************************************************
//*** PROGRAM:             Lab3Ex02                                      ***
//***                                                                    ***
//*** PURPOSE:             Laboratory Exercise 3 for ISTE100             ***
//***                                                                    ***
//*** WRITTEN BY:          Alec Berenbaum                                ***
//***                                                                    ***
//*** DESCRIPTION:         This program illustrates the use of functions ***
//***                      to perform mathematical operations.  The      ***
//***                      functions come from the <cmath> library.      ***
//***                      This exercise also introduces student to      ***
//***                      selection.                                    ***
//**************************************************************************
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double dfLeg1, dfLeg2, dfHypotenuse;               // Declaration of legs and hypotenuse

    //***
    //*** Prompt the user for leg 1.
    //***

    cout << "Please enter the length of LEG 1 of the right triangle:   >> ";
    cin  >> dfLeg1;
    cin.ignore(1000, '\n');

    if (dfLeg1 <= 0)
    {
        cout << "INVALID VALUE ENTERED. PROGRAM IS TERMINATING." << endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }


    //***
    //*** Prompt the user for Hypotenuse.
    //***

    cout << "Please enter the length of Hypotenuse of the right triangle:   >> ";
    cin  >> dfHypotenuse;
    cin.ignore(1000, '\n');

    if (dfHypotenuse <= 0)
    {
        cout << "INVALID VALUE ENTERED. PROGRAM IS TERMINATING." << endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }

    //**********************************************************************
    //*** At this point we know that inputs are valid - OK to calculate. ***
    //**********************************************************************


    //***
    //*** Get square of hypotenuse and leg 1.
    //***

    dfLeg2 = pow(dfHypotenuse,2.0)- pow(dfLeg1,2.0);

    //***
    //*** Calculate square of leg 2, then calculate leg 2
    //***

    dfLeg2= sqrt(dfLeg2);

    //***
    //*** Output the results.
    //***
    cout << endl << "The length of leg 2 of the triangle is " << dfLeg2 << endl;

    cout << endl << "Press <ENTER> to exit....";
    cin.ignore(1000, '\n');


    return 0;

}
