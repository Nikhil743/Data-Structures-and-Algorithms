class Solution
{
    public:
        int minimumSeconds(vector<int> &nums)
        {
            unordered_map<int, vector < int>> mpp;

            int n = nums.size();
            for (int i = 0; i < n; i++)
                mpp[nums[i]].push_back(i);

            int ans = INT_MAX;

            for (auto &it: mpp)
            {
                vector<int> pos = it.second;
                pos.push_back(pos[0] + n);

                int sec = 0;
                for (int i = 1; i < pos.size(); i++)
                {
                    sec = max(sec, (pos[i] - pos[i - 1]) / 2);
                }
                ans = min(ans, sec);
            }
            return ans;
        }
};
