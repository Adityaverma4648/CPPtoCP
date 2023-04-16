#include<bits/stdc++.h>
using namespace std;

void rightRotation(int arr[] , int n){
    int temp = arr[n-1];
    for (int i = n-1; i >= 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

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
   rightRotation(arr,n);
//    printing the resulting Array
   printArray(arr,n);

  return 0;
}