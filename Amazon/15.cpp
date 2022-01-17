class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
       int cnt;
       Node* temp=head;
       while(temp){
           cnt=1;
            while(cnt<M && temp!=NULL){
           temp=temp->next;
           cnt++;
       }
       if(temp==NULL){
           return;
       }
       cnt=0;
       Node* curr=temp->next;
       while(cnt!=N && curr!=NULL){
           curr=curr->next;
           cnt++;
       }
       temp->next=curr;
       temp=curr;
       }
      //Add code here   
    }
};