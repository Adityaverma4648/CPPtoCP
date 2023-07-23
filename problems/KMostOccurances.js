arr = [3, 1, 4, 4, 5, 2, 6, 1];
arr1 = [7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9];
function countOccurances(arr , element){
    let mp = new Map();
 
    for (let i = 0; i < arr.length; i++) {

        if (mp.has(arr[i])) {
            mp.set(arr[i], mp.get(arr[i]) + 1)
        } else {
            mp.set(arr[i], 1)
        }
    }
   let list = [...mp]
   list.sort((a,b)=>{
    if(a[1] == b[1]){
        return b[0]-a[0]
    }else{
        return b[1]-a[1];
    }
   })
   
   for (let i = 0; i < element; i++) {
        console.log(list[i][0]);
   }
   return;
}

console.log(countOccurances(arr, 2)); 
console.log(countOccurances(arr1, 4)); 
