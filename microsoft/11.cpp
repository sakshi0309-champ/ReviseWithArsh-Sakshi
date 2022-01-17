vector<string> generate(int N)
{
	// Your code here
	vector<string>s;
	queue<string>q;
	q.push("1");
	while(N--){
	    string s1=q.front();
	    q.pop();
	    s.push_back(s1);
	    string s2=s1;
	    q.push(s1.append("0"));
	    q.push(s2.append("1"));
	}
	return s;
}