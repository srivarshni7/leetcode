class Solution {
public:
    void join(vector<int>&leader,int left,int right)
    {
       int lt=find(leader,left);
       int rt=find(leader,right);
       leader[lt]=leader[rt];

    }
    int find(vector<int>&leader,int node)
    {
        if(leader[node]!=node)
        {
            leader[node]=find(leader,leader[node]);
        }
        return leader[node];
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>leader(isConnected.size(),0);
        for(int i=0;i<isConnected.size();i++)
        {
            leader[i]=i;
        }
        
        for(int row=0;row<isConnected.size();row++)
        {
            for(int col=0;col<isConnected[0].size();col++)
            {
                if(isConnected[row][col]==1)
                {
                    join(leader,row,col);
                }
            }
        }
       set<int>s;
       for(int c=0;c<isConnected.size();c++)
       {
        s.insert(find(leader,c));
       }
       return s.size();
        
        
    }
};