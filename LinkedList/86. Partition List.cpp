
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> P,Q;
        ListNode* temp=head;
        while(temp)
        {
            P.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<P.size();i++){
            if(P[i]<x) Q.push_back(P[i]);
        }
        for(int i=0;i<P.size();i++){
            if(P[i]>=x) Q.push_back(P[i]);
        }
        ListNode* tempp=new ListNode(-1);
        ListNode* xx=tempp;
        for(int i=0;i<Q.size();i++){
            ListNode* y=new ListNode(Q[i]);
            tempp=tempp->next=y;
        }
        return xx->next;
    }
};
