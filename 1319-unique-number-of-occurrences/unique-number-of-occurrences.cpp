class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }
        vector<int> v(20001, 0);
        for (auto it : m) {
            if (v[it.second] >= 1)
                return false;
            else
                v[it.second]++;
        }
        return true;
    }
};