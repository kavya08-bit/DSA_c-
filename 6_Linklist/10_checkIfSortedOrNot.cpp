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

int IsSorted(class node *p){
    int x =INT32_MIN;
    while(p!=NULL){
        if(p->data<x)
            return false;
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main(){
    int A[]={1,2,3,4,5,6};
    create(A,5);
    if(IsSorted(first))
        std::cout<<"sorted";
    else
        std::cout<<"not sorted";
    std::cout<<std::endl;
    Display(first);

}