#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to be Reversed" << endl;
    cin >> n;

    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = lastDigit + reverse * 10;
        n = n / 10;
    }
    cout << reverse << endl;
    return 0;
}