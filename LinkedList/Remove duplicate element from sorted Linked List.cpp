Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* temp = head;
 Node* curr = head;
 while(temp && temp -> next){
     
     
    //  phle check krenge ki temp me koi data h ya nhi agr hoga to usko data to uske next wale data se compare krenge 
    //  agr same rha to usko temporiy node me save krenge or tenpory node ke next to temp ke next ke sath add krernge
    //  uske bd us temporiy ko delete kr denge
    
    
     if(temp -> data == temp -> next -> data ){
        Node* del = temp -> next;
        temp -> next = del -> next;
        delete del;
     }else{
         temp = temp -> next;
     }
     
 }
 return head;
}
