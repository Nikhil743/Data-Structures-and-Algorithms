class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_map<int ,int>store; 
        for(auto it : nums){
            for( int ele = it[0]; ele<=it[1]; ele++)               
                  store[ele]++;
             }
        
        return store.size(); 
    }
};
