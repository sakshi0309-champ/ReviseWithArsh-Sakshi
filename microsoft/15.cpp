class Solution{
    public:
    void dfs(int i, vector<int>&visited,vector<int>graph[],string &ans){
        visited[i]=1;
        for(auto x:graph[i]){
            if(!visited[x]){
                dfs(x,visited,graph,ans);
            }
        }
        char ch=i+'a';
        ans=ch+ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
    vector<int>graph[K];
    for(int i=0;i<N-1;i++){
        string s1=dict[i];
        string s2=dict[i+1];
        for(int j=0;j<min(s1.length(),s2.length());j++){
            if(s1[j]!=s2[j]){
                graph[s1[j]-'a'].push_back(s2[j]-'a');
                break;
            }
        }
    }
    // for(int i=0;i<K;i++){
    //  cout<<i<<"->";
    //  for(auto c:graph[i]){
    //   cout<<c<<" ";
    //  }
    //  cout<<endl;
    // }
    vector<int>visited(K,0);
    string ans="";
    for(int i=0;i<K;i++){
        if(!visited[i]){
            dfs(i,visited,graph,ans);
        }
    }
    // cout<<ans;
    return ans;
    }
};