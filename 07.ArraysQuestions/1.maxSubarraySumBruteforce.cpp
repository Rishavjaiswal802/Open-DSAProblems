// Time Complexity --> O(n^3)
// bruteforce approach
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
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum =0;
            for(int k=i; k<= j; k++)
            {
                sum += A[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout<< maxSum << endl;
}
