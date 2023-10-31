class Solution {
public:
    int digSquareSum(int n)
    {
        int res=0;
        while(n)
        {
            int dig=n%10;
            res+=dig*dig;
            n=n/10;
        }
        return res;
    }
    bool isHappy(int n) {
        vector<int> ans;
        while(n!=1)
        {
            int num=digSquareSum(n);
            if(find(ans.begin(),ans.end(),num)!=ans.end())
                return false;
            ans.push_back(num);
            n=num;
        }
        return true;
    }
};