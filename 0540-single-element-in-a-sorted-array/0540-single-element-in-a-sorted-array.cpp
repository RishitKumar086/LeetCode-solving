class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(nums[0]!=nums[1])  return nums[0];
        if(nums[n-1]!=nums[n-2])    return nums[n-1];
        int start=1;
        int end=n-2;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                break;
            else if((mid%2==0 && nums[mid+1]==nums[mid]) || (mid%2==1 && nums[mid-1]==nums[mid]))
                start=mid+1;
            else
                end=mid-1;
            mid=start+(end-start)/2;
        }
        return nums[mid];
    }
};