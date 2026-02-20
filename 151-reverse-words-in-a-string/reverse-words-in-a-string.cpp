
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        bool flag = false;
        string str = "";
        while (i < n) {
            string temp;
            while (i < n && s[i] != ' ') {
                flag = true;
                temp += s[i++];
            }
            if (flag) {
                str = temp + ' ' + str;
                flag = false;
            }else {
                i++;
            }
        }
        str.pop_back();
        return  str;
    }
};
