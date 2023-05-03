class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res(2); 
        unordered_set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end()); 
        for (auto& x : set1) 
            if (set2.count(x) == 0) 
                res[0].push_back(x); 
        for (auto& x : set2) 
            if (set1.count(x) == 0)
                res[1].push_back(x); 
        return res; 
    }
};
