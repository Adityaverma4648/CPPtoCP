#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n){
   for (int i = 0; i < n; i++){
     cout << arr[i] << '\t';
   }
}

void deleteArrayElement(int arr[], int n , int POS){
   int j = n;
   n--;
   while(j > POS){
      arr[ POS - 1 ] = arr[POS];
      POS++;
   }
   printArray(arr, n);
}

int main(){
    int n , arr[n] ,POS;
    cout << "ENTER SIZE OF ARRAY : " << endl;
    cin >> n;
    cout << "ENTER ELEMENT OF ARRAY : " << endl;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "ENTER POS : " << endl;
    cin >> POS;
    //  delete item at pos;

    deleteArrayElement(arr, n , POS);
  return 0;
}