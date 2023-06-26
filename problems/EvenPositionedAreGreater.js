

function greater(arr){
     for (let i = 0; i < arr.length; i++) {
          if(i%2 === 0){
               if(arr[i] > arr[i-1]){
                  let temp = arr[i];
                  arr[i] = arr[i-1];
                  arr[i-1] = temp;
               }
          }else{
               if(arr[i-1] > arr[i]){
                  let temp = arr[i-1];
                  arr[i-1] = arr[i];
                  arr[i] = temp;
               }
          }
        
     }

     return arr;
}
let arr  =[ 1, 2, 2, 1];
let arr1  =[ 1, 2, 3];


console.log(greater(arr));
console.log(greater(arr1));
