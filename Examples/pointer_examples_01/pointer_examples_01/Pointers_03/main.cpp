#include <iostream>

using namespace std;

int main()
{

    int x = 4;
    int y = 2;
    int z;

    int* pX = &x;
    int* pY = &y;

    cout << "X lives at " << pX << endl;
    cout << "Y lives at " << pY << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    *(pX + 1) = 100;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << "(pX + 1) = " << (pX + 1)  << endl;

    return 0;
}
