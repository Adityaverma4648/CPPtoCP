function segregate(arr){

    let ans = [];

     for (let i = 0; i < arr.length; i++) {
        if(arr[i]%2 === 0){
             ans.push(arr[i]);
        }
     }
     for (let i = 0; i < arr.length; i++) {
        if(arr[i]%2 != 0){
             ans.push(arr[i]);
        }
     }

     return ans;
}

let arr=[1, 9, 5, 3, 2, 6, 7, 11];

console.log(segregate(arr));