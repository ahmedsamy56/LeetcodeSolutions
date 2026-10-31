class Solution {
public:
    string removeStars(string s) {
        int cnt = 0, n = s.size();
        vector<char> v(n);
        for (int i = 0; i < n; i++) {
            if (s[i] == '*' && cnt > 0) {
                cnt--;
            } else {
                v[cnt] = s[i];
                cnt++;
            }
        }
        string res = "";
        for (int i = 0; i < cnt; i++) {
            res += v[i];
        }
        return res;
    }
};