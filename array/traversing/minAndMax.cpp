#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};
Pair getMinMax(int arr[], int n)
{
    struct Pair minMax;
    int i;
    //  when n  == 1
    if (n == 1)
    {
        minMax.max = arr[0];
        minMax.min = arr[0];
        return minMax;
    }
    //  when  n > 1
    if (arr[0] > arr[1])
    {
        minMax.max = arr[0];
        minMax.min = arr[1];
    }
    else
    {
        minMax.max = arr[1];
        minMax.min = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minMax.max)
        {
            minMax.max = arr[i];
        }
        else if (minMax.min > arr[i])
        {
            minMax.min = arr[i];
        }
    }
    return minMax;
}
int main()
{
    int n, arr[n];
    //  inputs----------------------
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // ------------------------------
    struct Pair minMax = getMinMax(arr, n);
    cout << minMax.max << " " << minMax.min << endl;

    return 0;
}