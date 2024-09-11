class Solution {       
public:

    void solve( int open, int closed, string s, int n, vector<string>& res){
        
        if(open== closed && open+closed==n*2){
            res.push_back(s);
            return;
        }
        if(open <n){
            solve(open+1,closed, s+"(",n, res);
        }
        if(closed<open){
            solve(open,closed+1, s+")",n, res);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(0,0,"",n,res);
        return res;
    }
};