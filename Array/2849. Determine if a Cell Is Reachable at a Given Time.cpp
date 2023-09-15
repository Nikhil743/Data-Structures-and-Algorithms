class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x = abs(sx-fx);
        int y = abs(sy-fy);
        int min_distance = min(x,y);
        x -= min_distance;
        y -= min_distance;

        min_distance += x + y;
        if(min_distance == 0){
            return t!=1;
        }
        return (min_distance <= t);
    }
};
