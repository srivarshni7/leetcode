class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            int val=x.first;
            if( mp.count(val+1)){
                ans=max(ans,mp[val]+mp[val+1]);
            }
        }
        return ans;
    }
};