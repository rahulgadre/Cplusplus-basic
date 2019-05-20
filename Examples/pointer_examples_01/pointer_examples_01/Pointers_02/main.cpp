#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    int* pX;
    int* pY;

    x = 10;
    y = 5;

    pX = &x;
    pY = &y;



    cout << "pX points at an address that contains " << *pX << endl;
    cout << "pY points at an address that contains " << *pY << endl;

    *pX = *pX * 2;
    y = y + 10;

    cout << "pX points at an address that contains " << *pX << endl;
    cout << "pY points at an address that contains " << *pY << endl;

    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    return 0;
}
