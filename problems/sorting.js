
function swap(arr , a ,b){
    let temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


function sort(arr){
     for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length; j++) {
            console.log(i,j);
            if(arr[i] < arr[j]){
                swap(arr , i , j)
            }
        }
     }

     return arr;
}

let arr= [10, 7, 9, 2, 8, 3, 5, 4, 6, 1];

console.log(sort(arr));