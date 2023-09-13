#include<bits/stdc++.h>

vector<int> kLargest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int>pq;
        vector<int>ans;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
        }

    while(k){
          ans.push_back(pq.top());
      pq.pop();
      k--;
        }
    return ans;
}