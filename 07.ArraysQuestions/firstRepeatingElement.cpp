#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    const int N = 1e4 +2;

    int B[N];
    for(int i=0; i<N; i++)
    {
        B[i] = -1;
    }

    int minIndex = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(B[A[i]] == -1)
        {
            B[A[i]] = i;
        }
        else
        {
            minIndex = min(minIndex, B[A[i]]);
        }
        

    }

    if(minIndex == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<< "Index of the first repeating element is: " << minIndex << endl;
    }

    
}
