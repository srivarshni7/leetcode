class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int maximum=1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                count++;
            }
            else
            {
                count=1;
            }
            maximum=max(count,maximum);
        }
        return maximum;

        
    }
};