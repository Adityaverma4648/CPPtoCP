#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check prime";
    cin >> n;
    int flag = 0;
    for (int i = 2; i < sqrt(n); i++) // saves searching tym
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag)
        cout << "prime number" << endl;
    else
        cout << "Not a prime number" << endl;
    return 0;
}
