//  empty array


function SmallestDiffOfTriplet(){

    let arr = [-2 , -1 , 0 ,1 ,2];
    var diff = 0;
    
    for (let i = 0; i < arr.length; i++) {
         for (let j = i+1; j < arr.length; j++) {
            for (let k = j+1; k < arr.length; k++) {
               
                if(diff >= (arr[i] - arr[j] - arr[k])){
                     diff = (arr[i] - arr[j] - arr[k]);
                }
            }
         }
       }
     
       return diff;
    }
console.log(SmallestDiffOfTriplet());