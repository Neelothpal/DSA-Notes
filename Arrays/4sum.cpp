//Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

//0 <= a, b, c, d < n
//a, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> arr;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        for(int i=0; i<n; i++){
            if (i>0 && nums[i] == nums[i - 1]) continue;
            for(int j=i+1; j<n; j++){
                if (j>i+1 && nums[j] == nums[j - 1]) continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[l];
                    sum+=nums[r];
                    if(sum > target){
                        r--;
                    }
                    else if(sum < target){
                        l++;
                    }
                    else{
                        vector<int> temp = {nums[i], nums[j], nums[l], nums[r]};
                        arr.push_back(temp);
                        r--;
                        l++;
                        while (l < r && nums[l] == nums[l - 1]) l++;
                        while (l < r && nums[r] == nums[r + 1]) r--;
                    }
                }
            }
        }
        return arr;
    }
};
