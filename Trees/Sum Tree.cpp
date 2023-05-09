class Solution
{
    public:
    bool res = true ;
    int sum(Node* root){
        if(root==NULL){
            return 0;
        }
        int ls = sum(root->left);
        int rs = sum(root->right);
        
        if(root->left==NULL and root->right==nullptr){ // its a leaf node return as it 
            return root->data;
        }
        
        if(root->data!=ls + rs){
            res = false;
        }
        return ls + rs + root->data;
    }
    bool isSumTree(Node* root)
    {
        if(root==NULL){
            return true ;
        }
        sum(root);
        return res;
    }
};
