class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int perimeter=0;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        for(int row=0;row<R;row++)
        {
            for(int col=0;col<C;col++)
            {
                if(grid[row][col]==1)
                {
                    for(int i=0;i<4;i++)
                    {
                        int nr=row+dr[i];
                        int nc=col+dc[i];
                        if(nc<0||nc>=C||nr<0||nr>=R||grid[nr][nc]==0)
                        {
                            perimeter++;
                        }
                    }
                }
            }
        }
     return perimeter;   
    }
};