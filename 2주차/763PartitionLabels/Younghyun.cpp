class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> outcome;
        int greedy[26] = {0};
        int size = s.size(), left = 0, right = 0;
        
        for (int i = 0; i < size; i++){
            greedy[s[i]-'a'] = i;        }
        
        for (int i = 0; i < size; i++){
            right = max(right, greedy[s[i] - 'a']);
            if(right == i){
                outcome.push_back(right-left +1);
                right = i+1;
                left = i+1;
            }
        }
        
        return outcome;
    }
};
