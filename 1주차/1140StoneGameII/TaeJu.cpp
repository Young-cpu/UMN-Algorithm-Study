class Solution {
    int[][] dp = new int [101][201];
    public int helper(int index, int M, int[] piles) {
        if(index >= piles.length) {
            return 0;
        }
        if(dp[index][M]!=-1) {
            return dp[index][M];
        }
        int totalScore = 0;
        int ans = Integer.MIN_VALUE;
        for(int j=0; j < 2*M; j++) {
            if(index + j < piles.length) {
                totalScore += piles[index+j];
                ans = Math.max(ans, totalScore - helper(index+j+1, Math.max(M, j+1), piles));
            }
        }
        dp[index][M] = ans;
        return ans;
    }

    public int stoneGameII(int[] piles) {
        int totalStones = 0;
        for (int[] row: dp)
            Arrays.fill(row, -1);
        for(int i=0; i < piles.length; i++) {
            totalStones += piles[i];
        }
        int diff = helper(0, 1, piles);
        return (totalStones + diff)/2;
    }
}
