#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}