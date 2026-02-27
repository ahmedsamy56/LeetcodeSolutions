1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        vector<pair<int, int>>v;
5        for (int i = 0; i < matrix.size(); i++) {
6            for (int j = 0; j < matrix[0].size(); j++) {
7                if (matrix[i][j] == 0) {
8                    v.push_back(make_pair(i, j));
9                }
10            }
11        }
12
13        for (auto p : v) {
14            int x = p.first;
15            int y = p.second;
16
17            for (int j = 0; j < matrix[0].size(); j++) {
18                matrix[x][j] = 0;
19            }
20
21            for (int i = 0; i < matrix.size(); i++) {
22                matrix[i][y] = 0;
23            }
24        }
25    }
26};