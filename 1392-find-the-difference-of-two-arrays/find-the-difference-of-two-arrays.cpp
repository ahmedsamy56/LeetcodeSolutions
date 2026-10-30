
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        for (int num : nums1) {
            s2.erase(num);
        }

        for (int nmr : nums2) {
            s1.erase(nmr);
        }

        vector<vector<int>> vr;
        vector<int> v1(s1.begin(), s1.end());
        vector<int> v2(s2.begin(), s2.end());

        vr.push_back(v1);
        vr.push_back(v2);

        return vr;
    }
};
