class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> dp = {1, 1, 1, 1, 1};
        
        if (n == 1){
            return 5;
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 1; j < 5; j++){
                dp[j] = dp[j-1] + dp[j];
            }
        }
        
        return dp[4];
    }
};
