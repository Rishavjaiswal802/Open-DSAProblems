#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    for(int i=0; i<size; i++)
    {
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum,arr[i]);
    }

    cout<<"Maximum is:"<<maxNum<<" AND "<< "Minimum is:"<<minNum<<endl;

}
