#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "84973";

    // using swap function
    //  for (int i = 0; i < str.length() - 1; i++)
    //  {
    //      for (int j = i + 1; j < str.length(); j++)
    //      {
    //          if (str[j] > str[i])
    //          {
    //              swap(str[i], str[j]);
    //          }
    //      }
    //  }

    // using string function
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
}