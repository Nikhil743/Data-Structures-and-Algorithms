class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int,int>m;

        for(auto i : edges){
            m[i[1]]++;
        }
        vector<int>indegree;
        for(int i = 0; i< n; ++i){
            if(m[i] < 1){
                indegree.push_back(i);
            }
        }
        return indegree;
    }
};
