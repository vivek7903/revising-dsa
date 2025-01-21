#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "ajvuyeae";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    string str = "JEHVDLEFWU";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}