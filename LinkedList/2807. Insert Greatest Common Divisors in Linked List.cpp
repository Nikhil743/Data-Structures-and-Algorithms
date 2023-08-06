class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        
        while(temp -> next){
            ListNode* node = new ListNode( __gcd(temp -> val, temp -> next -> val));
            node -> next = temp -> next;
            temp -> next = node;
            temp = node -> next;
        }
        return head;
    }
};
