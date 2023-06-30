function commonFactor(a,b){
    // while(b){
    //     var t = b;
    //     b = a % b;
    //     a = t;
    // }

    var res = b%10;

    return res;
}
let a = 8 , b = 79;
console.log(commonFactor(a ,b ));