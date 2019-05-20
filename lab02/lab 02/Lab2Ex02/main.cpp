//**************************************************************************
//*** PROGRAM:             Lab2Ex02                                      ***
//***                                                                    ***
//*** PURPOSE:             Laboratory Exercise 2 for ISTE100             ***
//***                                                                    ***
//*** WRITTEN BY:          Alec Berenbaum                                ***
//***                                                                    ***
//*** DESCRIPTION:         This program uses integer division and mod    ***
//***                      operation to determine the minimal number of  ***
//***                      coins needed to represent a certain amount of ***
//***                      change.                                       ***
//**************************************************************************
#include <iostream>

//**************************************************************************
//*** Constant Declarations                                              ***
//**************************************************************************
const int   CENTS_IN_DOLLAR         =   100;
const int   CENTS_IN_QUARTER        =   25;
const int   CENTS_IN_DIME           =   10;
const int   CENTS_IN_NICKEL         =   5;

using namespace std;
//**************************************************************************
//*** MAIN FUNCTION                                                      ***
//**************************************************************************
int main()
{
    //***
    //*** Variables to represent input amounts
    //***
    int    iDollars;                // Dollar amount
    int    iCents;                  // Cent amount

    //***
    //*** Variables to represent resulting amounts
    //***
    int    iQuarters;               // Number of quarters
    int    iDimes;                  // Number of dimes
    int    iNickels;                // Number of nickels
    int    iPennies;                // Number of pennies

    //***
    //*** Variables for intermediate calculations
    //***
    int    iTotalCentAmount;        // Total cent amount entered
    int    iCentsLeftOver;          // Cents left over


    //***
    //*** Prompt the user for the dollar and cent amounts
    //***
    cout << "Please enter the dollar amount:              ";
    cin  >> iDollars;
    cout << "Please enter the cent amount:                ";
    cin  >> iCents;

    //***
    //*** Calculate the total cent amount entered and inform the user.
    //***
    iTotalCentAmount = iDollars * CENTS_IN_DOLLAR + iCents;
    cout << endl << "You have entered " << iCents << " cents, which consists of:" << endl;

    //***
    //*** Start with cents left over, which equals to iTotalCentAmount
    //***
    iCentsLeftOver = iTotalCentAmount;

    //***
    //*** Calculate the number of quarters and what's left over.
    //***
    iQuarters = iCentsLeftOver / CENTS_IN_QUARTER;
    iCentsLeftOver = iCentsLeftOver % CENTS_IN_QUARTER;


    //*****************************************************************************
    //*** ADD THE CODE HERE TO CALCULATE NUMBER OF DIMES, NUMBER OF NICKELS, and***
    //*** NUMBER OF PENNIES NEEDED.                                             ***
    //*****************************************************************************

    //***
    //*** Output results
    //***


    //*****************************************************************************
    //*** ADD THE CODE HERE TO OUTPUT THE RESULTS AS SHOWN IN THE SAMPLE SCREEN ***
    //*** SHOT.                                                                 ***
    //*****************************************************************************


    cout << endl << endl;
    cout << "Press <ENTER> to exit...";
    cin.ignore(1000, '\n');

    return 0;
}
