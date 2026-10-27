class Solution {
public:
    vector<char> numberToChars(int num) {
        string s = to_string(num);
        return vector<char>(s.begin(), s.end());
    }

    int compress(vector<char>& chars) {
        vector<char> ans;
        int n = chars.size();
        int i = 0;

        while (i < n) {
            char crr = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == crr) {
                cnt++;
                i++;
            }

            ans.push_back(crr);

            if (cnt > 1) {
                vector<char> digits = numberToChars(cnt);
                ans.insert(ans.end(), digits.begin(), digits.end());
            }
        }

        chars = ans;
        return ans.size();
    }
};