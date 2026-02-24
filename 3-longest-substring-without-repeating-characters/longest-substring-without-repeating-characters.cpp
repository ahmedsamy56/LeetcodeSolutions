class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0, right = 0, ans = 0;
        unordered_map<char, bool> m;

        while (right < n) {

            if (!m[s[right]]) {
                m[s[right]] = true;
                ans = max(ans, right - left + 1);
                right++;
            } 
            else {
                m[s[left]] = false;
                left++;
            }
        }

        return ans;
    }
};