#include<iostream>
using namespace std;
 int main()
 {
     int n1, n2, n3;
     cin>>n1>>n2>>n3;

     int a[n1][n2];
     int b[n2][n3];
     int c[n1][n3];

     for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cin>>b[i][j];
        }
    }
     for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            c[i][j] = 0;
        }
    }

    for(int i = 0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            for(int k= 0; k<n2; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
 }