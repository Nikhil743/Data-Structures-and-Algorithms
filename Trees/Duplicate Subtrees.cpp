string solve(Node* root, vector<Node*>&r,unordered_map<string , int>&mp ){
    
   if(!root){   return "#";  }  
   
   string s= solve(root->left, r, mp)+','+ solve(root->right, r,mp)+','+ to_string(root->data);
   
    mp[s]++;
   if(mp[s]==2) r.push_back(root);
  
 return s;
   
}
vector<Node*> printAllDups(Node* root)
{
    vector<Node*> ans;
    unordered_map<string , int>mp;
    solve(root, ans,mp); //Call solve 
    return ans;
}
