class Solution {
public:
void merge(vector<int>& arr, int s, int e)
{
    vector<int> temp;
    int mid = s + (e - s) / 2;
    int left =s;
    int right=mid+1;

    while(left<=mid && right<=e)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=e)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }
}
int countPairs(vector<int> &arr,int s,int e)
{
    int count=0;
    int mid=s+(e-s)/2;
    int left=s;
    int right=mid+1;
    while(left<=mid)
    {
        while(right<=e && arr[left]>(long)2*arr[right])
            right++;
        count+=(right-(mid+1));
        left++;
    }
    return count;
}
int mergeSort(vector<int> &arr, int l, int r) {
    int count=0;
    if(l<r)
    {
        int mid=l+(r-l)/2;
        count+=mergeSort(arr,l,mid);
        count+=mergeSort(arr,mid+1,r);
        count+=countPairs(arr,l,r);
        merge(arr,l,r);
        return count;
    }
    else
        return count;
    // Write Your Code Here
}
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};