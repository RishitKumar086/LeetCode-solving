class Solution {
public:
long long timeTook(vector<int> &arr,int mid)
{
    long long time=0;
    for(int i=0;i<arr.size();i++)
    {
        time+=ceil((double)arr[i]/(double)mid);
    }
    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        long long max=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            if(max<piles[i])
                max=piles[i];
        }
        long long start=1;
        long long end=max;
        long long mid=start+(end-start)/2;
        long long ans=max;
        while(start<=end)
        {
            long long reqTime=timeTook(piles,mid);
            if(reqTime<=h)
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
};