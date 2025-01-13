#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {1, 0, 5, 9, 6, 8};

    // using climits
    //    int maxm = INT_MIN;

    //    for(int i =0 ;i<6;i++){
    //     maxm = max(maxm,arr[i]);
    //    }
    //    cout<< maxm << endl;i

    int maxm = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > maxm)
        {
            maxm = arr[i];
            // cout<< maxm <<endl;
        }
    }
    // cout<< maxm <<endl;
}