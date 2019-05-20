#include <iostream>
#include "getInteger.h"

using namespace std;

int main()
{
    int iNum;

    cout << "Please enter an integer: ";
    iNum = getInteger();

    cout << "You have entered " << iNum << endl;

    return 0;
}
