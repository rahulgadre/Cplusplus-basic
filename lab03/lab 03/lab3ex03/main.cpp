//**************************************************************************
//*** PROGRAM:             Lab3Ex03                                      ***
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

    // Constant to define PI

    const double PI = 3.14159265;


int main()
{

    double dfSideA, dfSideB, dfSideC;
    double dfAngleC;

    //***
    //*** Prompt the user for known sides, A and B
    //***

    cout << "Please enter the length of side A:   >> ";
    cin  >> dfSideA;
    cin.ignore(1000, '\n');

    if (dfSideA <= 0)
    {
        cout << "INVALID VALUE ENTERED. PROGRAM IS TERMINATING." << endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }

    cout << "Please enter the length of side B:   >> ";
    cin  >> dfSideB;
    cin.ignore(1000, '\n');

    if (dfSideB <= 0)
    {
        cout << "INVALID VALUE ENTERED. PROGRAM IS TERMINATING." << endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }


    //***
    //*** Prompt the user for known angle C
    //***

    cout << "Please enter the known angle C (in degrees):   >> ";
    cin  >> dfAngleC;
    cin.ignore(1000, '\n');

    if ((dfAngleC <= 0) || (dfAngleC >= 180))
    {
        cout << "INVALID VALUE ENTERED. PROGRAM IS TERMINATING." << endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }


    //***
    //*** Calculate the square of the side C
    //***

     dfSideC = pow(dfSideA,2.0) + pow(dfSideB,2.0)- (2*dfSideA*dfSideB*cos(dfAngleC * PI / 180.0));

    //***
    //*** Calculate the side C
    //***
    dfSideC = sqrt(dfSideC);

    //***
    //*** Output the results.
    //***
    cout << endl << "The Side C of the triangle is: " << dfSideC << endl;

    cout << endl << "Press <ENTER> to exit....";
    cin.ignore(1000, '\n');

    return 0;
}
