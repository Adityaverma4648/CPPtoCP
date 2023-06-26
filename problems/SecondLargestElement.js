function secondLargest(){
  let arr = [12, 35, 1, 10, 34, 1];
  
  var sorted = arr.sort((a,b)=>{
      return a-b;
  })
   
  var descending = sorted.reverse();

  return descending[1];
}

console.log(secondLargest())