class Solution{
    public:
    string colName (long long int n)
    {
        string s;
        while(n){
            int rem=n%26;
            if(rem==0){
                s=s+'Z';
                n=n/26 -1;
            }
            else{
                s=s+char((rem-1)+'A');
                n=n/26;
            }
        }
        string str=string(s.rbegin(),s.rend());
        return str;// your code here
    }
};