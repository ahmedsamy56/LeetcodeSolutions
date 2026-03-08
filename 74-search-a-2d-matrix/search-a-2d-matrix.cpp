class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int l = 0, h = row * col - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            int tC = mid % col;
            int tR = mid / col;
            int val = matrix[tR][tC];
            if (val == target)
                return true;

            if (val < target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return false;
    }
};