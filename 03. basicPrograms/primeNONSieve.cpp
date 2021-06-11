#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, flag=0;
    cin>>n;

    for(int i=1; i<=n/2; i++ ){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==1){
        cout<<"no. is Prime\n";
    }
    else{
        cout<<"no. is not Prime";

    }
}