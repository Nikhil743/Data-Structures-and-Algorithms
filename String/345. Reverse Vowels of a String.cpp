class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        
        int l=0,r = s.size()-1;
        
        while(l<=r)
        {
            if(st.count(s[l]) && st.count(s[r]))
            {
                swap(s[l],s[r]);
                l++,r--;
            }
            else if(!st.count(s[l])) l++;
            else if(!st.count(s[r])) r--;
        }
        
        return s;
        
    }
};