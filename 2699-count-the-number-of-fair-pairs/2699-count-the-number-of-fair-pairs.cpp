#include <vector>
#include <algorithm>

class Solution {
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n - 1; i++) {
            int left = i + 1;
            int right = n - 1;
          
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] >= lower) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            int low = left;

            left = i + 1;
            right = n - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] <= upper) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            int high = right;

            if (low <= high) {
                count += (high - low + 1);
            }
        }

        return count;
    }
};
