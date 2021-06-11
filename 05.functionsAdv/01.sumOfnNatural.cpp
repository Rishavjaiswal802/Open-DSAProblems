#include <iostream>
using namespace std;
int sumOf(int x)
{
    int sum;
    sum = x * (x + 1) / 2;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = sumOf(n);
    cout << ans << endl;
}