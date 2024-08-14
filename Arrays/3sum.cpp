//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> arr;
        for(int i=0; i<n; i++){
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            int l=i+1;
            int r=n-1;
            while (l<r){
                int sum = nums[l]+nums[i]+nums[r];
                if(sum>0){
                    r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    vector<int> temp = {nums[i], nums[l], nums[r]};
                    arr.push_back(temp);
                    r--;
                    l++;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
            }
        }
        return arr;
    }
};
