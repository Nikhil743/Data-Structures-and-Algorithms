
class Solution {
public:
int length(ListNode* node){
    int cnt = 0;
    while(node){
        cnt++;
        node = node -> next;
    }
    return cnt;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        // firstly wen find the length of the linkedlist and pass it in recursion.
        // In recursion, we find the ans of first k pair and pss others pair in recrsion.
        if(length(head) <k )return head;
        ListNode* curr = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        for(int i = 0; i< k; i++){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head -> next = reverseKGroup(curr,k);
        return prev;


    }
};
