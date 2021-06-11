// Given: n*m matrix with sorted rows and columns.
// Bruteforce : Search each element of the matrix for the search key with complexity O(nm).

// Optimal: Start from top-right or bottom-left element and follow for lesser or greater in one direction.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    int searchKey;
    cin >> searchKey;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    bool flag = false;
    int I = 0;
    int J = m - 1;

    while (I < n and J >= 0)
    {
        if (a[I][J] == searchKey)
        {
            flag = true;
        }

        if (a[I][J] > searchKey)
            J--;

        else
            I++;
    }

    if (flag == true)
    {
        cout << "Element Present!";
    }

    else
    {
        cout << "Element not present!";
    }
}