
class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        if(K==0 || N<=1){
            return 0;
        }
        int profit=0;
        if(2*K > N){
            for(int i=1;i<N;i++){
                if(A[i]>A[i-1]){
                    profit+=(A[i]-A[i-1]);
                }
            }
            return profit;
        }
        int dp[2*K +1];
        dp[0]=-A[0];
        for(int i=1;i<=2*K;i++){
            if(i%2==0){
                dp[i]=INT_MIN;
            }
            else{
                dp[i]=0;
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<=2*K;j++){
                if(j==0){
                    dp[j]=max(dp[j],-A[i]);
                }
                else if(j%2==0){
                    dp[j]=max(dp[j],dp[j-1]-A[i]);
                }
                else{
                    dp[j]=max(dp[j],dp[j-1]+A[i]);
                }
            }
        }
        return dp[2*K-1];
        
    }
};

