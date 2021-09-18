class Solution {
public:
    int minOperations(vector<int>& nums) {
        if (nums.size() == 1){
            return 0;
        }
        
        int count = 0, size = nums.size();
        
        for (int i = 1; i < size; i++){
            if (nums[i] <= nums[i-1]){
                count += nums[i-1] - nums[i] + 1;
                nums[i] = nums[i-1] + 1;
            }
        }
        
        return count;
        
    }
};
