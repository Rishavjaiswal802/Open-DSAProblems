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

int pascalTriangle(int x)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ncrOf(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pascalTriangle(n);

}
