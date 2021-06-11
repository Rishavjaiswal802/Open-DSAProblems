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

int ncrOf(int N, int R)
{
    int nCr=1;
    nCr=(factorialOf(N))/((factorialOf(N-R))*(factorialOf(R)));
    return nCr;
}

int main(){
    int n, r;
    cin>>n>>r;
    int soln = ncrOf(n, r);
    cout<<soln<<"\n";
}
