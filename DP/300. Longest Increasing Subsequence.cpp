class Solution {
public:
    int solve(vector<int>&nums){
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size() +1, 0));
        for(int curr = nums.size() -1; curr >= 0; curr--){
            
            for(int prev = curr - 1; prev >= -1; prev--){

                int take = 0;
                if(prev == -1 || nums[curr] > nums[prev])
                     take = 1 + dp[curr+1][curr+1];
                    int notake = 0 + dp[curr +1 ][prev +1];
                dp[curr][prev +1] = max(take,notake);

            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int>& nums) {
        return solve(nums);
    }
};
