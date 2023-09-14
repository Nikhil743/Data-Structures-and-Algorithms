class Solution {
public:
bool fac(int mid, vector<int>&weights,int n, int days){
    int sum=0;
    int d = 1;
    for(int i = 0; i<n; i++){
        if(sum+weights[i] <= mid)sum += weights[i];
        else{
            sum = weights[i];
            d++;
        } 
    }
    if(d<=days)return true;
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0; 
        int max = 0;

        for(int i=0; i<n; i++){
            if(weights[i] > max)max = weights[i];
            sum+=weights[i];
        }
        int low = max;
        int high = sum;
        int ans;
        while(low <= high){
            int mid = (low+high)/2;
            if(fac(mid,weights,n,days)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
    return ans;
    }
};
