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

int isLoop(class node *f){
    class node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while (p && q && p!=q);

    if(p==q)return 1;
    else return 0;
    
    
}

int main(){
    class node *t1,*t2;
    int A[]={3,5,7,10,15};
    create(A,5);

    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;

    std::cout<<isLoop(first);


}