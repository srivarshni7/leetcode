class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
    int count=0;
     int R=grid.size();
     int C=grid[0].size();
     vector<vector<int>>visit(R,vector<int>(C,0));
     int dr[]={-1,1,0,0};
     int dc[]={0,0,-1,1};
     queue<pair<int,int>>q;
     for(int row=0;row<R;row++)
     {
        for(int col=0;col<C;col++)
        {
            if(grid[row][col]=='1'&&visit[row][col]==0)
            {
                q.push({row,col});
                while(!q.empty())
                {    
                    int r=q.front().first;
                    int c=q.front().second;
                    visit[r][c]=1;
                    q.pop();
                    for(int i=0;i<4;i++)
                    {
                        int nr=r+dr[i];
                        int nc=c+dc[i];
                        if(nr<R&&nr>=0&&nc<C&&nc>=0&&visit[nr][nc]==0&&grid[nr][nc]=='1')
                        {
                            visit[nr][nc]=1;
                            q.push({nr,nc});
                        }
                    }
                }
                count++;
            }
        }
     }
     return count;
        
    }
};