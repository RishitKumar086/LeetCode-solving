class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long,int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }

        int max=0;
        long finalAns;
         for (auto i : ans){
             if(i.second>max)
             {
                 max=i.second;
                 finalAns=i.first;
             }
         }
         return finalAns;
    }
};