class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        //cycle
        do
        {
            slow=nums[slow];//move one point
            fast=nums[nums[fast]];//move two point
        }while(slow!=fast);//it form the cycle
        if(slow==fast)//start entrance->duplicate
        {
            slow=nums[0];
            while(slow!=fast)
            {
                slow=nums[slow];
                fast=nums[fast];
            }
        }
        
        return slow;
    }
};