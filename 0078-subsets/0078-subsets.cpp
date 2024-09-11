class Solution {
public:

    void solve(int k, int n, vector<int>& nums, vector<vector<int>>& res, vector<int>& r){
        if(k==n){
            res.push_back(r);
            return;
        }
        r.push_back(nums[k]);
        solve(k+1,n,nums,res,r);
        r.pop_back();
        solve(k+1,n,nums,res,r);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int k =0;
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> r;
        solve(k, n, nums, res, r);
        return res;
    }
};