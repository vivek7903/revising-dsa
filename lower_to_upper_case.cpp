#include <iostream>
using namespace std;

int main()
{
    string str = "sdjafujga";
    string str2 = "HSGISULGF";

    // converting lower case to upper case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // Converting upper case to lower case
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
    }
    cout << str2 << endl;
}