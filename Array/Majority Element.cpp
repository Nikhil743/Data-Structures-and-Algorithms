#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	// Write your code here
	map<int,int>mp;
	int n = v.size();
	 for(auto it:v){

        mp[it]++;

    }
   	    vector<int>ans;

	 for(auto it:mp){

        if(it.second>n/3) ans.push_back(it.first);
	}
	return ans;
}
