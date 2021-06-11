#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // MyApproach
    // sort(s.begin(), s.end());
    // reverse(s.begin(), s.end());

    sort(s.begin(), s.end(), greater<int>());

    cout << s;
}