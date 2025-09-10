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

void RemoveDuplicate(class node *p){
    class node *q=p->next;

    while (q!=NULL)
    {
    if (p->data != q->data) {
        p = q;
        q = q->next;
    }
        else{
            p->next=q->next;
            delete(q);
            q=p->next;
        }
    }
    
}

int main(){
    int A[]={10,20,20,30,30,40};
    create(A,6);
    RemoveDuplicate(first);
    Display(first);

}