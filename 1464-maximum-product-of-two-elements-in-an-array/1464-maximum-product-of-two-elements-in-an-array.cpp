class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxsum=0;
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                pro=(nums[i]-1)*(nums[j]-1);
               maxsum=max(pro,maxsum);

            }
        }
        return maxsum;
        
    }
};