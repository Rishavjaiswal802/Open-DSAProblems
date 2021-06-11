#include<iostream>
using namespace std;

void fibonacciSeries(int x)
{
    int a=0,b=1,next=0;

    cout<<a<<" ";
    cout<<b<<" ";

    for(int i=1; i<=x-2; i++){
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    fibonacciSeries(n);
}