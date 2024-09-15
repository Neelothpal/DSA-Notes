class Solution {
public:
    void solve(int l, int k, int n, vector<vector<int>>& ans, vector<int> a){
        if(n==0 && k==a.size()){
            ans.push_back(a);
            return;
        }
        for(int i=l; i<9; i++){
            if(i+1>n)break;
            a.push_back(i+1);
            solve(i+1, k, n-(i+1), ans, a);
            a.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> a;
        solve(0, k, n, ans, a);
        return ans;
    }
};