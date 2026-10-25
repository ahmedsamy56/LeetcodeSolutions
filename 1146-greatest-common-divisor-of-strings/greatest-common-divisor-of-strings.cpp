class Solution {
public:
    bool isDivisor(string div , string str) {
    string Divisor = div;
    cout<<div.length() <<" "<< str.length()<<endl;
    while (Divisor.length() < str.length()) {
        Divisor += div;
    }
    return Divisor == str;
}
string gcdOfStrings(string str1, string str2) {
    int n = min(str1.length(), str2.length());
    string div = "" , ans = "";
    for (int i = 0; i < n; i++) {
        div += str1[i];

        if (isDivisor(div , str1) && isDivisor(div , str2)) {
            ans = div;
        }
    }

    return ans;

}

};