class Solution {
    public int minOperations(int[] nums) {
        int result = 0;
        if (nums.length == 1) {
            return 0;
        }
        for (int i=0; i<nums.length; i++) {
            if (i == nums.length -1 && nums[i] != nums[i-1]) {
                break;
            }
            if (i == nums.length -1 && nums[i] == nums[i-1]) {
                result = result + 1;
                break;
            }
            if (nums[i] > nums[i+1]) {
                int diff = (nums[i] - nums[i+1]) + 1;
                nums[i+1] = nums[i+1] + diff;
                result += diff;
            }
            if (nums[i] == nums[i+1]) {
                nums[i+1] = nums[i+1] + 1;
                result++;
            }
        }
        return result;
    }
}
