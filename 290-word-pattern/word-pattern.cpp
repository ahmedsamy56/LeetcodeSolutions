
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words = split(s);

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (mp1.count(c) && mp1[c] != w) return false;
            if (mp2.count(w) && mp2[w] != c) return false;

            mp1[c] = w;
            mp2[w] = c;
        }

        return true;
    }

    vector<string> split(string s) {
        vector<string> words;
        string current = "";

        for (char c : s) {
            if (c == ' ') {
                words.push_back(current);
                current = "";
            } else {
                current += c;
            }
        }
        words.push_back(current);

        return words;
    }
};
