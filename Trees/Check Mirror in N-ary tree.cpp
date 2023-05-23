class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int,vector<int>> _A;
        unordered_map<int, vector<int>> _B;
        unordered_set<int> keys;
        
        for(int i = 0; i < (2*e)-1; i+= 2) {
            _A[A[i]].push_back(A[i+1]);
            _B[B[i]].push_back(B[i+1]);
            keys.insert(A[i]);
        }

        for(auto i : keys) {
            vector<int> temp_A = _A[i];
            vector<int> temp_B = _B[i];
            
            reverse(temp_A.begin(), temp_A.end());
            if(temp_A != temp_B) return false;
        }
        
        return true;
    }
};
