#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string ans = "";
	
	for(int i = 0 ; i < str.size(); i++){
		if(str[i] == ' '){
			ans.push_back('@');
			ans.push_back('4');
			ans.push_back('0');
		}
		else{
			ans.push_back(str[i]);
		}

	}
	return ans;
}
