class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<long,int> ans;
       for(int i=0;i<nums.size();i++) 
       {
           ans[nums[i]]++;
       }

       for(auto i : ans)
       {
           if(i.second>1)
           {
               return true;
           }
       }


       return false;
    }
};