class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = n - 1, ans = 0;
        sort(nums.begin(), nums.end());
        // for (auto it : nums) {
        //     cout << it << " ";
        // }
        cout << endl;
        while (l < r) {
            if (nums[l] + nums[r] == k) {
                // cout << nums[l] << " " << nums[r] << " "<<l<<" "<<r<<endl;
                ans++;
                l++;
                r--;
            } else if (nums[l] + nums[r] > k) {
                r--;
            } else {
                l++;
            }
        }
        return ans;
    }
};