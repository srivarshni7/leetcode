class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total=n*n;
        unordered_map<int,int>mp;
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                mp[grid[row][col]]++;
            }
        }
        int missing=0;
        int duplicate=0;
        for(int i=1;i<=total;i++)
        {
            if(mp[i]==0)
            {
                missing=i;
            }
            if(mp[i]>1)
            {
                duplicate=i;

            }
        }
        return {duplicate,missing};
    }
};