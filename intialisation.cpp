#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // intialisation of aaray
    int arr[n];

    // for taking input from user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for displaying the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}