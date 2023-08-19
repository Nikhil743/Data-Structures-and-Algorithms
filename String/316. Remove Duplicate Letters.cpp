

class Solution {
public:
    string smallestSubsequence(string s) {
    vector<int> lastindex(26,0);;
        for(int i=0;i<s.size();i++){
            lastindex[s[i]-'a']=i;
        }
        
        
        
        
        vector<bool> seen(26,false);
        stack<char> st;
        
        
        
        for(int i=0;i<s.size();i++)
        {
            int curr=s[i]-'a';
        if(seen[curr])continue;
            while(st.size()>0&&st.top()>s[i]&&i<lastindex[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
                
            }
            st.push(s[i]);
            seen[curr]=true;
        } 
          string ans="";
          while(st.size()!=0){
              ans+=st.top();
              st.pop();
          }  
        reverse(ans.begin(),ans.end());
            return ans;
        }
        
    
    
    
};
