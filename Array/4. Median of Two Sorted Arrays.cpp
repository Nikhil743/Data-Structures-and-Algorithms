class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>ans;
        for(auto a : nums1)ans.push_back(a);
        for(auto b : nums2)ans.push_back(b);
        sort(ans.begin(),ans.end());

        int n = ans.size();
        double mid = n/2;
        if(n%2 == 0){
            return (ans[mid-1] + ans[mid])/2;
        }
        else{
            return ans[mid];
        }
    }
};
