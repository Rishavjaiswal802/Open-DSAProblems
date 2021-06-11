#include<iostream>
using namespace std;

int main()
{
    int currentSum=0;
    int n;
    cin>>n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int sum;
    cin>>sum;

    int i=0;
    int j=0;

    while(j<n && currentSum+A[j] <= sum )
    {
        currentSum += A[j];
        j++;
    }
    if(currentSum == sum)
    {
        cout<<i<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        currentSum += A[j];
        while(currentSum > sum)
        {
            currentSum -= A[i];
            i++;
        }

        if(currentSum == sum)
        {
            cout<<i<<" "<<j<<endl;
            return 0;
        }
    }
    return 0;
    
}
