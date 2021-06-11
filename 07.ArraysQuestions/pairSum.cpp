// Bruteforce approach is to find the sum of all pairs and then compare it to the search key.
// This is done in O (n^2).
// But in this approach we will do it in O(n) provide that the array is sorted.

#include <iostream>

using namespace std;

bool pairSum(int arr[], int n, int sumKey)
{
    int low = 0;
    int high = n-1;
    int sum=0;
    while(low<high){
        sum = arr[low] + arr[high];
        if(sum == sumKey)
        {
            cout<<low<<" "<< high<< endl;
            return true;

        }
        else if(sum < sumKey)
        {
            low++;
        }
        else
        {
            high--;
        }

    }
    return false; 
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    cout<<"ENTER SORTED ARRAY"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int k;
    cin>>k;
    pairSum(A,n,k);
}