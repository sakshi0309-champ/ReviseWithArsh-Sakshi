class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int tot=0,cnt=0,days=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    tot++;
                }
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty()){
            int k=q.size();
            cnt+=k;
            for(int i=0;i<k;i++){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int j=0;j<4;j++){
                int nx=x+dx[j];
                int ny=y+dy[j];
                if(nx<0 || nx>=m ||ny<0 || ny>=n || grid[nx][ny]!=1){
                    continue;
                }
                grid[nx][ny]=2;
                q.push({nx,ny});
             }
            }
             if(!q.empty())
                  days++;
        }
        return tot==cnt?days:-1;
    }
};