class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, n = gas.size(), fuel = 0, index = 0;
        for(int i =0; i< n; i++){
            int diff = gas[i] - cost[i];
            total += diff;
            fuel += diff;
            if(fuel < 0){
                index = i + 1;
                fuel = 0;
            }
        }
        return (total < 0 )? -1 :index;
    }
};
