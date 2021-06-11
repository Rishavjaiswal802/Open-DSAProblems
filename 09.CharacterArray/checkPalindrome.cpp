#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;

    bool flag = true;

    for (int i = 0; i <= (n / 2); i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = false;
            break;
        }

        else
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << "It is a Palindrome!";
    }

    else
    {
        cout << "Its is not a Palindrome!";
    }

    return 0;
}