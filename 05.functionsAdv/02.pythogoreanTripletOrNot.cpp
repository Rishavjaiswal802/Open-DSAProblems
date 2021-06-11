#include <iostream>
using namespace std;
int maxOf(int p, int q, int r)
{
    int biggest = (p > q && p > r) ? p : (q > r ? q : r);
    return biggest;
}
bool isTriplet(int x, int y, int z)
{
    int max = maxOf(x, y, z);

    if (2 * pow(max, 2) == pow(x, 2) + pow(y, 2) + pow(z, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (isTriplet(a, b, c))
    {
        cout << "Yes, It's a triplet" << endl;
    }
    else
    {
        cout << "No, It's not a triplet" << endl;
    }
}