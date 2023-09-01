 

#include <bits/stdc++.h>

using namespace std;

 

vector<int> findMissingRepeatingNumbers(vector < int > a) {

    long long int n = a.size();

    unordered_map<long long int,long longint> mp;

    for(long long int i=1;i<=n;i++){

        mp[i]=0;

    }

    for(auto it:a){

        mp[it]++;

    }

    long long int miss=0,repeat=0;

    for(auto it:mp){

        if(it.second>1) repeat = it.first;

        if(it.second==0) miss = it.first;

    }

    return {(int)repeat,(int)miss};

}
