class Solution {
public:
string mergeAlternately(string word1, string word2) {
    int n1 = word1.length(), n2 = word2.length();
    string result = "";
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        string ans = string(1, word1[i]) + string(1, word2[j]);
        result += ans;
        cout << result << " ";
        i++; j++;
    }
    while (i < n1) {
        result += word1[i];
        i++;
    }
    while (j < n2) {
        result += word2[j];
        j++;
    }
    return result;
}
};