class Solution {
    public int arrayPairSum(int[] nums) {
        // If array is sorted in the order of min to max and we are given that nums length is even always, we can find the maximum sum of
        // min pairs by simply adding nums[i] with i starting 0 incrementing by 2
        Arrays.sort(nums);
        int sum = 0;
        for(int i=0; i < nums.length; i+=2) {
            sum += nums[i];
        }
        return sum;
    }
}
