class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        set<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                    int sum=(arr[i]+arr[j]+arr[left]+arr[right]);
                    if(sum>k){
                        right--;
                    }
                    else if(sum==k){
                        vector<int>t;
                        t.push_back(arr[i]);
                        t.push_back(arr[j]);
                        t.push_back(arr[left]);
                        t.push_back(arr[right]);
                        ans.insert(t);
                        left++;
                    }
                    else{
                        left++;
                    }
                }
            }
        }
        vector<vector<int>>res;
        for(auto it:ans){
            res.push_back(it);
        }
        return res;
    }
};


// class Solution{
//     public:
//     // arr[] : int input array of integers
//     // k : the quadruple sum required
//     vector<vector<int> > fourSum(vector<int> &arr, int k) {
//         // Your code goes here
//         int n=arr.size();
        
//         vector<vector<int>>ans;
//         if(n<4){
//             return ans;
//         }
//         sort(arr.begin(),arr.end());
//         unordered_map<int,vector<pair<int,int>>>m;
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 m[arr[i]+arr[j]].push_back({i,j});
//             }
//         }
//         for(int i=0;i<n-1;i++){
//             if(i>0 and arr[i]==arr[i-1]){
//                 continue;
//             }
//             for(int j=i+1;j<n;j++){
//                 if(j>i+1 and arr[j]==arr[j-1]){
//                     continue;
//                 }
//                 int sum=k-arr[i]-arr[j];
//                 if(m.find(sum)!=m.end()){
//                     for(auto it:m[sum]){
//                         auto k=it.first;
//                         auto l=it.second;
//                         if(k>j){
//                             if(!ans.empty() and ans.back()[0]==arr[i] and ans.back()[1]==arr[j]
//                             and ans.back()[2]==arr[k] and ans.back()[3]==arr[l]){
//                                 continue;
//                             }
//                             vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
//                             ans.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };