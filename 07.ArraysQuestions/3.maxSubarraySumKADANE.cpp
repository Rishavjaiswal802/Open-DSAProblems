// Time Complexity --> O(n)
// optimised solution
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

    int sum=0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {       
        sum = sum + A[i];

        if(sum<0){
            sum = 0;
        }
        maxSum = max(sum, maxSum);
        
    }

    cout<< maxSum <<endl;

}