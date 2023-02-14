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

void deletion(int arr[], int n, int k)
{
    int j = n;
    n--;
    while (j > k) // 5,2| 5,4,3,2 || 1,2,3,4,5
    {
        arr[k - 1] = arr[k];
        k++;
    }
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
    int k;
    cout << "Enter position to be removed" << endl;
    cin >> k;

    //  function calling
    deletion(arr, n, k);
    return 0;
}