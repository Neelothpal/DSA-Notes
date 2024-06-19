
 //1752. Check if Array Is Sorted and Rotated
//Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false. There may be duplicates in the original array.

class Solution {
public:
    bool check(vector<int>& nums) {
        int n =nums.size();
        int count =0;
        for(int i = 0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                count++;
            }
        }
        if(count <= 1 && nums[0]>=nums[n]){
                return true;
        }
        else{
            return false;
        }
    }
};
