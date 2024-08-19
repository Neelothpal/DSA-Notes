//Given an integer array nums, find a subarray that has the largest product, and return the product.

//The test cases are generated so that the answer will fit in a 32-bit integer.


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double prefix =1;
        double suffix =1;
        double maxi = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(prefix==0) prefix =1;
            if(suffix==0) suffix =1;
            prefix =prefix* nums[i];
            suffix =suffix*nums[n-i-1];
            maxi = max(maxi, max(prefix, suffix));
        }
        return maxi;
    }
};
