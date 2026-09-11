class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;
        int R=grid.size();
        int C=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int row=0;row<R;row++)
        {
            for(int col=0;col<C;col++)
            {
                if(grid[row][col]==2)
                {
                    q.push({row,col});
                }
                else if(grid[row][col]==1)
                {
                    fresh++;
                }
            }
        }//it will have multiple starting point 
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()&&fresh>0)
        {
            int size=q.size();
            for(int k=0;k<size;k++)
            {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr>=0&&nr<R&&nc>=0&&nc<C&&grid[nr][nc]==1)
                    {
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        fresh--;
                    }
                }

            }
            ans++;
        }
        for(int row=0;row<R;row++)
        {
            for(int col=0;col<C;col++)
            {
                if(grid[row][col]==1)
                {
                    return -1;
                }
            }
        }
        return ans;
    }
};