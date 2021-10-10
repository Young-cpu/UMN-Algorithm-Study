class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        if(!graph.size()) return res;
        
        int dst = graph.size()-1;
        queue<vector<int>> q;
        q.push({0});
        
        while(!q.empty()) {
            int qsize = q.size();
            for(int i = 0 ; i < qsize; i++) {
                auto curr = q.front();
                q.pop();
                if(curr.back() == dst) res.push_back(curr);
                for(auto &n: graph[curr.back()]) {
                    vector<int> tmp = curr;
                    if(find(begin(curr), end(curr), n) != curr.end()) continue;
                    tmp.push_back(n);
                    q.push(tmp);
                }
            }
        }
        return res;
    }
};
