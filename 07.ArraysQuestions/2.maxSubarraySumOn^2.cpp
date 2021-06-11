// Time Complexity ----> O(n^2)

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
    
    int cummiSum[n+1];
    cummiSum[0] = 0;

    for(int i=1; i<n+1; i++)
    {
        cummiSum[i] = cummiSum[i-1] + A[i-1];
    }

    int maxSum = INT_MIN;

    for(int i=1; i<n+1; i++)
    {
        int currSum=0;
        for(int j=0; j<i; j++)
        {
            currSum = cummiSum[i] - cummiSum[j];
            maxSum = max(maxSum,currSum);
        }
    }

    cout<<maxSum<<endl;
}
