class Solution {
    public int minCostClimbingStairs(int[] cost) {
        // 값 저장
        int[] saved = new int[cost.length];
        saved[0] = cost[0];
        saved[1] = cost[1];
        for(int i=2; i < cost.length; i++) {
            // saved 값 다시 사용
            saved[i] = cost[i] + Math.min(saved[i-1], saved[i-2]);
        }
        return Math.min(saved[cost.length-1], saved[cost.length-2]);
    }
}
