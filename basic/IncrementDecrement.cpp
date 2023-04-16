#include<bits/stdc++.h>
using namespace std;
int main(){
   int i = 4, a = ++i;
   cout << "i : " << i << endl;
   cout << "a : " << a << endl;
//     at post incremnt the prev value are used a = 4

//     at pre increment the prev value are used a = 5 

    int a1 , b = 1;
    a1 = 10;
    if(++a1){
      cout << "b :" << b << endl;
    }else{
      cout << "++b :" << ++b << endl;
    }

    int a2 = 1,b2 = 1;
    if(a2-- > 0 || ++b2 > 2)  // postdecremnt  OR preIncrement 
        cout << "true" << endl;// T OR F => T
    else
        cout << "false" << endl;

   int number = 3;
   cout << (25*(++number)) << endl;

   
   return 0;
}