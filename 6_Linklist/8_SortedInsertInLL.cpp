#include<iostream>

class node{
    public:
        int data;
        class node *next;
}*first=NULL;

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

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

void Sorted_Insert(class node *p,int x){

    class node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;
    else{
        while (p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
        
    }
}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    Sorted_Insert(first,9);
    Display(first);

}