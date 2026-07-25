class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(vector<int>& candidates, int start, int remain) {
        if (remain == 0) {
            ans.push_back(path);
            return;
        }

        if (remain < 0)
            return;

        for (int i = start; i < candidates.size(); i++) {
            path.push_back(candidates[i]);

            dfs(candidates, i, remain - candidates[i]);

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(candidates, 0, target);
        return ans;
    }
};