class Solution {
public:
    static  bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second<b.second;
    }
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>freq;
        for(auto x:mp)
        {
            freq.push_back(x);
        }
        sort(freq.begin(),freq.end(),cmp);
        int ans=freq[0].first;
        return ans;


        

        
    }
};