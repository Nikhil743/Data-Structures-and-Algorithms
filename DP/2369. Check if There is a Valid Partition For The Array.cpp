class Solution {
public:
    vector<int>dp=vector<int>(100005,-1);
    bool rec(vector<int> &nums,int i){
        int n=nums.size();
        if(i==n)
            return true;
        if(i>n)
            return false;
        if(dp[i]!=-1)
            return dp[i];
        
        bool res=false;
        
        if(i+2<=n && nums[i]==nums[i+1]){
            res = rec(nums,i+2);
            if(i+3<=n && nums[i]==nums[i+2]){
                res = res || rec(nums,i+3);
            }
        }
        if(i+3<=n && (nums[i+1]-nums[i]==1) && (nums[i+2]-nums[i+1]==1)){
            res = res || rec(nums,i+3);
        }
        dp[i]=res;
        return dp[i];
    }
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return false;
        if(n==2)
            return nums[0]==nums[1];
        return rec(nums,0);
    }
};
