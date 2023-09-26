class Solution {
public:
    string removeDuplicateLetters(string s) {

        string ans = "";
        int last[26] = {}, visited[26] = {}, n = s.size();
        // Store the last occurances of the characters
        for (int i = 0; i < n; ++i) {
            last[s[i] - 'a'] = i;
        }
        for (int i = 0; i < n; ++i) {
            // Visited ko increment karo
            if (visited[s[i] - 'a']++) continue;
            // agr res empty nahi hai aur
            // current char chota hai mere res ko top se aur
            // top wala character future me aye ga stream me to
            // top wale ko pop kar do aur uske visited to false kar do
            while (!ans.empty() && ans.back() > s[i] && i < last[ans.back() - 'a']) {
                visited[ans.back() - 'a'] = 0;
                ans.pop_back();
            }
            ans.push_back(s[i]);
        }
        return ans;
        
    }
};
