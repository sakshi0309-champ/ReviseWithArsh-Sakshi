void rotate(vector<vector<int> >& matrix)
{  int  n=matrix.size();
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
       }
   }
   reverse(begin(matrix),end(matrix));// Your code goes here
}