
// 2 -> 4 -> 6

class Node{
  constructor(d){
     this.head = {
        data : d,
        next : null
     }
     this.length = 1;    
  }

//    insertion method

  insertAtLast(new_data){
       if(this.head !== null ){
        const newNode = {
            data : new_data,
            next : null,
        }
        var lastNode = this.head;
        // traversing to last node
        while(lastNode.next != null){  // 2->4
            lastNode = lastNode.next;
        }
        lastNode.next = newNode;
        newNode.next =  null;

        this.length++;
    }else{
        console.log("Chutiya Banaya Tumko");
    }
}

  insertNewHead(newData){
    if(this.head !== null){
        var newNode = {
            data : newData,
            next : null
        }
        newNode.next = this.head;
        this.head = newNode;
        this.length++;
    }else{
        console.log("Chutiya Banaya Tumko");              
    }
  }

  insertAtPosition(prevNode , newData){
    if(prevNode !== null) {
       var newNode = {
        data : newData,
        next : null,
       }
      //  prevNode.next = newNode;
      //  newNode.next = prevNode.next;
    } else{
      console.log("Chutiya Banaya Tumko");
    } 
  }

}
 const ll = new Node(2);    // inserting head
 
// insertion
ll.insertAtLast(4);
ll.insertAtLast(6);

ll.insertNewHead(1);


ll.insertAtPosition(2, 3)


console.log(ll);