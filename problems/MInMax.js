function minMax(arr){

    let length  = arr.length;
    let ans = [];

    

    arr.sort((a,b)=>{
        return a-b;
    })

    for (let i = 0; i < arr.length; i++) {
        if(length%2 === 0){
                //   length 
            if(ans.length <= length-1){
                //  duplcation removed for last element 

                if(arr[i] != arr[length-i-1]){
                    ans.push(arr[i]);
                    ans.push(arr[length-i-1]);
                 }else{
                    ans.push(arr[i]);
                 }
            }
        }else{
                //   length 
            if(ans.length <= length-1){
                //  duplcation removed for last element 
                if(arr[i] != arr[length-i-1]){
                   ans.push(arr[i]);
                   ans.push(arr[length-i-1]);
                }else{
                   ans.push(arr[i]);
                }
            }
        }
    }
    
    return ans;

}

let arr = [1, 2, 3, 4, 5, 6, 7];

console.log(minMax(arr));