#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion(int arr[], int n, int k, int item)
{
    int j = n;
    n = n + 1;
    cout << "array after increment of n" << endl;
    printArray(arr, n);
    while (j >= k)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    cout << "array after increasing the array by one" << endl;
    printArray(arr, n);

    arr[k] = item;
    cout << "array after complete insertion" << endl;
    printArray(arr, n);
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position and item respectively" << endl;
    int k, item;
    cin >> k >> item;
    //  inputs are taken...
    insertion(arr, n, k, item);
    return 0;
}