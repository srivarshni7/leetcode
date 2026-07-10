class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto x:mp)
        {
            if(x.second==1)
            {
                int n=x.first;
                ans.push_back(n);
            }
        }
        return ans;
        
    }
};