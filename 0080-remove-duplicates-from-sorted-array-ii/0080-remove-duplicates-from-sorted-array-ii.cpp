class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    if(nums.size()==0)
    {
        return 0;
    }
    vector<int>ans;
    ans.push_back(nums[0]);
    int count=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        {
            count++;

        }
        else
        {
            count=1;
        }
        if(count<=2)
        {
            ans.push_back(nums[i]);
        }
    }
    nums=ans;
    return nums.size();
       
     
    }
};