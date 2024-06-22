//You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int p = 0;
        int value =0;
        for(int i=0; i<n; i++){
            if(min<prices[i]){
                value = prices[i]-min;
                p = max(value, p);
            }
            if(min>prices[i]){
                min = prices[i];
            }
        }
        return p;
    }
};
