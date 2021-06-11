#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        freq[s[i] - 'a']++;
    }

    int maxFreq = 0;
    char freqChar = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            freqChar = 'a' + i;
        }
    }

    cout << maxFreq << " " << freqChar << endl;
}