class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return false;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int l=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            else if(nums[i]==nums[i-1]+1)
            {
                count++;
            }
            else
            {
                l=max(l,count);
                count=1;
            }
        }
        return (max( l,count));

        
    }
};