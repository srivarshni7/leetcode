class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currentsum=0;
        int count=0;
        map<int,int>prefix;
        prefix[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            currentsum+=nums[i];
            int diff=currentsum-k;
            if(prefix.find(diff)!=prefix.end())
            {
                count+=prefix[diff];
            }
            prefix[currentsum]++;

        }
        return count;
        
        
    }
}; 