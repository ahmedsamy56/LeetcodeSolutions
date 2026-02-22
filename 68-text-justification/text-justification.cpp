class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int i = 0;
        int n = words.size();

        while (i < n) {

            int totalLetters = 0;
            int start = i;

            while (i < n && totalLetters + words[i].length() + (i - start) <= maxWidth) {
                totalLetters += words[i].length();
                i++;
            }

            int wordCount = i - start;
            int totalSpaces = maxWidth - totalLetters;

            string line = "";

            if (i == n || wordCount == 1) {

                for (int j = start; j < i; j++) {
                    line += words[j];
                    if (j < i - 1) line += " ";
                }
                line += string(maxWidth - line.length(), ' ');
            }
            else {
                int gaps = wordCount - 1;
                int spaceEach = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int j = start; j < i; j++) {
                    line += words[j];

                    if (j < i - 1) {
                        line += string(spaceEach + (extra > 0 ? 1 : 0), ' ');
                        if (extra > 0) extra--;
                    }
                }
            }

            res.push_back(line);
        }

        return res;
    }
};
