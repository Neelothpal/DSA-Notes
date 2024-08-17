//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> arr;
        for(int i=0; i<n; i++){
           if(arr.empty() || intervals[i][0] > arr.back()[1]){
            arr.push_back(intervals[i]);
           }
           else{
            arr.back()[1] = max(arr.back()[1], intervals[i][1]);
           }
        }
        return arr;
    }
};
