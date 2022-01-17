class Solution {
  public:
  Node* find_parent(Node* root,unordered_map<Node*,Node*>&parent_track,int target){
      queue<Node*>q;
      q.push(root);
      Node* res;
      while(!q.empty()){
              Node* temp=q.front();
              q.pop();
              if(temp->data==target){
                  res=temp;
              }
              if(temp->left){
                  parent_track[temp->left]=temp;
                  q.push(temp->left);
              }
              if(temp->right){
                  parent_track[temp->right]=temp;
                  q.push(temp->right);
              }
      }
      return res;
  }
    int minTime(Node* root, int target) 
    {
       unordered_map<Node*,Node*>parent_track;
       Node* res=find_parent(root,parent_track,target);
       queue<Node*>q;
       unordered_map<Node*,bool>visited;
       visited[res]=true;
       int time=0;
       q.push(res);
       while(!q.empty()){
           int n=q.size();
           int fl=0;
            for(int i=0;i<n;i++){
               Node* temp=q.front();
               q.pop();
               if(temp->left && !visited[temp->left]){
                   fl=1;
                   q.push(temp->left);
                   visited[temp->left]=true;
                   
               }
               if(temp->right && !visited[temp->right]){
                   fl=1;
                   q.push(temp->right);
                   visited[temp->right]=true;
               }
               if(parent_track[temp] && !visited[parent_track[temp]]){
                   fl=1;
                   q.push(parent_track[temp]);
                   visited[parent_track[temp]]=true;
               }
           }
           if(fl==1){
               time++;
           }
       }
       return time;// Your code goes here
    }
};