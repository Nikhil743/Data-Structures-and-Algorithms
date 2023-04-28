
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int>ans;
      queue<Node*>q;
      q.push(node);
      while(!q.empty()){
          Node* temp = q.front();
          q.pop();
          ans.push_back(temp-> data);
          if(temp -> left != nullptr)q.push(temp -> left);
          if(temp -> right != nullptr)q.push(temp -> right);
      }
      return ans;
    }
};