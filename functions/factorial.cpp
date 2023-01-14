#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    //  im a baka
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
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}