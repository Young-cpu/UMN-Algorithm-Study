class Solution {
    public int majorityElement(int[] nums) {
        int res = nums[0];
        if (nums.length == 1) return res;
        
        int target = nums.length / 2;
        HashMap<Integer, Integer> numTracker = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int val = nums[i];
            if (!numTracker.containsKey(val)) {
                numTracker.put(val, 1);
            } else {
                numTracker.put(val, numTracker.get(val) + 1);
            }
            if (numTracker.get(val) > target) res = val;
        }
        
        return res;
    }
}