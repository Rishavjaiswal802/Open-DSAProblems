#include <iostream>
using namespace std;

int main()
{

    int orgNum, num, armCheck = 0, rem, len = 0;
    cin >> orgNum;

    num = orgNum;
    while (num > 0)
    {
        num = num / 10;
        len++; // gives no. of digits in the integer
    }

    num = orgNum;
    while (num > 0)
    {
        rem = num % 10;
        armCheck = armCheck + pow(rem, len);
        num = num / 10;
    }

    if (armCheck == orgNum)
    {
        cout << "Yes, It's an Armstrong Number\n";
    }
    else
    {
        cout << "No, It's not an Armstrong Number\n";
    }
}