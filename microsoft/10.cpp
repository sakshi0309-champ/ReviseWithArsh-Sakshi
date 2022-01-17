class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int findsum(int i,int arr[],vector<int>&dp){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
             return dp[i];
        }
       int op1=arr[i]+findsum(i-2,arr,dp);
       int op2=findsum(i-1,arr,dp);
       return dp[i]=max(op1,op2);
           
    }
    int FindMaxSum(int arr[], int n)
    {
       vector<int>dp(10000,-1);
       int sum=findsum(n-1,arr,dp);
       return sum;
        // Your code here
    }
};