class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto a : mp){
            if(a.second<2){
               return -1;
           }
            
            cnt += ((a.second +2)/3);
        }
        return cnt;
    }
};
