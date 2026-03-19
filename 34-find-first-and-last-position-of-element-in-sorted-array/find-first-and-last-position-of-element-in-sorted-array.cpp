class Solution {
public:
    int lowerBound(vector<int> &arr,int n,int x)
    {
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
    int upperBound(vector<int> &arr,int n,int x)
    {
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=lowerBound(nums,n,target);
        if(first==n || nums[first]!=target) return {-1,-1};
        return {first,upperBound(nums, n, target)-1};
        
    }
};