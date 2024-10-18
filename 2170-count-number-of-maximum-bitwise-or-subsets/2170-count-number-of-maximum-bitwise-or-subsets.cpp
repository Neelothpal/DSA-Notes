class Solution {
public:
    void backtrack(const vector<int> &nums, int index, int currentOr, int maxOr, int &count){
        if(currentOr == maxOr){
            count++;
        }
        for(int i=index; i<nums.size(); ++i){
            backtrack(nums, i+1, currentOr | nums[i], maxOr, count);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr =0;
        for(int num : nums)
        {
            maxOr |= num;
        }
        int count =0;
        backtrack(nums, 0, 0, maxOr, count);
        return count;
    }
};