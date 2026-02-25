class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;

        int wlen = words[0].size();
        int n = words.size();
        int totalLen = wlen * n;

        unordered_map<string, int> m;
        for (string w : words) {
            m[w]++;
        }

        for (int i = 0; i < wlen; i++) {
            int l = i, cnt = 0;
            unordered_map<string, int> inerm;

            for (int j = i; j + wlen <= s.size(); j += wlen) {
                string word = s.substr(j, wlen);

                if (m.count(word)) {
                    inerm[word]++;
                    cnt++;

                    while (inerm[word] > m[word]) {
                        string leftWord = s.substr(l, wlen);
                        inerm[leftWord]--;
                        l += wlen;
                        cnt--;
                    }

                    if (cnt == n) {
                        res.push_back(l);
                    }
                } else {
                    inerm.clear();
                    cnt = 0;
                    l = j + wlen;
                }
            }
        }

        return res;
    }
};