#include <bits/stdc++.h>
using namespace std;
bool tripletChecker(int x, int y, int z)
{
    if ((pow(x, 2) + pow(y, 2)) == pow(z, 2))
        return true;
    else
        return false;
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (tripletChecker(x, y, z))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}