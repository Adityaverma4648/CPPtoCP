function subArraySum(arr , sum){
   for (let i = 0; i < arr.length-2; i++) {
      for (let j = i+1; j < arr.length-1; j++) {
        for (let k = j+1; k < arr.length; k++) {
            if(sum === 0){
                  console.log("Chutiya Bnya Tumko");
            }else{
                if(arr[i]+arr[j]+arr[k] == sum){
                    console.log(i,k);
                }
            }
        }
      }
   }
}
arr = [1, 4, 20, 3, 10, 5];
subArraySum(arr , 33);
subArraySum( [1, 4, 0, 0, 3, 10, 5 ] , 7);
