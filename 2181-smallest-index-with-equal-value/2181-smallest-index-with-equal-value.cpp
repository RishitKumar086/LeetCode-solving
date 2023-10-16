class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int n=i%10;
            if(n==nums[i])
                return i;
        }
        return -1;
    }
};