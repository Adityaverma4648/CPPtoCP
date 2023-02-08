#include <bits/stdc++.h>
using namespace std;

struct KthMaxAndMin
{
    int max;
    int min;
};

void sortAccending(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
KthMaxAndMin getKthMinMax(int arr[], int n, int k)
{
    struct KthMaxAndMin minmax;
    int i;

    // when n == 1
    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
    }
    //  lets sort the array in ascending order
    sortAccending(arr, n);
    minmax.min = arr[k];
    minmax.max = arr[k];
    cout << minmax.min << " " << minmax.max << endl;
    return minmax;
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
    cout << "Enter Position" << endl;
    cin >> k;

    struct KthMaxAndMin minmax = getKthMinMax(arr, n, k);
    return 0;
}