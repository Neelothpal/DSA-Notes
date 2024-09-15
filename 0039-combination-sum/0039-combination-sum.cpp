class Solution {
public:

    void solve(int k, int target, vector<int>& candidates, vector<int>& ans, vector<vector<int>>& r) {
        
        if (target == 0) {
            r.push_back(ans);
            return;
        }

        if (k == candidates.size() || target < 0) {
            return;
        }

        ans.push_back(candidates[k]);
        solve(k, target - candidates[k], candidates, ans, r);

        ans.pop_back();
        solve(k + 1, target, candidates, ans, r); 
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n =candidates.size();
        vector<vector<int>> r;
        vector<int> ans;
        solve(0, target, candidates, ans, r);
        return r;
    }
};