class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());
       vector<int>ans;
       ans.push_back(nums[0]);
       for(int i=1;i<nums.size();i++)
       {
        if(nums[i-1]!=nums[i])
        {
        ans.push_back(nums[i]);
        }
       }
       int n=ans.size();
       if(n==1)
       {
        return (ans[0]);
       }
       else if(n==2)
       {
        return (ans[0]);
       }
       else
       {
        return ans[2];
       }



      
    }
};