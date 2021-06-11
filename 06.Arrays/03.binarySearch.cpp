//Time Complexity = O(log n base 2)
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size;
    

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(key == arr[mid]){
            return mid;
        }

        else if(key < arr[mid])
        {
            end = mid-1;
        }

        else{
            start = mid+1;
        }
    }
    return -1;

}
int main()
{
    int size;
    cin >> size;

    int arr[size];

    //Enter the Array in Sorted manner
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(arr, size, key) << endl;
}
