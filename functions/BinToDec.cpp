#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int y = n%10;  // gets last digit of binary every iteration

        ans += x*y;

        x = x*2;  // every iteration power of 2 increases 

        n /=10;   //removes last digit every iteration till n > 0 
    }
    return ans;
}

int main(){
 
 int n;
 cin >> n;

 cout << binaryToDecimal(n) << endl;


return 0;
}