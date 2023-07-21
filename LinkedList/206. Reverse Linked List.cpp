class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* nex = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            nex = curr-> next;
            curr -> next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
};
