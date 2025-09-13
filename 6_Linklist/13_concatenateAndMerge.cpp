#include<iostream>

class node{
    public:
        int data;
        class node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int n){
    int i;
    class node *t,*last;
    first = new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
} 

void create2(int B[],int n){
    int i;
    class node *t,*last;
    second = new node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++){
        t=new node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

void concat(class node *p,class node*q){
    third=q;
    while (p->next!=NULL)
        p=p->next;
    p->next=q;
}

void merge(class node *p,class node *q){
    class node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;  
        }
        
    }
    if(p)last->next=p;
    if(q)last->next=q;
    
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

    int B[]={5,15,25,35,45};
    create2(B,5);

    merge(first,second);
    
    Display(third);

}