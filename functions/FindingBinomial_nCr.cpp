#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int result = 1;
    while (n > 0)
    {
        result = result * n;
        n = n - 1;
    }
    return result;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << (factorial(n) / (factorial(n - r) * factorial(r)));
    return 0;
}