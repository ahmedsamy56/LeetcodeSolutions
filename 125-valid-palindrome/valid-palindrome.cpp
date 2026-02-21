class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string t;
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= '0' && s[i] <= '9')) {
                t += tolower(s[i]);
            }
        }
        cout << t << endl;
        len = t.length();
        for (int i = 0; i < len; i++) {
            if (t[i] != t[len - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};
