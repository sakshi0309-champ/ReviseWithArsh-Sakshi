class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {   
        if(s==0){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    return vector<int>{i,i};
                }
            }
            return vector<int>{-1};
        }
        int l=0;
        int r=0;
        int currsum=0;
        while(l<n && r<=n && l<=r){
            if(currsum==s){
                return vector<int>{l+1,r};
            }
            else if(currsum<s){
                currsum+=arr[r++];
            }else{
                currsum-=arr[l++];
            }
        }
        return vector<int>{-1};
       // Your code here
    }
};