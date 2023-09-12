class Solution {
public:
    int minDeletions(std::string s) {
        unordered_map<char, int> cnt;
        int deletions = 0;
        unordered_set<int> set;
        
        for (char c : s) {
            cnt[c]++;
        }
        
        for (auto& kv : cnt) {
            int freq = kv.second;
            while (freq > 0 && set.find(freq) != set.end()) {
                freq--;
                deletions++;
            }
            set.insert(freq);
        }
        
        return deletions;
    }
};
