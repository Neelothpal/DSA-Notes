
    bool solve(int a, int b){
        if(to_string(a)<to_string(b)){
            return true;
        }
        return false;
    }
class Solution {

public:
    vector<int> lexicalOrder(int n) {
       vector<int> arr;
       int b = 1;
       for(int i=1; i<=n; i++){
        arr.push_back(b);
        if(b*10<=n){
            b*=10;
        }
        else{
            while(b%10==9 || b>=n){
                b/=10;
            }
            b++;
        }
       } 
       return arr;
    }
};