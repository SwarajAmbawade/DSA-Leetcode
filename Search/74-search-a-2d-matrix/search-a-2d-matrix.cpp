class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int high = m*n -1;
        int mid, value;
        
        while (low <= high) {
            mid = low + (high - low)/2;

            value = matrix[mid/n][mid%n];

            if(value == target) {
                return true;
            }
            else if(value < target){
                low = mid + 1;
            }
            else {
                high = mid -1;
            }
        }
        return false;
    }
};