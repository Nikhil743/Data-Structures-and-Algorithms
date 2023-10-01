class Solution {
public:
    

    long long dfs(vector<int>adj[], int s, int &cnt, vector<int>&vis, vector<int>&value, int k)
    {
        vis[s] = 1;
        long long sum = value[s];
        for(auto it : adj[s])
        {
            if(vis[it] == 0)
            {
                sum += dfs(adj,it,cnt,vis,value,k);
            }
        }
        if(sum%k == 0)
            cnt++;
        return sum;
    }


    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<int>adj[n];
        for(auto &it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int>vis(n);
        int cnt {};
        dfs(adj,0,cnt,vis,values,k);
        return cnt;
    }
};
