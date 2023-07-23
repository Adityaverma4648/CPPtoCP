var arr= [16, 17, 4, 3, 5, 2];
var arr1 = [1, 2, 3, 4, 5, 2];

function findLeader(arr){
    for (let i = 0; i < arr.length; i++){
        let j;
        for (j = i+1; j < arr.length; j++){
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == arr.length) // the loop didn't break
            console.log(arr[i] + " ");
  }
}
console.log("res=>",findLeader(arr));
console.log("res=>",findLeader(arr1));
