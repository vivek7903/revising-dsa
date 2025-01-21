#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str = "abcacbade";

    int freq[26];
    // intialize an array with size 26 and elemwnt 0
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    // fill the array
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    int maxLen = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxLen)
        {
            maxLen = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxLen << " " << ans << endl;
}