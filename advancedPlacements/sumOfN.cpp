#include <bits./stdc++.h>
using namespace std;
int mySum(int n)
{
    int sum = 0;
    // while (n > 0)
    // {
    //     sum += n;
    //     n -= 1;
    // }

    return (n * (n + 1)) / 2;
}

int main()
{
    int n;
    cin >> n;
    cout << mySum(n);
    return 0;
}