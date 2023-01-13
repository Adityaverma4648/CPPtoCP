#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check for Armstrong" << endl;
    cin >> n;
    int original = n;

    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == original)
        cout << "It is an Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}