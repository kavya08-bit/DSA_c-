#include<iostream>

class node{
    public:
        int data;
        class node *next;
}*head;

void create(int A[],int n){
    int i;
    class node *t,*last;
    head=new node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last =t;
    }
}

void display(class node *h){
    do
    {
        std::cout<<h->data<<" ";
        h=h->next;
    } while (h!=head);
    std::cout<<std::endl;
    
}
int count(class node *p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}

int Delete(class node *p,int index){
    class node *q;
    int i,x;
    if(index<0 || index>count(head))
        return -1;
    if(index==1){
        while(p->next!=head)p=p->next;
        x=head->data;
        if(head==p){
            free(head);
            head=NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else{
        for ( i = 0; i < index-2; i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
        
    }
    return x;
}


int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    Delete(head,1);
    display(head);

}