//  empty array


function SumOfTriplet(){

let arr = [-2 , -1 , 0 ,1 ,2];

for (let i = 0; i < arr.length; i++) {
     for (let j = i+1; j < arr.length; j++) {
        for (let k = j+1; k < arr.length; k++) {
            console.log(i , j , k, arr[i] , arr[j] , arr[k]);
            if(arr[i] + arr[j] + arr[k] == 0){
                console.log ("Found a triplet" , arr[i] , arr[j] , arr[k]);
            }
        }
     }
}

}
SumOfTriplet()