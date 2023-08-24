class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        double val;
        for (int i = 1; i < num; i++) {
            val = num * 1.0 / i;
            if (val == i) return true;
            else if (i > val) break;
        }
        return false;
    }
};
