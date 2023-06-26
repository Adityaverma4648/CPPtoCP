function rotation(arr , d){
    
    //  temp variable
    while(d > 0){
        var start = arr[0];
       for (let i = 0; i < arr.length-1; i++) {
           arr[i] = arr[i+1];
       }

    //     updating to arr
       arr[arr.length-1] = start;
       d--;
    } 
   return arr;
}

let arr = [1, 2, 3, 4, 5, 6, 7];

console.log(rotation(arr , 2));