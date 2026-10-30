
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> m1;
        map<int, bool> m2;
        vector<vector<int>> ans;
        for (int i = 0; i < nums1.size(); i++) {
            m1[nums1[i]] = true;
        }
        for (int i = 0; i < nums2.size(); i++) {
            m2[nums2[i]] = true;
        }
        vector<int> v1, v2;
        for (int i = 0; i < nums1.size(); i++) {
            if (!m2[nums1[i]]) {
                v1.push_back(nums1[i]);
                m2[nums1[i]] = true;
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (!m1[nums2[i]]) {
                v2.push_back(nums2[i]);
                m1[nums2[i]] = true;
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
