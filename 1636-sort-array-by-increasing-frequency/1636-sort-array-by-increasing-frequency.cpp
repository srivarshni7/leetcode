class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto x:mp)
        {
            arr.push_back({x.first,x.second});
        }
        sort(arr.begin(),arr.end(),[](pair<int,int>&a,pair<int,int>&b)
        {   if(a.second!=b.second){
             return a.second<b.second;
        }
        return a.first>b.first;

        });
        vector<int>ans;
        for(auto x:arr)
        {
            for(int i=0;i<x.second;i++){
            ans.push_back(x.first);
            }
        }
        return ans;
    }
};