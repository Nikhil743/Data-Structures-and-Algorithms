class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) { 
        int n = nums.size();
        vector<int> ans(n , -1);
        for(int i = 0; i< n; i++){
            int j = i+1;
            while(true){
                j = j%n;
                if( i == j) break;
                if( nums[j] > nums[i]){
                    ans[i] = nums[j];
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};
