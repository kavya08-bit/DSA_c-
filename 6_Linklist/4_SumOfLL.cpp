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

int sum(class node *p){
    int s=0;
    while (p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
    
}

int R_sum(class node *p){
    if(p==NULL)
        return 0;
    else
        return R_sum(p->next)+p->data;
}


void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

int main(){
    int A[]={3,5,7,10,15,8,12,20};
    create(A,8);
    Display(first);
    std::cout<<std::endl;
    std::cout<<R_sum(first);

}