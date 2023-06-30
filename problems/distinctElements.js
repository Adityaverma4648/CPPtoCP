function distinctElement(arr){
    for (let i = 0; i < arr.length-1; i++) {
        for (let j = 0; j < i; j++) {
            console.log(arr[i] , arr[j]);
            if(arr[i] == arr[j] ){
               break;
            }
            
        }        
    }
}

let arr = [12, 10, 9, 45, 2, 10, 10, 45];

console.log(distinctElement(arr));