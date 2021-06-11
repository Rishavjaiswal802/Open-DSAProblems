#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1];
    a[n] = -1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    int maxOfPrev = -1;
    int ans=0;
    

    for(int i=0; i<n; i++)
    {
       

        if(a[i] > maxOfPrev && a[i]>a[i+1])
        {
            ans++;
        }
        maxOfPrev = max(a[i], maxOfPrev);
    }
    cout<<ans<<endl;
}