class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
        {
            return 0;
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int diff=nums[0]-nums[1];
        int maxdiff=diff;
        for(int i=2;i<nums.size();i++)
        {
            diff=abs(nums[i]-nums[i-1]);
            if(maxdiff<diff)
            {
                maxdiff=diff;
            }
        }
        return maxdiff;
        
    }
};