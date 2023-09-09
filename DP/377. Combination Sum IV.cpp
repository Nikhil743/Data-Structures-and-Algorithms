class Solution {
public:
    int solvetab(vector<int>&nums,int tar, vector<int>&dp){
        if(tar<0)return 0;
        if(tar == 0)return 1;

        if(dp[tar] != -1)return dp[tar];
        int ans=0;
        for(int i = 0; i< nums.size(); i++){
             ans += solvetab(nums,tar-nums[i],dp);
        }
        dp[tar] = ans;
        return ans;
    }
    int combinationSum4(vector<int>& nums, int tar) {
        vector<int>dp(tar+1,-1);
        return solvetab(nums,tar,dp);
    }
};
