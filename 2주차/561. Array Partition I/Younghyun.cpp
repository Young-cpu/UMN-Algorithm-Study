//Time complexity is O(nlog(n)), because sort takes O(nlog(n)).

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int size = nums.size(), sum = 0;
        
        for(int i = 0; i < size; i+=2){
            sum+=nums[i];
        }
               
        return sum;
    }
};


//First Attempt
// class Solution {
// public:
//     int arrayPairSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        
//         int size = nums.size(), sum = 0;
        
//         for(int i = 0; i < size; i+=2){
//             sum+=min(nums[i], nums[i+1]);
//         }
        
        
//         return sum;
//     }
// };
