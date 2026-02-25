
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : t) {
            mp[c]++;
        }

        int rans = 0, lans = 0;
        int minLength = 10e5;

        int r = 0, l = 0, cnt = t.length();

        while (r <= s.length()) {
            while (!cnt) {
                if (minLength > r - l) {
                    minLength = r - l;
                    rans = r;
                    lans = l;
                }

                if (++mp[s[l++]] > 0) {
                    cnt++;
                }
            }

            if (--mp[s[r++]] >= 0) {
                cnt--;
            }
        }

        return s.substr(lans, rans - lans);
    }
};