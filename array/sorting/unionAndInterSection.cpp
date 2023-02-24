#include <bits/stdc++.h>
using namespace std;

void UnionFun(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
    {
        cout << arr1[i] << " ";
        // i++;
    }
    while (j < n)
    {
        cout << arr2[j] << " ";
        // j++;
    }
}

int main()
{
    int n, m, arr1[n], arr2[m];
    cout << "Enter n and m respectively" << endl;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    //  function calling
    UnionFun(arr1, arr2, n, m);
    return 0;
}