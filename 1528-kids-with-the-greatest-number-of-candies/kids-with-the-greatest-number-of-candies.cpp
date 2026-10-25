class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int mx = -1;
        for (auto i : candies) {
            mx = max(mx, i);
        }
        for (auto i : candies) {
            if (i + extraCandies >= mx)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};