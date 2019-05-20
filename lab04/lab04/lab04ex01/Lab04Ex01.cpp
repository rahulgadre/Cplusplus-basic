//**************************************************************************
//*** PROGRAM:             Lab04Ex01                                     ***
//***                                                                    ***
//*** PURPOSE:             Laboratory Exercise 4 for ISTE100             ***
//***                                                                    ***
//*** WRITTEN BY:          Alec Berenbaum                                ***
//***                                                                    ***
//*** DESCRIPTION:         This program reinforces the use of selection  ***
//***                      for the validation purposes as well as the use***
//***                      of cmath library function.                    ***
//**************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //***
    //*** Declaration of variables
    //***
    double dfSideA;                 // Side A of a triangle
    double dfSideB;                 // Side B of a triangle
    double dfSideC;                 // Side C of a triangle

    double dfPerimeter;
    double dfArea;
    double dfS;
    //***
    //*** Display the welcome message
    //***
    cout << "Welcome to the triangle analyzing program!!!" << endl;
    cout << "============================================" << endl << endl;

    //***
    //*** Prompt the user for length of side A
    //***
    cout << "Please enter the length of side A: ";
    cin  >> dfSideA;
    cin.ignore(1000, '\n');

    //***
    //*** Validate Side A
    //***

   if (dfSideA <= 0)
    {
        cout << "*** INVALID SIDE ENTERED."<< endl;
        cout << "*** PROGRAM IS TERMINATING."<< endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }


    //***
    //*** Prompt the user for length of side B
    //***
    cout << "Please enter the length of side B: ";
    cin  >> dfSideB;
    cin.ignore(1000, '\n');

    //***
    //*** Validate Side B
    //***

   if (dfSideB <= 0)
    {
        cout << "*** INVALID SIDE ENTERED."<< endl;
        cout << "*** PROGRAM IS TERMINATING."<< endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }

    //***
    //*** Prompt the user for length of side C
    //***
    cout << "Please enter the length of side C: ";
    cin  >> dfSideC;
    cin.ignore(1000, '\n');

    //***
    //*** Validate Side C
    //***

   if (dfSideC <= 0)
    {
        cout << "*** INVALID SIDE ENTERED."<< endl;
        cout << "*** PROGRAM IS TERMINATING."<< endl;
        cout << "Press <ENTER> to exit....";
        cin.ignore(1000, '\n');

        return 1;
    }


    //***
    //*** Calculate the perimeter of the triangle
    //***

   dfPerimeter = dfSideA + dfSideB + dfSideC;


    //***
    //*** Calculate the area of the triangle using the formula attributed to
    //*** Heron of Alexandria
    //***

  dfS = (dfPerimeter/2);

  dfArea = sqrt(dfS*(dfS-dfSideA)*(dfS-dfSideB)*(dfS-dfSideC));

    //***
    //*** Output the results
    //***
    cout << endl;
    cout << "Area: " << dfArea << endl;
    cout << "Perimeter: " << dfPerimeter << endl << endl;

    cout << "Press <ENTER> to exit...";
    cin.ignore(1000, '\n');

    return 0;
}
