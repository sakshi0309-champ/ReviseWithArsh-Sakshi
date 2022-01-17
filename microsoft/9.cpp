int sum(Node* root,int X,int &val){
    if(root==NULL){
        return 0;
    }
    int s=sum(root->left,X,val)+sum(root->right,X,val)+root->data;
    if(s==X){
        val++;
    }
    return s;
}
int countSubtreesWithSumX(Node* root, int X)
{
   int val=0;
   sum(root,X,val);
   return val;// Code here
}