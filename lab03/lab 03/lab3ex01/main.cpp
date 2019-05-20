//**************************************************************************
//*** PROGRAM:             Lab3Ex01                                      ***
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
    //*** Prompt the user for leg 2.
    //***
    cout << "Please enter the length of LEG 2 of the right triangle:   >> ";
    cin  >> dfLeg2;
    cin.ignore(1000, '\n');

     if (dfLeg2 <= 0)
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
    //*** Get square of hypotenuse.
    //***
    //dfHypotenuse = dfLeg1 * dfLeg1 + dfLeg2 * dfLeg2;
    dfHypotenuse = pow (dfLeg1, 2.0) + pow (dfLeg2, 2.0);
    //***
    //*** Take the square root of hypotenuse
    //***
    dfHypotenuse=sqrt(dfHypotenuse);

    //***
    //*** Output the results.
    //***
    cout << endl << "The hypotenuse of the triangle is " << dfHypotenuse << endl;

    cout << endl << "Press <ENTER> to exit....";
    cin.ignore(1000, '\n');

    return 0;
}
