class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // we will apply the binary search on the row
        int currentRow = 0;
        int lastRow = matrix.size() - 1;  // as index
        while (currentRow <= lastRow) {
            int mid = (currentRow + lastRow) / 2;
            // searching in the row for the target
            int n = matrix[0].size() - 1;
            if (target > matrix[mid][n]) {
                currentRow = mid + 1;
            } else if (target < matrix[mid][0]) {
                lastRow = mid - 1;
            } else {
                // the target here in this row
                int l = 0;
                int r = n;
                while (l <= r) {
                    int midCol = (l + r) / 2;
                    if (target == matrix[mid][midCol])
                        return true;
                    else if (target > matrix[mid][midCol])
                        l = midCol + 1;
                    else
                        r = midCol - 1;
                }
                return false;
            }
        }
        return false;
    }
};
