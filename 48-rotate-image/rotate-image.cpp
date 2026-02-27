
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy(matrix);
        for (int i = 0; i < copy.size(); ++i) {
            vector<int>ans;
            for (int j = copy.size() - 1; j >= 0; --j) {
               ans.push_back(copy[j][i]);
            }
            matrix[i] = ans;
        }

    }
};