// Move all the negative elements to one side of the array

#include <bits/stdc++.h>
using namespace std;

void negElementLeftAlign(int n, int arr[])
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {

            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    negElementLeftAlign(n, arr);
    printArray(arr, n);
    return 0;
}