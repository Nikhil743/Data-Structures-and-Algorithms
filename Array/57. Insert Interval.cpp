class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int j=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[j][1]>=intervals[i][0]){
                intervals[j][1] = max(intervals[j][1],intervals[i][1]);
            }else{
                j++;
                intervals[j] = intervals[i];
            }
        }
        intervals.resize(j+1);
        return intervals;
    }
};
