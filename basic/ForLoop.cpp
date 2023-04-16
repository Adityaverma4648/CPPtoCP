#include<bits/stdc++.h>
using namespace std;
int main(){

// QUES1:
//   int n = 10;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cout << "i berfore increment : " << i << endl;
//     cout << "Printer :" << i++ << endl; // prev values are printed
//     ++i;
//     cout << "i :" << i << endl;
//   }
  

// QUES2:  
//   int max = 5;
// 	int i = 0;
// 	for(;;)
// 	{
// 		i++;
// 		if(i> max)
// 			break;
// 		printf("i = %d\n",i);
// 	}
// 	return 0;


//QUES3:
// int i = 5;
// for (; 0 ; i--){
//     cout << i << "\t";
// }

// QUES4:
int c = 5;
int n = 1000;
do{
    n /= c; 
}while(c--);
cout << n << endl;
  return 0;
}