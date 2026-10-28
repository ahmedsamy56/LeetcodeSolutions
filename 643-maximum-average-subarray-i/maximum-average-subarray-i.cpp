class Solution {
public:
double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    double avg = 0;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    avg = sum /(double)k;
    int l = 0, r = k;
    while (r < n) {
        sum += nums[r++];
        sum -= nums[l++];
        avg = max(avg , sum /(double)k);
    }
    return avg;

}
};