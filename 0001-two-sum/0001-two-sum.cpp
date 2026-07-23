class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
           if(m.find(diff)!=m.end())
           {
                ans.push_back(i);
                ans.push_back(m[diff]);
                break;
           }
        
        m[nums[i]]=i;
    }
    return ans;
        
 
    }
};