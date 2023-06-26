var rotate = function(nums, k) {
    for(let i = 0 ; i < k ; i++){
        var temp  = nums[nums.length-1];
        for(let j = nums.length-1  ; j > 0 ; j--){
            nums[j+1] = nums[j];
            nums[0] = temp;
        }
    }
    console.log(nums);
};
var arr = [1,2,3,4,5,6,7];
rotate(arr,3);

