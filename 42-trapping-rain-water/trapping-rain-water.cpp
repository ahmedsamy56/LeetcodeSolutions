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