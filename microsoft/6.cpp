class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void backtrack(int arr[],int i,unordered_map<int,string>m,vector<string>&ans,string &str,int &N){
        if(i==N){
            ans.push_back(str);
            return;
        }
        // string curr=m[arr[i]];
        for(char ch: m[arr[i]]){
            str.push_back(ch);
            backtrack(arr,i+1,m,ans,str,N);
            str.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
       vector<string>ans;
       if(N==0){
           return ans;
       }
       unordered_map<int,string>m;
       m[2]="abc";
       m[3]="def";
       m[4]="ghi";
       m[5]="jkl";
       m[6]="mno";
       m[7]="pqrs";
       m[8]="tuv";
       m[9]="wxyz";
       string str="";
       backtrack(a,0,m,ans,str,N);
       return ans;
       //Your code here
    }
};