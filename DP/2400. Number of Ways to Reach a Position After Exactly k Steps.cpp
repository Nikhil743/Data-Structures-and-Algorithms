int mod= 1e9+7;
int dp[1001][5000];
class Solution {
public:
    int f(int s,int e,int k,int curr)
    {
       if(k==0)
       {
           if(curr==e)return 1;
           return 0;
       }
        if(dp[k][curr+1000]!=-1)return dp[k][curr+1000];
      int step = 0;
        step = (f(s,e,k-1,curr+1)%mod)+(f(s,e,k-1,curr-1)%mod);
        return  dp[k][curr+1000] =  step%mod;
    }
    int numberOfWays(int s, int e, int k) {
        memset(dp,-1,sizeof(dp));
        return f(s,e,k,s)%mod;
    }
};
