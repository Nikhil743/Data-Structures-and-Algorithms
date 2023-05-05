class Solution {
  public:
  int solve(Node*root){
      if(root != nullptr){
          int l = solve(root -> left);
          int r = solve(root -> right);
          int temp = root -> data;
          
          root -> data = l + r;
          return temp + l + r;
      }
      return 0;
  }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *root)
    {
        if(!root)return;
        solve(root);
    }
};
