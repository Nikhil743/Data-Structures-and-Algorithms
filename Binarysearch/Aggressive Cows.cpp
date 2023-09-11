#include<bits/stdc++.h>

bool canWeSolve(vector<int>&stalls, int dist, int cows){
    int cntcows = 1, last = stalls[0];
    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - last >= dist){
            cntcows++;
            last = stalls[i];
        }
        if(cntcows >= cows)return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int n= stalls.size();
    int low = 1, high = stalls[n-1]-stalls[0];
while(low <= high){
    int mid = (low + high) /2;
    if(canWeSolve(stalls,mid,k) == true){
        low = mid +1;
    }
    else{
        high = mid -1;
    }
}
return high;

}
