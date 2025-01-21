#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "fam";
    string s2 = "ily";

    // concatetion using append function
    // s1.append(s2);
    // concatetion  without using append function

    cout << s1 + s2 << endl;

    // use of clear function
    string abc = "duasfgipaEUHALKEIFGHOAIEF FIUGFIUFG";
    cout << abc << endl;
    abc.clear();
    cout << abc << endl;

    // compare function
    string s12 = "abc";
    string s21 = "xyz";
    string s22 = "abc";
    if (s12.compare(s22) == 0)
    {
        cout << " strings are equal" << endl;
    }
    cout << s21.compare(s12) << endl;

    // empty function
    string s11 = "abc";
    s11.clear();
    if (s11.empty())
    {
        cout << " string is empty" << endl;
    }
    // erase function

    string a1 = "nincompoop";
    a1.erase(3, 2);
    cout << a1 << endl;

    //find function use for finding letter
    cout << a1.find("poo")<<endl;

    //insert postion
    cout << a1.insert(3,"lol")<<endl;

    string b1 ="abfiauegfkabiafiq";
    sort(b1.begin(),b1.end());
    cout << b1 <<endl;

}