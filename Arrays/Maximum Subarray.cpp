// Given an integer array nums, find the 
// subarray with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int max0 = INT_MIN;
        int sum =0;
        if(n==1) return nums[0];
        else{
            for(int i=0; i<n; i++){
                sum +=nums[i];
                if(sum>max0){
                    max0=sum;
                }
                if(sum<0){
                    sum =0;  
                }
                
            }
        }
        return max0;
    }
};
