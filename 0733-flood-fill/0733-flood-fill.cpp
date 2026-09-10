class Solution {
public: 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int R=image.size();
       int C=image[0].size();
       int old=image[sr][sc];
       if(old==color)
       {
        return image;
       }
       int dr[]={-1,1,0,0};
       int dc[]={0,0,-1,1};
       queue<pair<int,int>>q;
       q.push({sr,sc});
       image[sr][sc]=color;
       while(!q.empty())
       {
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr<R&&nr>=0&&nc<C&&nc>=0&&image[nr][nc]==old)
            {
                image[nr][nc]=color;
                q.push({nr,nc});
            }
        }

       }
       return image;
    }
};