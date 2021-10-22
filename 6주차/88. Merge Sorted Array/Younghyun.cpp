class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0){
            return;
        }
        else if(m == 0){
            nums1 = nums2;
            return;
        }
        vector<int> output;
        int index_2 = 0, index_1 = 0;
        
        while (index_1 != m && index_2 != n){
            int tmp = min(nums1[index_1], nums2[index_2]);
            output.push_back(tmp);
            
            if (tmp == nums1[index_1]){
                index_1++;
            }
            else{
                index_2++;
            }
        }
        
        for (int i = index_1; i < m; i++){
            output.push_back(nums1[i]);
        }
        
        for (int i = index_2; i < n; i++){
            output.push_back(nums2[i]);
        }
        
        nums1 = output;
        
    }
};
