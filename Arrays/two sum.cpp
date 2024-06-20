//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            int num = nums[i];
            int req_num = target-num;
            if(mpp.find(req_num) != mpp.end()){
                return {mpp[req_num], i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
        
    }
};
