class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int N=floor(nums.size()/3);
        map<int,int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        vector<int> Fans;
        for(auto i:ans)
        {
            // cout<<i.first<<endl;
            // cout<<i.second<<endl;

            if(i.second>N)
                Fans.push_back(i.first);
        }
        return Fans;
    }
};