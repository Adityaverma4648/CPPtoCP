function swap(arr , a,b){
    let temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

function wave(arr){
    for (let i = 0; i < arr.length; i+=2) {
       console.log(i);
    //    a > b - implemented 
       if(i>0 && arr[i-1] >= arr[i]){
            swap(arr , i-1 , i);
       }
    // b < c 
       if(i<arr.length-1 && arr[i] < arr[i+1] ){
            swap(arr , i , i+1);
       }
    }

    return arr;
}

let arr =[10, 5, 6, 3, 2, 20, 100, 80];

console.log(wave(arr));