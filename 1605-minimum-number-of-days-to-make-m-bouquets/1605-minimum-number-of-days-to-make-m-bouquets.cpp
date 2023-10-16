class Solution {
public:
    int isValid(vector<int> arr,int mid,int k)
    {
        int bFormed=0;
        int adaFlower=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=mid)
            {
                adaFlower++;
                if(adaFlower==k)
                {
                    bFormed++;
                    adaFlower=0;
                }
            }
            else if(arr[i]>mid && adaFlower>0)
            {
                adaFlower=0;
            }
        }
        return bFormed;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int n=bloomDay.size();
        if(((long long)m*k)>n)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int start=mini;
        int end=maxi;
        int mid=start+(end-start)/2;
        int ans=maxi;
        while(start<=end)
        {
            if(isValid(bloomDay,mid,k)>=m)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};