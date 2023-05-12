class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        //dp[2] = 2;

        for(int i = 2; i<=n; i++){
            int sum =0;
            for(int j = 1; j<=i; j++){
                int left = dp[j-1];
                int right = dp[i-j];
                 sum += left*right;
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};
