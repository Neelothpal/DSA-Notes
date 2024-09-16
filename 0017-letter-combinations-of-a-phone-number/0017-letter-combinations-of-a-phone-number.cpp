class Solution {
public:
    void solve(string digits, map<char, string>& mp, vector<string>& v, string s, int k){
        if(k == digits.length()){
            v.push_back(s);
            return;
        }
        for(int i=0; i<mp[digits[k]].size(); i++){
            s.push_back(mp[digits[k]][i]);
            solve(digits, mp, v, s, k+1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        
        vector<string> v;
        if(digits.length()==0){
            return v;
        }

       map<char, string> mp = {
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
       };
       string s;
       solve(digits, mp, v, s, 0);
       return v;
    }
};