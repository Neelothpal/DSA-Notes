//Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int k =0;
        for(int i=0; i<n; i++){
            if(count==0){
                count =1;
                k = nums[i];
            }
            else if(k==nums[i]){
                count++;
            }
            else {
                count--;
            }
        }
        return k;
    }
};
