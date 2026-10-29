class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();

        if (n1 > n2)
            return false;

        sort(s1.begin(), s1.end());

        int left = 0, right = n1 - 1;

        while (right < n2) {
            string temp = s2.substr(left, n1);
            sort(temp.begin(), temp.end());

            if (temp == s1) {
                return true;
            }

            left++;
            right++;
        }

        return false;
    }
};