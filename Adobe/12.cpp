class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
               s.push(a[i]);
            }
            else if(!s.empty() && a[i]<s.top()){
                continue;
            }
            else{
                s.push(a[i]);
                }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};