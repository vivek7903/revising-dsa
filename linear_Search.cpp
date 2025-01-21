// if the elements of the array is sorted
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    bool found = false;
    int r = 0, c = m - 1;
    while (r < n and c >= 0)
    {
        if (arr[r][c] == key)
        {
            found = true;
        }
        if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << " element is present ";
    }
    else
    {
        cout << " element is not present";
    }
}