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

void Insert(class node *p,int index,int x){
    class node *t;
    int i;
    if(index==0){
        t=new node;
        t->data=x;
        if (head==NULL)
        {
            head=t;
            head->next=head;
        }
        else{
            while (p->next!=head)p=p->next;
            p->next=t;
            t->next=head;
            head=t;
            
        }
        
    }
    else{
        for(i=0;i<index-1;i++)p=p->next;
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    Insert(head,2,10);
    display(head);

}