function moveToEnd(){
    let arr = [1, 2, 0, 4, 3, 0, 5, 0];
    var ans = [];
    var count = 0;
    for (let i = 0; i < arr.length-1; i++) {
        if(arr[i] != 0 ){
            ans.push(arr[i]);
            count++;
        }
    }

    for (let i = 0; i < count ; i++) {
        ans.push(0);
    }

    return ans

}

console.log(moveToEnd())