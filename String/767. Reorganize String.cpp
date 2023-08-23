class Solution {
public:
    string reorganizeString(string s) {
        int n = (int)s.size();
        vector<int> Cnt(26);
        int f = 0;
        for (auto x : s) {
            Cnt[x - 'a'] += 1;
            if (Cnt[x - 'a'] > Cnt[f]) {
                f = (x - 'a');
            }
        }
        if (Cnt[f] > (n + 1) / 2) {
            return "";
        }
        int i = 0;
        while (Cnt[f]) {
            s[i] = (f + 'a');
            i += 2;
            Cnt[f] -= 1;
        }

        for (int k = 0; k < 26; k++) {
            while (Cnt[k]) {
                i = (i >= n ? 1 : i);
                s[i] = (k + 'a');
                Cnt[k] -= 1;
                i += 2;
            }
        }
        return s;
    }
};
