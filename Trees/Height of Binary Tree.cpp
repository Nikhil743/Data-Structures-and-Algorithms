
class Solution{
    public:
    
    int bfs(Node* node){
     if(node == nullptr)return 0;
     return 1 + max(bfs(node -> left), bfs(node -> right));
    }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
        return bfs(node);
        
    }
};