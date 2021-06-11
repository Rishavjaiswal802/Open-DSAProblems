#include<iostream>
using namespace std;

int main()
{
    int ans= -1;
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    const int N = 1e4 +2;
    bool b[N];

    for(int i=0; i<N; i++)
    {
        b[i] = false;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] >= 0)
        {
            b[a[i]] = true;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(b[i] == false)
        {
            ans = i;
            break;
        
        }
        

    }

    cout<<"Missing Positive Integer is: " << ans << endl;

    return 0;
}