class Solution 
{
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
		    string s;
		    int frequency[26]={0};
		    for(int i=0;i<A.length();i++){
		       q.push(A[i]);
		       frequency[A[i]-'a']++;
		       while(!q.empty() && frequency[q.front()-'a']!=1){
		           q.pop();
		       }
		       if(!q.empty()){
		           s.push_back(q.front());
		       }
		       else{
		           s.push_back('#');
		       }
		    }
		    return s;
		    // Code here
		}

};