class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1){
            s1.push(l1 -> val);
            l1 = l1 -> next;
        }
        while(l2){
            s2.push(l2 -> val);
            l2 = l2 -> next;
        }
        int carry = 0;
        ListNode* res = nullptr;
        while(!s1.empty() or !s2.empty() or carry != 0){
            int sum = carry;

            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
                }
            carry = sum / 10;
            sum %= 10;
            ListNode* newnode = new ListNode(sum);
            newnode -> next = res;
            res = newnode;

        }
        return res;
    }
};