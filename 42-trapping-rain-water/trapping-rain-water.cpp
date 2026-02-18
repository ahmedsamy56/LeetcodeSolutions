class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0 , l = 0, r = n - 1;
        int mxl = height[l], mxr = height[n - 1];
        while (l < r) {
            if (mxl <= mxr) {
                l++;
                mxl = max(mxl, height[l]);
                ans += mxl - height[l];
            }else {
                r--;
                mxr = max(mxr, height[r]);
                ans += mxr - height[r];
            }
        }

        return ans;
    }
};

//other solution

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        for (int i = 1; i < n - 1; i++) { 
            int l = height[i]; 
            for (int j = 0; j < i; j++){
                l = max(l, height[j]); 
            }
    
            int r = height[i]; 
            for (int j = i + 1; j < n; j++){
                r = max(r, height[j]); 
            }
    
            
            ans = ans + (min(l, r) - height[i]); 
        } 
        return ans; 
    }
};
