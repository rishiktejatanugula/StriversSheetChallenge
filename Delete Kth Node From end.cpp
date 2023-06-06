Node* removeKthNode(Node* head, int K)
{   if(head==NULL) return head;
    int size=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }
    temp=head;
    Node * dum=NULL;
    for(int i=0;i<size-K;i++){
      dum=temp;
      temp=temp->next;
    }
    if(temp==head){
        dum=head->next;
        head->next=NULL;
        return dum;
    }
    Node * n=temp->next;
    dum->next=n;
    temp->next=NULL;
    return head;
}
