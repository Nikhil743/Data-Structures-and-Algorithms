class Solution{
  public:
    set<int> st;
    void checkIf(Node* root, int height){
        if(!root->left && !root->right){
            st.insert(height);
            return;
        }
        if(root->left) checkIf(root->left, height+1);
        if(root->right) checkIf(root->right, height+1);
    }
    
    bool check(Node *root){
        if(root == NULL) return true;
        checkIf(root, 0);
        return st.size() == 1;
    }
};
