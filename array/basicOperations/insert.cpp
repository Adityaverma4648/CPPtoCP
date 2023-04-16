#include<bits/stdc++.h>
using namespace std;

void updateInsertion(int arr[], int n , int ITEM , int POS){
    // update n = n+1
    int j = n;
    n++;
    while(j>=POS){
        arr[j+1] = arr[j];
        j--;
    }
    arr[POS] = ITEM;
    
}

void printArray(int arr[] , int n){
   for (int i = 0; i < n; i++){ 
     cout << arr[i] << '\t';
    }
}

int main(){
    int n, arr[n], ITEM, POS;
    cout << "ENTER SIZE OF ARRAY : " << endl;
    cin >> n;
    cout << "ENTER ARRAY ELEMENT : " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "ENTER ITEM AND POS : " << endl;
    cin >> ITEM >> POS;
    updateInsertion(arr,n,ITEM,POS);
    printArray(arr,n);
    return 0;
}