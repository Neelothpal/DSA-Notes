class Solution {
public:

    bool ispalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }

    void solve(string s, int ind, vector<string>& pv, vector<vector<string>> &ans){
        if(ind==s.size()){
            ans.push_back(pv);
            return;
        }
        for(int i=ind; i<s.size(); i++){
            if(ispalindrome(s, ind, i)){
                pv.push_back(s.substr(ind, i - ind + 1));
                solve(s, i+1, pv, ans);
                pv.pop_back();
            }
        }   
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> pv;
        solve(s, 0, pv, ans);
        return ans;
    }
};