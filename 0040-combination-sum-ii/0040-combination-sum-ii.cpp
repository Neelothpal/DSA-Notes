class Solution {
public:

    void solve(int k, int target, vector<int>& candidates, vector<int>& ans, vector<vector<int>>& r) {
        
        if (target == 0) {
            r.push_back(ans);
            return;
        }

        for(int i=k; i<candidates.size(); i++){
            if(i>k && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target)break;
            ans.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,ans,r);
            ans.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> r;
        vector<int> ans;
        sort( candidates.begin(), candidates.end() );
        solve(0, target, candidates, ans, r);
        return r;
    }
};