#include <iostream>

using namespace std;

const int INC_SIZE = 3;

int main()
{

    int* values = new int[INC_SIZE];
    int  iCount = 0;
    int  iCurrentSize = INC_SIZE;
    int  iVal;

    cout << "Please enter a value " << (iCount + 1) << ": ";
    cin  >> iVal;

    while (iVal >= 0)
    {
        if (iCount >= iCurrentSize)
        {
            cout << "Resizing array from " << iCurrentSize << " to " << iCurrentSize + INC_SIZE << endl;
            int* tmp = new int[iCurrentSize + INC_SIZE];
            for (int i = 0; i < iCurrentSize; i++)
            {
                tmp[i] = values[i];
            }
            delete[] values;
            values = tmp;
            iCurrentSize = iCurrentSize + INC_SIZE;
        }

        values[iCount] = iVal;
        iCount++;
        cout << "Please enter a value " << (iCount + 1) << ": ";
        cin  >> iVal;
    }

    cout << endl << endl;
    cout << iCount << " values were entered: " << endl;
    for (int i = 0; i < iCount; i++)
    {
        cout << values[i] << endl;
    }

    cout << endl;

    delete[] values;

    return 0;
}
