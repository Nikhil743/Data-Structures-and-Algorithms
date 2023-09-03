class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref = 1, suf = 1;
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0 ; i < n; i++){
            if(pref == 0)pref = 1;
            if(suf == 0)suf = 1;

            pref = pref * nums[i];
            suf = suf * nums[n - i - 1];
            ans =  max(ans, max(pref,suf));
        }
        return ans;
    }
};
