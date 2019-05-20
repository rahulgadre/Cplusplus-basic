
#include <iostream>
#include "getInteger.h"

using namespace std;

int getInteger()
{
    int iNumber = 0;            // Return value
    char cCharacter;            // Character read
    int iDigit;

    cin.get(cCharacter);        // Read character
    //***
    //*** Keep reading until new line is entered
    //***
    while (cCharacter != '\n')
    {
        //***
        //*** Accumulate digits; ignore others
        //***
        if ((cCharacter >= '0') && (cCharacter <= '9'))
        {
            iNumber = iNumber * 10;
            iDigit = static_cast<int>(cCharacter - '0');
            iNumber = iNumber + iDigit;
        }
        cin.get(cCharacter);
    }

    //***
    //*** Done - return value
    //***
    return iNumber;
}
