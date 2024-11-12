class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans;
        sort(items.begin(),items.end());
        vector<int> maxb(items.size());
        maxb[0] = items[0][1];
        for(int i = 1; i < items.size(); i++){
            maxb[i] = max(maxb[i - 1], items[i][1]);
        }
        int max_val =0;
        for( int i=0; i<queries.size(); i++){
            // Binary search to find the first index where items[idx][0] > queries[i]
            auto it = std::upper_bound(items.begin(), items.end(), vector<int>{queries[i],INT_MAX});
            int idx = it - items.begin() - 1;  // Adjust to get the largest valid index

    // Retrieve the maximum beauty value for items meeting the query threshold
            int max_val = (idx >= 0) ? maxb[idx] : 0;  // If idx is valid, use maxb[idx]; else, use 0
            ans.push_back(max_val);
        }
        return ans;
    }
};