class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string inv = "";
        for (int i = s.length() - 1; i >= 0 ; --i) {
            inv += s[i];
        }
        
        if(s == inv){
            return true;
        }

        return false;

    }
};