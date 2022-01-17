class Solution {
public:
bool cycledetect(vector<int>adjlist[],int n){
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++){
        for(auto x:adjlist[i]){
            indegree[x]++;
        }
    }
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int cnt=0;
    vector<int>ans;
    while(!q.empty()){
        auto node=q.front();
        q.pop();
        cnt++;
        ans.push_back(node);
        for(auto x:adjlist[node]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
    }
    if(cnt==n){
        return false;
    }
    else{
        return true;
    }
}
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int>adjlist[N];
	    for(auto it:prerequisites){
	        int u=it.second;
	        int v=it.first;
	        adjlist[u].push_back(v);
	    }
	    if(cycledetect(adjlist,N)){
	        return false;
	    }
	    else{
	        return true;
	    }
	}
};