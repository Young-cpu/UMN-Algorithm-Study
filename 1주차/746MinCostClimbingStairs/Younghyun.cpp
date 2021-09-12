class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int length = cost.size();
        vector<int> outcome;
        
        outcome.push_back(cost[0]);
        outcome.push_back(cost[1]);
        
        for (int i = 2; i < length; i++){
            int minimum = min(outcome[i-1], outcome[i-2]) + cost[i];
            outcome.push_back(minimum);
        }
        
        
        return min(outcome[length-1], outcome[length-2]);
    }
};
