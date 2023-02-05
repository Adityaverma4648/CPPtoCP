#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverseArray(int arr[], int n)
{
    int rarr[n];
    for (int i = 1; i <= n; i++)
    {
        rarr[n - i + 1] = arr[i];
    }
    printArray(rarr, n);
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // int rarr[n];

    //  using minimal function and loops(for)
    // for (int i = 1; i <= n; i++)
    // {
    //     rarr[n - i + 1] = arr[i];
    // }
    // printing the output........
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << rarr[i] << " ";
    // }

    //  block ends-----------------------------------------------------------------------------------------------------------
    // using while loop
    // int j = 0;
    // while (n > 0)
    // {
    //     rarr[n - j] = arr[n];
    //     cout << rarr[n - j] << " ";
    //     j++;
    //     n--;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << rarr[i] << " ";
    // }
    //    block ends--------------------------------------------------------------------------------------------------------------------

    // using functions
    // reverseArray(arr, n);

    // using recursion

    return 0;
}