class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        while (num != 0){
            nums.push_back(num % 10);
            num = num / 10;
        }
        
        for (int i = nums.size() - 1; i >=0; i--){
            if(nums[i] == 6){
                nums[i] = 9;
                break;
            }
        }
        
        int output = 0;
        
        for (int i = nums.size() - 1; i >=0; i--){
            output += nums[i] * pow(10, i);
        }
        
        return output;
    }
};
