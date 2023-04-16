#include<bits/stdc++.h>
using namespace std;

void leftRotation(int arr[] , int n){
    int temp = arr[0];
    cout << "ARR[0] : " << arr[0] << endl;
    for (int i = 0; i < n; i++){
         arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void printArray(int arr[] , int n){
   for (int i = 0; i < n; i++){
      cout << arr[i] << "\t";
   }
}

int main(){
   int n, arr[n];
   cout << "ENTER THE SIZE :" << endl;
   cin >> n;
   cout << "ENTER ARRAY :" << endl;
   for (int i = 0; i < n; i++){
      cin >> arr[i];
   }
//    calling functions
   leftRotation(arr,n);
//    printing the resulting Array
   printArray(arr,n);
   
   return 0;
}