  //You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers. You should return the array of nums such that the the array follows the given conditions:
  
  //Every consecutive pair of integers have opposite signs.
  //For all integers with the same sign, the order in which they were present in nums is preserved.
  //The rearranged array begins with a positive integer.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> k(n);
        int pos = 0;
        int neg = 1;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                k[pos]=nums[i];
                pos +=2;
            }
            else if(nums[i]<0){
                k[neg]=nums[i];
                neg +=2;
            }
        }
        return k;
    }
};
