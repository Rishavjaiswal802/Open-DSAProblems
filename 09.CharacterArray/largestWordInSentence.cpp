#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); //to clear input buffer

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore(); //to clear buffer

    int i = 0;

    int maxLength = 0;
    int presentLength = 0;
    int wordBreak = 0;
    int maxWordBreak = 0;

    while (true)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (maxLength < presentLength)
            {
                maxLength = presentLength;
                maxWordBreak = wordBreak;
            }
            presentLength = 0;
            wordBreak = i + 1;
        }
        else
        {
            presentLength++;
        }

        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << "The length of the largest word is: " << maxLength << endl;
    cout << "The Word is: ";
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[maxWordBreak + i];
    }

    return 0;
}