#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string greet;
    
    void getter(string greet){
       this->greet = greet;
    }
    
    void printGreet(){
       cout << greet << endl;
    }
    
};

int main(){
  string input;
  cin >> input;
//    took greet as input 
  Solution obj;  
  obj.getter(input);
  
  return 0;
}