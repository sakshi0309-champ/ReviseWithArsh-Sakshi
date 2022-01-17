class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int find(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }
        int cnt=1;
        grid[i][j]=0;
        for(int r=i-1;r<i+2;r++){
            for(int c=j-1;c<j+2;c++){
                if(r!=i || c!=j){
                    cnt+=find(grid,r,c);
                }
            }
        }
        return cnt;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int maxx=0;
        int count;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count=find(grid,i,j);
                    maxx=max(maxx,count);
                }
            }
        }
        return maxx;
    }
};