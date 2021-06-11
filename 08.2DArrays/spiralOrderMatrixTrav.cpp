#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int row=0; row<n; row++)
    {
        for(int column=0; column<m; column++)
        {
            cin>>arr[row][column];
        }
    }

    int rStart=0, rEnd=n-1; //for Rows
    int cStart=0, cEnd=n-1; //for columns

    while(rStart<=rEnd && cStart<=cEnd)
    {
        for(int column=cStart; column<=cEnd; column++)
        {
            cout<<arr[rStart][column];
        }
        rStart++;

        for(int row=rStart; row<=rEnd; row++)
        {
            cout<<arr[row][cEnd];
        }
        cEnd--;

        for(int column=cEnd; column>=cStart; column--)
        {
            cout<<arr[rEnd][column];

        }
        rEnd--;

        for(int row=rEnd; row>=rStart; row--)
        {
            cout<<arr[row][cStart];
        }
        cStart++;
    }

return 0;

}
