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

int count(class node *p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

void Reverse1(class node *p){
    int *A,i=0;
    class node *q;
    A = new int[count(p)]; 

    while (q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while (q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
    
}

void Reverse2(class node *p){
    class node *q=NULL,*r=NULL;
    while (q!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    
}

void Reverse3(class node *p,class node *q){
    if(p){
        Reverse3(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}
int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    Reverse3(NULL,first);
    Display(first);

}