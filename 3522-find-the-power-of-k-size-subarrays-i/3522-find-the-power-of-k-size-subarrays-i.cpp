class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> power;
        int l = 0;
        int r = k-1;
        while(r<n){    
            bool isSorted = true;
            int maxi = -1;
            for(int i=l; i<r; i++){
                if(nums[i]+1!=nums[i+1]){
                    isSorted = false;
                    break;
                }
            }
            if(isSorted){
                maxi = nums[r];
            }
            power.push_back(maxi);
            l++;
            r++;
        }

        return power;
    }
};