#include <iostream>
using namespace std;

int factorialOf(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    int soln = factorialOf(n);
    cout << soln << "\n";
}