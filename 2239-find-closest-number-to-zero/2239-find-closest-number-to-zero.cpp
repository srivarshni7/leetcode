class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int min=nums[0];
        int mindiff=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
           int  diff=abs(nums[i]-0);
           if(diff<mindiff)
           {
            mindiff=diff;
            min=nums[i];
             }
             else if(diff==mindiff)
             {
                min=max(min,nums[i]);
             }
        }
        return min;
    }
};