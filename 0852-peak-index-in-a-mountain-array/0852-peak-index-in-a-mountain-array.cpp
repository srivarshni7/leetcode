class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        unordered_map<int,int>mp;
        int maximum=INT_MIN;
        int ans=-1;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]=i;
            if(maximum<arr[i])
            {
                maximum=arr[i];
                ans=i;
            }
        }
        return ans;
    }
};