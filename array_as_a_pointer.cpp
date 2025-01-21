#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl; // it will point to first element of the array

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr+i) << endl;
        // ptr++;
    }
}