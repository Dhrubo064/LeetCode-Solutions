class Solution {
public:
    vector<vector<int>> res;

    void dfs(int i, vector<int>& candidates, int target, vector<int>& cur, int total) {
        if (total == target) {
            res.push_back(cur);
            return;
        }

        if (i >= candidates.size() || total > target) {
            return;
        }

        cur.push_back(candidates[i]);
        dfs(i, candidates, target, cur, total + candidates[i]);

        cur.pop_back();

        dfs(i + 1, candidates, target, cur, total);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        dfs(0, candidates, target, cur, 0);
        return res;
    }
};