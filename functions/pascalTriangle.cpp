// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int factorial = 1;
    while (n > 0)
    {
        factorial *= n;
        n -= 1;
    }
    return factorial;
}
int ncr(int n, int r)
{
    return ((factorial(n) / (factorial(n - r) * factorial(r))));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}