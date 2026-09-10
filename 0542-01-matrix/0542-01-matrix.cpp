class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int R=mat.size();
        int C=mat[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>dis(R,vector<int>(C,-1));
        for(int row=0;row<R;row++)
        {
            for(int col=0;col<C;col++)
            {
                if(mat[row][col]==0)
                {
                    dis[row][col]=0;
                    q.push({row,col});
                }
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr<R&&nc<C&&nc>=0&&nr>=0&&dis[nr][nc]==-1)
                {
                    dis[nr][nc]=dis[r][c]+1;
                    q.push({nr,nc});
                }
            }
        }
        return dis;
    }
};