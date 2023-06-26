#include<bits/stdc++.h>
using namespace std;

bool tripletVerifier(int x , int y, int z){
        int b,c,a = max(x,max(y,z));
        if(a == x){
              b = y;
              c = z;
        }else if (a == y) {
              b  = x;
              c  = z; 
        }else{
           b = x;
           c = y;
        }
        if((a*a) == ((b*b)+(c*c))){
              return true;
        }else{
            return false;
        }
}

int main(){
 
   int x,y,z;
   cin >> x >> y >> z;

   if(tripletVerifier(x,y,z)){
        cout << "Yes" << endl;
   }else{
        cout << "No" << endl;
   }
 
  return 0;
}