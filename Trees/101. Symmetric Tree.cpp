class Solution {
public:

    bool ismatch(TreeNode* r1, TreeNode* r2){
        if(r1!= nullptr && r2 != nullptr){
            bool a = ismatch(r1 -> left, r2 -> right);
            bool b = ismatch(r1 -> right , r2 -> left);

            if((r1 -> val == r2-> val) && a && b){
                return true;
            }
            else
            return false;


        }
        else if(r1 == nullptr && r2 == nullptr){
            return true;
        }
        else 
        return false;

    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)return true;

        return ismatch(root -> left, root -> right);
    }
};
