#include<iostream> 
using namespace std;

int unique(int arr[], int n){
    int xorKey = 0;
    for(int i=0; i<n; i++)
    {
        xorKey = xorKey ^ arr[i];
    }
    return xorKey;
}

int main()
{
    int arr[]={1, 3, 5 , 3, 1, 8, 8};
    cout<<unique(arr, 7);
}