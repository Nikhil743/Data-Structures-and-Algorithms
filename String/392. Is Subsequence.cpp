class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        //if (s.length() > t.length())
       //     return false;

        int ptrs = 0;
        for (int i=0; i<t.length(); i++)
        {
            if (t[i] == s[ptrs])
                ptrs += 1;
        }

        if (ptrs == s.length())
            return true;
        else
            return false;
        
    }
};
