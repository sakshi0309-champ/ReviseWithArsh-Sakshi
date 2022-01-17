class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count=0;
        int start=0;
        int end=0;
        long long p=1;
        while(end<n){
            p*=a[end];
            while(start<n && p>=k){
                p/=a[start];
                start++;
            }
            if(p<k){
                count+=(end-start+1);
                 end++;
          
            }
        }
        return count;
    }
};