#include<iostream>

class node{
    public:
        class node *prev;
        int data;
        class node *next;
}*first=NULL;

void create(int A[],int n){
    class node *t,*last;
    int i;
    first=new node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
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

int count(class node *p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}

void Insert(class node *p,int index,int x){
    class node *t;
    int i;
    if(index<0 || index>count(first))
        return;
    if(index==0){
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next)p->next->prev=t;
        p->next=t;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    Insert(first,2,25);
    std::cout<<"Length is "<<count(first)<<std::endl;
    Display(first);
}