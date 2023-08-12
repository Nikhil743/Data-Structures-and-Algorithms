class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& obstacleGrid
    ,vector<vector<int>> &dp,int n,int m)
    {
        if(i>=n||j>=m||j<0||i<0||obstacleGrid[i][j]==1)
        {
            return 0;
        }
        if(i==n-1&&j==m-1)
      {
          return 1;
      }
      if(dp[i][j]!=-1) //To avoid repetitive calls.
      return dp[i][j];
        int right=0,down=0;

        right=solve(i,j+1,obstacleGrid,dp,n,m);
        down=solve(i+1,j,obstacleGrid,dp,n,m);

        return dp[i][j]=right+down; 
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         int n=obstacleGrid.size();
         int m=obstacleGrid[0].size();
         vector<vector<int>> dp(n,vector<int> (m,-1));
         return solve(0,0,obstacleGrid,dp,n,m);
    } 
};
