class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maximum=0;
        int sum=0;
        int left=0;
        for(int right=0;right<k;right++)
        {
            sum+=nums[right];
        }
        maximum=(double)sum/k;
        for(int right=k;right<nums.size();right++)
        {
            sum+=nums[right];
            sum-=nums[left];
            left++;
            maximum=max(maximum,(double)sum/k);
        }
        return maximum;
    }
};