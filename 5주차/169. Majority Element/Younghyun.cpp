class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++){
            auto it = map.find(nums[i]);
            if(it == map.end()){
                map[nums[i]] = 1;
            }
            else{
                map[nums[i]] += 1;
            }
        }
        
        int max = 0, index = 0;
        
        for(auto i:map){
            if (max < i.second){
                max = i.second;
                index = i.first;
            }
        }
        
        return index;
    }
};
