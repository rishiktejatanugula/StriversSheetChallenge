int findIntersection(Node *firstHead, Node *secondHead)
{
    int l1=1;
    int l2=1;
    Node *t1=firstHead;
    Node *t2=secondHead;
    while(t1->next!=NULL){
        t1=t1->next;
        l1++;
    }
    while(t2->next!=NULL){
        t2=t2->next;
        l2++;
    }
    if(t1!=t2) return NULL;
    int n=0;
    t1=firstHead;
    t2=secondHead;
    if(l1>l2){
        n=l1-l2;
        while(n>0){
           t1=t1->next;
           n--
        }

    }
    else{
        n=l2-l1;
        while(n>0){
            t2=t2->next;
            n--;
        }
    }
    while(t1->next!=NULL){
        t1=t1->next;
        t2=t2->next;
        if(t1==t2) return t1;
    }
    return NULL;
    
}
