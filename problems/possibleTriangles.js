function checkTriangle(arr){
    let count= 0;
  
    for (let i = 0; i < arr.length-2; i++) {
        for (let j = i+1; j < arr.length-1; j++) {
             for (let k = j+1; k < arr.length; k++) {
                if (arr[i] + arr[j] > arr[k]
                    && arr[i] + arr[k] > arr[j]
                    && arr[k] + arr[j] > arr[i])
                    count++;
             }
        }
    }
     return count;
}

let arr = [4, 6, 3, 7];
let arr1 = [10, 21, 22, 100, 101, 200, 300];

console.log(checkTriangle(arr));
console.log(checkTriangle(arr1));
