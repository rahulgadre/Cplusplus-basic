#include <iostream>

using namespace std;

int main()
{
    int nums[5];
    int* pNum = nums;

    for (int i = 0; i < 5; i++)
    {
        nums[i] = (i + 1) * 2;
    }

    cout << "Array starts at: " << nums << endl;

    cout << "pointer points at " << *nums << endl;
    cout << "The first array element is " << nums[0] << endl;

    cout << "The contents of the array are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<  "   " << *(pNum + i) << endl;
    }
    cout << endl << endl;

    for (int i = 0; i < 5; i++)
    {
        cout <<  "   " << pNum[i] << endl;
    }
    return 0;
}
