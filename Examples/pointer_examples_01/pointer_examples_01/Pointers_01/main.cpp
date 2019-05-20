#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    int* pX;
    int* pY;

    pX = &x;
    pY = &y;

    cout << "x lives at " << pX << endl;
    cout << "y lives at " << pY << endl;
    cout << "Address of x is STORED at: " << &pX << endl;
    cout << "Address of y is STORED at: " << &pY << endl;
    return 0;
}
