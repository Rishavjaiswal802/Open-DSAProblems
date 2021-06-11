#include<iostream>
using namespace std;

void possibleSubsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){ ///1<<n gives 2^n
        for(int j=0; j<n; j++){ 
            if(i & (1<<j)){ //checking set bits
                cout<<arr[j]<<" ";
            }

        }
        cout<<endl;
    }
}
int main(){
    int arr[4] = {1,2,3,4};
    possibleSubsets(arr, 4);

}