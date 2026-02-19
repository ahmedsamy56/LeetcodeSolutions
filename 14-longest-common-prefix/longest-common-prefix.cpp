class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (int k = 1; k < strs.size(); k++) {
            string& str = strs[k];
            int pos = -1;
            int n = min(str.size(), ans.size());
            for (int i = 0; i < n; i++) {
                if (str[i] == ans[i]) 
                    pos = i;       
                else 
                    break;
            }
            if (pos == -1) return "";
            ans = ans.substr(0, pos + 1);
        }

        return ans;
    }
};
