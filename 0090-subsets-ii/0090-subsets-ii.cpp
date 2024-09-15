class Solution {
public:

    void solve(vector<int>& nums, vector<vector<int>>& ss, vector<int> s, int k){
        ss.push_back(s);

        for(int i=k; i<nums.size(); i++){
            if(i!=k && nums[i]==nums[i-1]) continue;
            s.push_back(nums[i]);
            solve(nums, ss, s, i+1);
            s.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ss;
        vector<int> s;
        solve(nums, ss, s, 0);
        return ss;
    }
};