//**************************************************************************
//*** PROGRAM:             Lab2Ex01                                      ***
//***                                                                    ***
//*** PURPOSE:             Laboratory Exercise 2 for ISTE100             ***
//***                                                                    ***
//*** WRITTEN BY:          Alec Berenbaum                                ***
//***                                                                    ***
//*** DESCRIPTION:         This program is used to illustrate the use of ***
//***                      namespaces.                                   ***
//**************************************************************************
#include <iostream>
#include <string>

//using namespace std;

//**************************************************************************
//*** MAIN FUNCTION                                                      ***
//**************************************************************************

int main()
{
    //***
    //*** Declaration of variables
    //***
  std::string sFirstName;                      // First Name
    char   cMiddleInitial;                  // Middle initial
  std::string sLastName;                       // Last Name

    //***
    //*** Prompt the user for his/her name in components.
    //***
   std::cout << "Please enter your FIRST NAME:     ";
    getline(std::cin, sFirstName);

    std::cout << "Please enter your MIDDLE INITIAL: ";
    std::cin  >> cMiddleInitial;
    std::cin.ignore(1000, '\n');

    std::cout << "Please enter your LAST NAME:      ";
    getline(std::cin, sLastName);

    //***
    //*** Output the Formal Name.
    //***
    std::cout << std::endl << "Your FORMAL NAME is:              " << sLastName << ", "
         << sFirstName << "  " << cMiddleInitial << "."  << std::endl << std::endl;

    //***
    //*** PAUSE PROGRAM
    //***
    std::cout << "Press <ENTER> to exit...";
    std::cin.ignore(1000, '\n');


    return 0;
}
