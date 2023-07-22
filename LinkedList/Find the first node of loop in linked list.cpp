class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node* fast = head;
        Node* slow = head;
        while(slow && fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(fast == slow){
                break;
            }
        }
        if(slow!=fast) return -1;
            slow=head;
                    while(slow!=fast)
                    {
                        fast=fast->next;
                        slow=slow->next;
                    }
            
            return slow->data;
    }
};
