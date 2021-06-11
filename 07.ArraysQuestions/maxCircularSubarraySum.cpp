#include <iostream>

using namespace std;

int kadane(int arr[], int n)
{
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        totalSum += A[i];
    }

    int nonWrapSum;
    int wrapSum;

    // for nonWrapSum
    nonWrapSum = kadane(A, n);

    // for WrapSum

    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i] * (-1);
    }

    int nonContributer = kadane(B, n) * (-1);

    wrapSum = totalSum - (nonContributer);  // Wrap Sum = Total sum - (Non contributing elemnts)

    // final answer

    int ans = max(wrapSum, nonWrapSum);

    cout << ans << endl;
}