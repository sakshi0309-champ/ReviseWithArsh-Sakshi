class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        int t,b,l,ri,dir,i;
        dir=0;
        t=0;
        l=0;
        b=r-1;
        ri=c-1;
        while(t<=b && l<=ri){
            if(dir==0){
                for(int i=l;i<=ri;i++){
                    ans.push_back(matrix[t][i]);
                }
                t++;
            }
            else if(dir==1){
                for(int i=t;i<=b;i++){
                    ans.push_back(matrix[i][ri]);
                }
                 ri--;
            }
            else if(dir==2){
                for(int i=ri;i>=l;i--){
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }
            else if(dir==3){
                for(int i=b;i>=t;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
          dir=(dir+1)%4;
        }// code here 
        return ans;
    }
};
