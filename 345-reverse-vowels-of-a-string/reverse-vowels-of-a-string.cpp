class Solution {
public:
    bool isVowels(char& a) {
        return a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' ||
               a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U';
    }
    string reverseVowels(string s) {
        vector<char> v;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (isVowels(s[i])) {
                v.push_back(s[i]);
            }
        }
        int cz = v.size() - 1;
        string res = "";
        for (auto ch : s) {
            if (isVowels(ch)) {
                res += v.at(cz);
                cz--;
            } else {
                res += ch;
            }
        }
        return res;
    }
};