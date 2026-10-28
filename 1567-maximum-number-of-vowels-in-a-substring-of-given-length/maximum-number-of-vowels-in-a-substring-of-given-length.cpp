class Solution {
public:
bool isVowels(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int maxVowels(string s, int k) {
    int n = s.length();
    int count = 0, ans = 0;
    for (int i = 0; i < k; i++) {
        if (isVowels(s[i]))
            count++;
    }
    ans = count;
    //cout << count << endl;
    int l = 0 , r = k;
    while (r < n) {
        if (isVowels(s[r++]))
            count++;

        if (isVowels(s[l++]))
            count--;

        ans = max(ans, count);
        //cout << count << endl;
    }
    return ans;
}
};