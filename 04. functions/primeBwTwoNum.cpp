#include <iostream>
#include <math.h>
using namespace std;

bool primeBetween(int  num)
{
    

    for (int i = 2; i<= sqrt(num); i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;   
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    for(int i=num1+1; i<=num2; i++) //i=num1+1 to avoid 1 in the counting and start from 2 as 1 is neither prime nor composite.
    {
        if(primeBetween(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}