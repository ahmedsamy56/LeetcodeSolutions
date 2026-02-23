class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        set<vector<int> >res;
        sort(num.begin(), num.end());
        int i, j, k;
        int n = num.size();
        for (i = 0; i < n - 2; i++) {
            j = i+1;
            k = n-1;
            while (j < k) {
                int sum = num[i] + num[j] + num[k];
                if (sum == 0) {
                    vector<int> temp(3);
                    temp[0] = num[i];
                    temp[1] = num[j];
                    temp[2] = num[k];
                    res.insert(temp);
                    j++;
                    k--;
                } else if (sum > 0) {
                    k--;
                } else if (sum < 0) {
                    j++;
                }
            }
        }
        vector<vector <int> >result (res.begin(), res.end());
        return result;
    }
};
