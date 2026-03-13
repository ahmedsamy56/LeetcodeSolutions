class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long mx = INT_MIN , mxind = 0, n= nums.size();
        for (int i = 0; i < n ; ++i) {
            if(mx < nums[i]){
                mxind = i; 
                mx = nums[i];
            }
        }
        
        return mxind;
        
    }
};