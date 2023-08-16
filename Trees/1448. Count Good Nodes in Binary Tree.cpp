class Solution {
public:
    void solve(TreeNode* root, int &cnt, int value){
        if(!root)return;
        if(root -> val >= value){
            cnt++;
            value = root -> val;
        }
        solve(root -> left, cnt, value);
        solve(root -> right, cnt, value);
    }
    int goodNodes(TreeNode* root) {
        int cnt = 0; 
        if(!root)return cnt;
        solve(root, cnt, root -> val);
        return cnt;
    }
};
