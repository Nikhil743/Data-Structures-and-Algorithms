class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int l = n/2;l>0;l--){
            if(n%l==0)
                if(s.substr(0,n-l)==s.substr(l)) return true;
        }
        return false;
    }
};
