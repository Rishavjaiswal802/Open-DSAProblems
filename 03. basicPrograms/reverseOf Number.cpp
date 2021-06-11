#include <iostream>
using namespace std;

int main()
{
    int num, newNum = 0, rem;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        newNum = newNum * 10 + rem;
        num = num / 10;
    }
    cout << newNum << "\n";
}