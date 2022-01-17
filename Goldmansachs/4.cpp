string encode(string src)
{     
  string s="";
  int count=1;
  for(int i=0;i<src.length();i++){
      if(src[i]==src[i+1]){
          count++;
      }
      else{
          s=s+src[i]+to_string(count);
          count=1;
      }
  }
  return s;//Your code here 
}