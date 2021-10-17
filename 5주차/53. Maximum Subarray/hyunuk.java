class Solution {
    public int maxSubArray(int[] nums) {
        return maxSubArray(nums, 0, nums.length - 1);
    }
        
    public int maxSubArray(int[] nums, int start, int end) {
        // base case
        if(start == end) return nums[start];
        
        int mid = (start + end) / 2;
        
        int leftSum = maxSubArray(nums, start, mid);
        int rightSum = maxSubArray(nums, mid + 1, end);
        int crossSum = maxCrossSubArray(nums, start, mid, end);
        
        return Math.max(leftSum, Math.max(rightSum, crossSum));
    }
    
    public int maxCrossSubArray(int[] nums, int start, int mid, int end) {
        int leftSum = Integer.MIN_VALUE;
        int sum = 0;
        
        for (int i = mid; i >= start; i--) {
            sum += nums[i];
            leftSum = Math.max(leftSum, sum);
        }
        
        sum = 0;
        int rightSum = Integer.MIN_VALUE;
        
        for (int i = mid+1; i <= end; i++) {
            sum += nums[i];
            rightSum = Math.max(sum, rightSum);
        }
        
        return leftSum + rightSum;
    }
    
}