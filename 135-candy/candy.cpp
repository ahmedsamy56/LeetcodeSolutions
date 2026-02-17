class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> ch(n , 1);

        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                ch[i] = ch[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                ch[i] = max(ch[i], ch[i + 1] + 1);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += ch[i];
        }
        return ans;
    }
};