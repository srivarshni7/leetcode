class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
         if(grid[0][0]==1||grid[R-1][C-1]==1)
         {
            return -1;
         }
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        grid[0][0]=1;
        int dr[]={-1,1,0,0,-1,-1,1,1};
        int dc[]={0,0,1,-1,-1,1,-1,1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            if(r==R-1&&c==C-1)
            {
                return dist;
            }
            for(int i=0;i<8;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<R&&nc>=0&&nc<C&&grid[nr][nc]==0)
                {
                    grid[nr][nc]=1;
                    q.push({{nr,nc},dist+1});//we will push dist same for all direction
                }
            }
        }
        return -1;
    }
};