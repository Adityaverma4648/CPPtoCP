arr = [2, 3, 5, 4, 5, 3, 4];

function countOccurances(arr){
   var mp = new Map();
   for (let i = 0; i < arr.length; i++) {
    if (mp.has(arr[i])) {
        mp.set(arr[i], mp.get(arr[i]) + 1)
    } else {
        mp.set(arr[i], 1)
    }
    let list = [...mp]
    for (let i = 0; i < list.length; i++) {
        if(list[i][1] == 1){
            return list[i][0];
        }
    }
   }
}

console.log(countOccurances(arr));