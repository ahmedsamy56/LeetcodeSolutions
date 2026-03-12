class Solution {
public:
    int search(vector<int>& nums, int target) {
        int rPoint = 0 ;
        int l = 0;
        int r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[mid + 1]) {
                rPoint = mid + 1;
                break;
            }
            if (nums[l] <= nums[mid]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        if(target >  nums[nums.size() - 1]){
            l = 0 , r = rPoint - 1;
        }else{
            l = rPoint , r = nums.size() - 1;
        }
        while (l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(target > nums[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        
        return -1;
    }
};