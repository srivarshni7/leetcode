class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int N=nums.size();
        sort(nums.begin(),nums.end());
        int pro1=nums[N-1]*nums[N-2]*nums[N-3];
        int pro2=nums[0]*nums[1]*nums[N-1];
        int maxi=max(pro1,pro2);
        return maxi;    
    }
};