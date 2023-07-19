class Solution {
public:
static bool comp(vector<int>&v1,vector<int>&v2){
    return v1[1] < v2[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0)return 0;
        // phle hmlog array to sort krenge end point se
        // fir check krenge phle ka end point dusre ke starting point se chota h ya bda 
        // agr bda h to ye overlap kr rha h mtlb arrows same rhega 
        // agr phle ka end pint dusre ke first point se chpta h to hm arrows to increse krenge

        int ar = 1;
        sort(points.begin(),points.end(),comp);
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > points[0][1]){
                ar++;
                points[0][1] = points[i][1];
            }

        }
        return ar;
    }
};
