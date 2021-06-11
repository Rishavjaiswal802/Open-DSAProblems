#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    int ans=2;
    int current=2;
    int j=2;
    int prevDiff = a[1] - a[0];

    while(j<n)
    {
        if(prevDiff == a[j] - a[j-1])
        {
            current += 1;

        }
        else{
            prevDiff = a[j] - a[j-1];
            current = 2;
        }
        ans = max(ans,current);
        j++;
    }
    

    cout<<ans<<endl;


}