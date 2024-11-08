class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int l = 0;
        for (int num : nums) {
            l ^= num;
        }
        
        int maximumXor = (1 << maximumBit) - 1;
        vector<int> answer;

        while (n > 0) {
            answer.push_back(maximumXor ^ l);
            l ^= nums[--n];
        }
        
        return answer;
    }
};
