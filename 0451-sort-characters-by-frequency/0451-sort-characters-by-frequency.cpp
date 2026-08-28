class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        vector<pair<char,int>>arr;
        for(auto x:mp)
        {
            arr.push_back({x.first,x.second});
        }
        sort(arr.begin(),arr.end(),[](pair<char,int>&a,pair<char,int>&b)
        {
            return a.second>b.second;
        });
        string ans="";
        for(auto x:arr)
        {
            int num=x.second;
            for(int i=1;i<=num;i++)
            {
                ans+=(x.first);
            }
        }
        return ans;  
    }
};