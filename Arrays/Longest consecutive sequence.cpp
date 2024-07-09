//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//You must write an algorithm that runs in O(n) time.


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int maxi =0;
        int smallest = INT_MIN;
        if(n==1) return 1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]-1 == smallest){
                count = count +1;
                smallest = nums[i]; 
            }
            else if(nums[i]!=smallest){
                count =1;
                smallest = nums[i];
            }
            else if(nums[i] == smallest){
                count = count;
                smallest = nums[i];
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
