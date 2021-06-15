#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorKey = 0;
    for (int i = 0; i < n; i++)
    {
        xorKey = xorKey ^ arr[i];
    }
    int tempXorKey = xorKey;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = tempXorKey & 1;
        pos++;
        tempXorKey = tempXorKey >> 1;
    }

    int firstXorNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            firstXorNum = firstXorNum ^ arr[i];
        }
    }

    cout << "first unique num is: " << firstXorNum << endl;
    cout << "Second unique num is: " << (firstXorNum ^ xorKey) << endl;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 8, 5, 6, 1, 3};
    unique(arr, 10);
}