#include <iostream>
using namespace std;

bool powerOf2orNot(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    cout << powerOf2orNot(16) << endl;
}