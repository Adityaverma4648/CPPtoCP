function largestThreeDigits(){
   let arr = [10, 4, 3, 50, 23, 90];

//    let ans = [];

    var sorted = arr.sort((a,b)=>{
        return a-b;
    })
    return sorted.reverse().slice(0,3);
    // console.log(sorted);
}

console.log(largestThreeDigits());

//  largestThreeDigits()