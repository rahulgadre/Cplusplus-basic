//**************************************************************************
//*** PROGRAM:             Lab2Ex03                                      ***
//***                                                                    ***
//*** PURPOSE:             Laboratory Exercise 3 for ISTE100             ***
//***                                                                    ***
//*** WRITTEN BY:          Alec Berenbaum                                ***
//***                                                                    ***
//*** DESCRIPTION:         Program to find the total current in the      ***
//***                      circuit with three resistors and given voltage***
//***                      output of the DC power supply.                ***
//**************************************************************************
#include <iostream>

using namespace std;

//**************************************************************************
//*** Constant Declarations                                              ***
//**************************************************************************
int main()
{
    //***
    //*** Input variables
    //***
    double dfVDC;                   // VDC Power Supply output
    double dfR1, dfR2, dfR3;        // Resistors R1, R2, R3

    //***
    //*** Intermediate results variables
    //***
    double dfTotalResistance;       // Total Resistance

    //***
    //*** Total current
    //***
    double dfTotalCurrent;

    //***
    //*** Prompt the user for VDC and three resistor
    //***
    cout << "Please enter VDC:     ";
    cin  >> dfVDC;

    cout << "Please enter R1:      ";
    cin  >> dfR1;
    cout << "Please enter R2:      ";
    cin  >> dfR2;
    cout << "Please enter R3:      ";
    cin  >> dfR3;
    cin.ignore(1000, '\n');

    //***
    //*** Perform for SERIES circuit
    //***
    cout << endl << endl;
    cout << "For SERIES circuit: " << endl;

    //****************************************************************************
    //*** Insert the code to calculate the total resistance for resistors      ***
    //*** connected in SERIES and the total current of the circuit.            ***
    //****************************************************************************

    //***
    //*** Output TOTAL RESISTANCE (SERIES)
    //***
    cout << "   Total Resistance is:  " << dfTotalResistance << " ohms" << endl;
    cout << "   Total Current is:     " << dfTotalCurrent    << " amps" << endl;
    cout << endl;

    cout << endl << "Press <ENTER> to continue...";
    cin.ignore(1000, '\n');


    //****************************************************************************
    //*** Insert the code to calculate the total resistance for resistors      ***
    //*** connected in PARALLEL and the total current of the circuit.          ***
    //*** Also insert the code to output the TOTAL RESISTANCE and teh TOTAL    ***
    //*** CURRENT.                                                             ***
    //****************************************************************************

    cout << endl << "Press <ENTER> to exit...";
    cin.ignore(1000, '\n');

    cout << endl << endl;

    return 0;
}
