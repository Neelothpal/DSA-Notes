//Given an m x n matrix, return all elements of the matrix in spiral order.


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> vec;
        int top = 0, left = 0, right = m - 1, bottom = n - 1;

        while(left<=right && top<=bottom){
            for(int i=left; i<=right; i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i<=bottom; i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return vec;
    }
};
