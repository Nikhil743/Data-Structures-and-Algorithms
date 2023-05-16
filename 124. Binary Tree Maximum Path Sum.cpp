class Solution {
public:
    int fun(TreeNode* root, int &ans){
        if(!root)return 0;
        int left = fun(root -> left, ans);
        int right = fun(root -> right, ans);
        int strightpath = max(root -> val, max(right + root -> val, left+root->val));
        int curvepath = left+right+root->val;
        ans = max(ans,max(strightpath,curvepath));
        return strightpath;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        fun(root,ans);
        return ans; 
    }
};
